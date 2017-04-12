    //
//  DatabaseManager.swift
//  Scanner
//
//  Created by Adam Roberts on 28/12/2016.
//  Copyright © 2016 Adam Roberts. All rights reserved.
//

import Foundation


func databaseOnStart() {
    var databasePath = String();
    
    let filemgr = FileManager.default
    let dirPaths = filemgr.urls(for: .documentDirectory,
                                in: .userDomainMask)
    
    databasePath = dirPaths[0].appendingPathComponent("keys.db").path
    
    if !filemgr.fileExists(atPath: databasePath as String) {
        
        let databaseConnection = FMDatabase(path: databasePath as String)
        
        if databaseConnection == nil {
            print("Error: \(databaseConnection?.lastErrorMessage())")
        }
        
        if (databaseConnection?.open())! {
            let createPairingTableStatement = "CREATE TABLE KEYPAIRS(PICOPUB TEXT, PICOPRIV TEXT, SERVICECOMMIT TEXT, EXTRADATA TEXT)"
            if !(databaseConnection?.executeStatements(createPairingTableStatement))! {
                print("Error: \(databaseConnection?.lastErrorMessage())")
            }
            
            
            
            databaseConnection?.close()
        } else {
            print("Error: \(databaseConnection?.lastErrorMessage())")
        }
    }
}

    func storeData(picoPubKey:String, picoPrivKey:String, serviceCommit: String, extraData: String) ->(){
        
    var databasePath = String();
    
    let filemgr = FileManager.default
    let dirPaths = filemgr.urls(for: .documentDirectory,
                                    in: .userDomainMask)
        
    databasePath = dirPaths[0].appendingPathComponent("keys.db").path
    
    if filemgr.fileExists(atPath: databasePath as String) {
            
        let databaseConnection = FMDatabase(path: databasePath as String)
        
        if databaseConnection == nil {
            print("Error: \(databaseConnection?.lastErrorMessage())")
        }
            
        if (databaseConnection?.open())! {
            //let paramArray: NSArray = [pubKey, privKey]
            let addQuery = "INSERT INTO KEYPAIRS (PICOPUB, PICOPRIV, SERVICECOMMIT, EXTRADATA) VALUES (?, ?, ?, ?) "
            let addSuccessful = databaseConnection?.executeUpdate(addQuery, withArgumentsIn: [picoPubKey, picoPrivKey, serviceCommit, extraData])
            if !addSuccessful! {
                print("insert failed: \(databaseConnection?.lastErrorMessage())")
            }
            print(databaseConnection?.lastErrorMessage())

            
            databaseConnection?.close()
        } else {
            print("Error: \(databaseConnection?.lastErrorMessage())")
        }
    }
}

    func getPairingInfo(commit: String) -> KeyPair{
        var keyPairs = [KeyPair]()
        
        var databasePath = String();
        
        let filemgr = FileManager.default
        let dirPaths = filemgr.urls(for: .documentDirectory,
                                    in: .userDomainMask)
        
        databasePath = dirPaths[0].appendingPathComponent("keys.db").path
        
        if filemgr.fileExists(atPath: databasePath as String) {
            
            let databaseConnection = FMDatabase(path: databasePath as String)
            
            if databaseConnection == nil {
                print("Error: \(databaseConnection?.lastErrorMessage())")
            }
            
            if (databaseConnection?.open())! {
                let selectQuery = "SELECT * FROM KEYPAIRS WHERE SERVICECOMMIT = ?"
                let resultSet: FMResultSet? = databaseConnection?.executeQuery(selectQuery, withArgumentsIn: [commit])
                while(resultSet?.next())!{
                    let tempPair = KeyPair(pub: (resultSet?.string(forColumnIndex: 0))!, priv: (resultSet?.string(forColumnIndex: 1))!,
                                           commit: (resultSet?.string(forColumnIndex: 2))!, extraData: (resultSet?.string(forColumnIndex: 3))!)
                    keyPairs.append(tempPair)
                }
            }
        }
        
        if (keyPairs.count >= 1){
            return keyPairs[0]
        }
        
        else{
            return KeyPair(pub: "", priv: "", commit: "", extraData: "")
        }
        
    }
    
    func storeData(keypair: KeyPair){
        storeData(picoPubKey: keypair.getPublicKey(), picoPrivKey: keypair.getPrivateKey(),
                  serviceCommit: keypair.getCommit(), extraData: keypair.getExtraData())
    }
