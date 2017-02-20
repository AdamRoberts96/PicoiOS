//
//  TouchID.swift
//  Scanner
//
//  Created by Adam Roberts on 16/02/2017.
//  Copyright © 2017 Adam Roberts. All rights reserved.
//

import Foundation
import LocalAuthentication

func authenticateUser() -> Bool {
    
    let context = LAContext()
    var error: NSError?
    var reasonString = "Scan your fingerprint to use Pico"

    if context.canEvaluatePolicy(LAPolicy.DeviceOwnerAuthenticationWithBiometrics, error: &error) {
        [context .evaluatePolicy(LAPolicy.DeviceOwnerAuthenticationWithBiometrics, localizedReason: reasonString, reply: { (success: Bool, evalPolicyError: NSError?) -> Void in
            
            if success {
                return true
            }
            else{
                // If authentication failed then show a message to the console with a short description.
                // In case that the error is a user fallback, then show the password alert view.
                println(evalPolicyError?.localizedDescription)
                
                switch evalPolicyError!.code {
                    
                case LAError.SystemCancel.toRaw():
                    println("Authentication was cancelled by the system")
                    return false
                    
                case LAError.UserCancel.toRaw():
                    println("Authentication was cancelled by the user")
                    return false
                    
                    
                default:
                    println("Authentication failed")
                    return false
                }
            }
            
        })]
    }
}
