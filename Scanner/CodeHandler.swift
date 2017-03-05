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
                        print(codeJson["spk"].stringValue)
                    }
                    output = sigmaprover(channel, shared, code)
                    vController.displayMessage(title: "Code Found", body: "Authentication Succesful")
                }
                else {
                    print("Error received: %d", error!);
                    vController.displayMessage(title: "Code Found", body: "Authentication Unsuccesful")

                    output = false
                }
            });
        }
    }
    return output
}
