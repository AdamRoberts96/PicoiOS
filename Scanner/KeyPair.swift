//
//  KeyPair.swift
//  Scanner
//
//  Created by Adam Roberts on 05/02/2017.
//  Copyright © 2017 Adam Roberts. All rights reserved.
//

import Foundation

class KeyPair {
    let picoPublicKey: String
    let picoPrivateKey: String
    let serviceCommit: String
    let extraData: String

    
    init(pub: String, priv: String, commit: String, extraData: String){
        self.picoPublicKey = pub
        self.picoPrivateKey = priv
        self.serviceCommit = commit
        self.extraData = extraData

    }
    
    func getPublicKey() -> String {
        return picoPublicKey
    }
    
    func getPrivateKey() -> String {
        return picoPrivateKey
    }
    
    func getCommit() -> String {
        return serviceCommit
    }
    
    func getExtraData() -> String{
        return extraData
    }
    
}
