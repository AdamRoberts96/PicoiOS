//
//  KeyPair.swift
//  Scanner
//
//  Created by Adam Roberts on 05/02/2017.
//  Copyright © 2017 Adam Roberts. All rights reserved.
//

import Foundation

class KeyPair {
    var publicKey: String = ""
    var privateKey: String = ""
    
    init(pub: String, priv: String){
        self.publicKey = pub
        self.privateKey = priv
    }
    
    func getPublicKey() -> String {
        return publicKey
    }
    
    func getPrivateKey() -> String {
        return privateKey
    }
    
}
