//
//  DatabaseManager.swift
//  Scanner
//
//  Created by Adam Roberts on 28/12/2016.
//  Copyright © 2016 Adam Roberts. All rights reserved.
//

import Foundation

func onStart() {
    var databasePath = String();
    
    let filemgr = FileManager.default
    let dirPaths = filemgr.urls(for: .documentDirectory,
                                in: .userDomainMask)
    
    databasePath = dirPaths[0].appendingPathComponent("keystore.db").path
    
    if !filemgr.fileExists(atPath: databasePath as String) {
        
        let contactDB = FMDatabase(path: databasePath as String)
        
        if contactDB == nil {
            print("Error: \(contactDB?.lastErrorMessage())")
        }
        
        if (contactDB?.open())! {
            let sql_stmt = "CREATE TABLE IF NOT EXISTS KEYS"
            if !(contactDB?.executeStatements(sql_stmt))! {
                print("Error: \(contactDB?.lastErrorMessage())")
            }
            contactDB?.close()
        } else {
            print("Error: \(contactDB?.lastErrorMessage())")
        }
    }
}

func storeData(){
    let insertQuery = "INSERT INTO keystore";
    let insertSuccesful =
}
