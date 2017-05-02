//
//  CodeHandler.swift
//  Scanner
//
//  Created by Adam Roberts on 02/03/2017.
//  Copyright © 2017 Adam Roberts. All rights reserved.
//

import Foundation
import UIKit
import LocalAuthentication

func handleCode(code:String, shared:OpaquePointer, vController:ViewController) -> Bool {
    
    print(code)
    var output = false
    var pairingExists = false
    let startTotal = DispatchTime.now()
    let startDate = Date()
    if let dataFromString = code.data(using: .utf8, allowLossyConversion: false) {
        let context:LAContext = LAContext()
        var error:NSError?
        let reason:String = "Authenticate with TouchID."
        

        if (context.canEvaluatePolicy(LAPolicy.deviceOwnerAuthenticationWithBiometrics, error: &error)) {
            context.evaluatePolicy(LAPolicy.deviceOwnerAuthenticationWithBiometrics, localizedReason: reason, reply: { (success, error) -> Void in
                if (success) {
                    let codeJson = JSON(data: dataFromString)
                    let codeType = codeJson["t"].stringValue

                    
                    var address = codeJson["sa"].stringValue
                    print(address)
                    address = address.replacingOccurrences(of: "http://rendezvous.mypico.org/channel/" , with: "")
                    print(address)
                    let channel = channel_connect(address)
                    if (channel_open(channel)){
                        print("Channel opened")
                    }
                    
                    
                    if (codeType == "KP"){
                        
                        let extraData = codeJson["ed"].stringValue
                        
                        keypair_generate(shared_get_pico_identity_key(shared))
                        
                        pairingExists = true
                        
                    }
                    
                    if (codeType == "KA"){
                        
                        let serviceCommit = codeJson["sc"].stringValue
                        
                        let keyPairing = getPairingInfo(commit: serviceCommit)
                        
                        if(keyPairing.getPublicKey() == ""){
                            pairingExists = false
                        } else {
                            pairingExists = true
                        }
                        
                        keypair_import_from_string(shared_get_pico_identity_key(shared), keyPairing.getPublicKey(), keyPairing.getPrivateKey())
                        //shared_set_extra_data(shared, keyPairing.getExtraData().cString(using: String.Encoding.utf8))
                        shared_set_extra_data(shared, keyPairing.getExtraData().cString(using: String.Encoding.utf8))
                        
                        
                    }

                    let sigDate = Date()
                    if(pairingExists){
                        output = sigmaprover(channel, shared, code)
                    }
                    
                    if (codeType == "KP"){
                        
                        let extraData = String(cString: shared_get_extra_data(shared))
                        let servicePublicKeyString = codeJson["spk"].stringValue
                        var servicePublicKey = EC_KEY_new()
                        servicePublicKey = keypair_load_public_key_from_string(servicePublicKeyString);
                        let commitBuffer = buffer_new(0)
                        cryptosupport_generate_commitment_base64(servicePublicKey, commitBuffer)
                        let commitCString = buffer_copy_to_new_string(commitBuffer)
                        let commitSwiftString = String(cString: commitCString!)
                        
                        
                        let pub = buffer_new(0);
                        let priv = buffer_new(0);
                        cryptosupport_getpublicpem(keypair_getpublickey(shared_get_pico_identity_key(shared)), pub)
                        cryptosupport_getprivatepem(keypair_getprivatekey(shared_get_pico_identity_key(shared)), priv)
                        let picoPrivCString = buffer_copy_to_new_string(priv)
                        let picoPubCString = buffer_copy_to_new_string(pub)
                        
                        let picoPrivSwiftString = String(cString: picoPrivCString!)
                        let picoPubSwiftString = String(cString: picoPubCString!)
                        print(extraData)
                        
                        let storeKey = KeyPair(pub: picoPubSwiftString, priv: picoPrivSwiftString, commit: commitSwiftString, extraData: extraData)
                        
                        shared_set_extra_data(shared, extraData.cString(using: String.Encoding.utf8))
                        print(shared_get_extra_data(shared))
                        storeData(keypair: storeKey)
                        pairingExists = true
                        
                    }

                    let endDate = Date()
                    
                    let dateastime = endDate.timeIntervalSince(startDate)
                    let finSig = endDate.timeIntervalSince(sigDate)
                    
                    print("Time for total run = \(dateastime) seconds")
                    print("Time for sigmaProver = \(finSig) seconds")
                    
                    if (output){
                        DispatchQueue.main.async {
                            vController.displayMessage(title: "Code Found", body: "Authentication Succesful")
                        }
                    } else {
                        DispatchQueue.main.async {
                            vController.displayMessage(title: "Code Found", body: "Authentication Unsuccesful - Error communicating with Rendezvous Point")
                        }

                    }
                }
                else {
                 //   print("Error received: %d", error!);
                    DispatchQueue.main.async {
                        vController.displayMessage(title: "Code Found", body: "Authentication Unsuccesful - Could not connect to TouchID")
                    }

                    output = false
                }
            });
        }
    }
    return output
}
