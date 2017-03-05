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
            let createPairingTableStatement = "CREATE TABLE KEYPAIRS(KEY TEXT)"
            if !(databaseConnection?.executeStatements(createPairingTableStatement))! {
                print("Error: \(databaseConnection?.lastErrorMessage())")
            }
            let sql_stmt = "CREATE TABLE KEYTEST(KEY TEXT)"
            if !(databaseConnection?.executeStatements(sql_stmt))! {
                print("Error: \(databaseConnection?.lastErrorMessage())")
            }
            databaseConnection?.close()
        } else {
            print("Error: \(databaseConnection?.lastErrorMessage())")
        }
    }
}

func storeData(key:String){
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
            let addQuery = "INSERT INTO KEYTEST (KEY) VALUES ('test'), ('test2')"
            let addSuccessful = databaseConnection?.executeUpdate(addQuery, withArgumentsIn: nil)
            if !addSuccessful! {
                print("insert failed: \(databaseConnection?.lastErrorMessage())")
            }
            print(databaseConnection?.lastErrorMessage())
            
            let testSelectQuery = "SELECT * FROM KEYTEST"
            let resultSet: FMResultSet? = databaseConnection?.executeQuery(testSelectQuery, withArgumentsIn: nil)
            var result: Int32 = 1
            result = (resultSet?.columnIndex(forName: "KEY"))!
            print(databaseConnection?.lastErrorMessage())
            let count = resultSet?.columnCount()
            while(resultSet?.next())!{
                print(resultSet?.string(forColumnIndex: 0))
            }
            let out = resultSet?.object(forColumnIndex: 0)
            print(databaseConnection?.lastErrorMessage())
            print(out)
            
            databaseConnection?.close()
        } else {
            print("Error: \(databaseConnection?.lastErrorMessage())")
        }
    }
}

