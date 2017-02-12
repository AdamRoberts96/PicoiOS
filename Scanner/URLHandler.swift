//
//  URLHandler.swift
//  Scanner
//
//  Created by Adam Roberts on 14/12/2016.
//  Copyright © 2016 Adam Roberts. All rights reserved.
// 

import Foundation
//Requires Alamofire library
import Alamofire

func sendGETRequest(url: String, parameters: Parameters) -> JSON{
    var result: JSON = JSON.null
    Alamofire.request(url, method: .get, parameters: parameters).validate().responseJSON{ response in
        switch response.result {
        case.success:
            result = response.result.value as! JSON
        case.failure(let error):
            print(error)
        }
    }
    return result

}

func sendPOSTRequest(url: String, parameters: Parameters) -> (){
    Alamofire.request(url, method: .post, parameters: parameters).validate().responseJSON{ response in
        if response.result.isFailure{
            print(response.result.debugDescription)
        }   
    }
}
