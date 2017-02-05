//
//  SigmaProver.swift
//  Scanner
//
//  Created by Adam Roberts on 05/02/2017.
//  Copyright © 2017 Adam Roberts. All rights reserved.
//

import Foundation

let vKeyPair = KeyPair(pub: "A2+3D+9Aq/VQB8jdJ7+k1euTHX0iwas+mQ==", priv: "gdSNzDu7PRdeX2+/Qh0toFtjc7Y9jlZS");

func createKeys() -> KeyPair {
    let crypto : GMEllipticCurveCrypto = GMEllipticCurveCrypto.generateKeyPair(for: GMEllipticCurveSecp192r1);
    print(crypto.publicKeyBase64)
    print(crypto.privateKeyBase64)
    let returnKeyPair = KeyPair(pub: crypto.publicKeyBase64, priv: crypto.privateKeyBase64)
    return returnKeyPair
}

func ecdh() -> () {
    let aliceCrypto : GMEllipticCurveCrypto = GMEllipticCurveCrypto.crypto(for: GMEllipticCurveSecp192r1) as!GMEllipticCurveCrypto
    let bobCrypto : GMEllipticCurveCrypto = GMEllipticCurveCrypto.crypto(for: GMEllipticCurveSecp192r1) as! GMEllipticCurveCrypto
    
    let pKeyPair : KeyPair = createKeys()
    
    aliceCrypto.privateKeyBase64 = pKeyPair.getPrivateKey()
    aliceCrypto.publicKeyBase64 = pKeyPair.getPublicKey()
    bobCrypto.privateKeyBase64 = vKeyPair.getPrivateKey()
    bobCrypto.publicKeyBase64 = vKeyPair.getPublicKey()
    
    let aliceSecret : Data = aliceCrypto.sharedSecret(forPublicKeyBase64: vKeyPair.getPublicKey())
    let bobSecret : Data = bobCrypto.sharedSecret(forPublicKeyBase64: pKeyPair.getPublicKey())
    
    let equalTo = aliceSecret.elementsEqual(bobSecret)
    if(equalTo){
        print("Yes!")
    }
    if(!equalTo){
        print("No!")
    }
    
    func ecdsa() -> (){
        
    }
    
    
}
