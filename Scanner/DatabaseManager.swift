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
    
    databasePath = dirPaths[0].appendingPathComponent("test.db").path
    
    if !filemgr.fileExists(atPath: databasePath as String) {
        
        let databaseConnection = FMDatabase(path: databasePath as String)
        
        if databaseConnection == nil {
            print("Error: \(databaseConnection?.lastErrorMessage())")
        }
        
        if (databaseConnection?.open())! {
            let createPairingTableStatement = "CREATE TABLE KEYPAIRS(PUB TEXT, PRIV TEXT)"
            if !(databaseConnection?.executeStatements(createPairingTableStatement))! {
                print("Error: \(databaseConnection?.lastErrorMessage())")
            }
            
            
            
            databaseConnection?.close()
        } else {
            print("Error: \(databaseConnection?.lastErrorMessage())")
        }
    }
}

    func storeData(pubKey:String, privKey:String) ->KeyPair{
        
    var output: KeyPair? = nil
    
    var databasePath = String();
    
    let filemgr = FileManager.default
    let dirPaths = filemgr.urls(for: .documentDirectory,
                                    in: .userDomainMask)
        
    databasePath = dirPaths[0].appendingPathComponent("test.db").path
    
    if filemgr.fileExists(atPath: databasePath as String) {
            
        let databaseConnection = FMDatabase(path: databasePath as String)
        
        if databaseConnection == nil {
            print("Error: \(databaseConnection?.lastErrorMessage())")
        }
            
        if (databaseConnection?.open())! {
            //let paramArray: NSArray = [pubKey, privKey]
            let addQuery = "INSERT INTO KEYPAIRS (PUB, PRIV) VALUES (?, ?) "
            let addSuccessful = databaseConnection?.executeUpdate(addQuery, withArgumentsIn: [pubKey, privKey])
            if !addSuccessful! {
                print("insert failed: \(databaseConnection?.lastErrorMessage())")
            }
            print(databaseConnection?.lastErrorMessage())
            
            let testSelectQuery = "SELECT * FROM KEYPAIRS"
            let resultSet: FMResultSet? = databaseConnection?.executeQuery(testSelectQuery, withArgumentsIn: nil)
            let resultPub = (resultSet?.columnIndex(forName: "PUB"))!
            let resultPriv = (resultSet?.columnIndex(forName: "PRIV"))!
            print(databaseConnection?.lastErrorMessage())
            let count = resultSet?.columnCount()
            while(resultSet?.next())!{
                output = KeyPair(pub: (resultSet?.string(forColumnIndex: 0))!, priv: (resultSet?.string(forColumnIndex: 1))!)
                print(resultSet?.string(forColumnIndex: 0))
                print(resultSet?.string(forColumnIndex: 1))
            }
            let out = resultSet?.object(forColumnIndex: 0)
            print(databaseConnection?.lastErrorMessage())
            print(out)
            
            databaseConnection?.close()
        } else {
            print("Error: \(databaseConnection?.lastErrorMessage())")
        }
    }
        return output!;
}

