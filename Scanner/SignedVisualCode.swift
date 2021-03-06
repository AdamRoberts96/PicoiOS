//
//  SignedVisualCode.swift
//  Scanner
//
//  Created by Adam Roberts on 20/11/2016.
//  Copyright © 2016 Adam Roberts. All rights reserved.
//

import Foundation

class SignedVisualCode: VisualCode {
   
    let  terminalName: String
    let  nonce: Data
    
    
    init(type: String, terminalName: String, nonce: Data){
        self.terminalName = terminalName
        self.nonce = nonce
        super.init(type: type)
    }
    
    func getType() -> String{
        return self.type
    }
    
}
