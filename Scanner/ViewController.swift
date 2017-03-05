//
//  ViewController.swift
//  Scanner
//
//  Created by Adam Roberts on 20/11/2016.
//  Copyright © 2016 Adam Roberts. All rights reserved.
//

import UIKit
import AVFoundation
import LocalAuthentication

class ViewController: UIViewController, AVCaptureMetadataOutputObjectsDelegate {
    
    var captureSession: AVCaptureSession!
    var previewLayer: AVCaptureVideoPreviewLayer!
    var shared = shared_new();

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    override func viewDidLoad() {
        super.viewDidLoad()
        
        view.backgroundColor = UIColor.black
        captureSession = AVCaptureSession()
        
        let videoCaptureDevice = AVCaptureDevice.defaultDevice(withMediaType: AVMediaTypeVideo)
        let videoInput: AVCaptureDeviceInput
        
        do {
            videoInput = try AVCaptureDeviceInput(device: videoCaptureDevice)
        } catch {
            return
        }
        
        if (captureSession.canAddInput(videoInput)) {
            captureSession.addInput(videoInput)
        } else {
            failed();
            return;
        }
        
        let metadataOutput = AVCaptureMetadataOutput()
        
        if (captureSession.canAddOutput(metadataOutput)) {
            captureSession.addOutput(metadataOutput)
            
            metadataOutput.setMetadataObjectsDelegate(self, queue: DispatchQueue.main)
            metadataOutput.metadataObjectTypes = [AVMetadataObjectTypeQRCode]
        } else {
            failed()
            return
        }
        
        previewLayer = AVCaptureVideoPreviewLayer(session: captureSession);
        previewLayer.frame = view.layer.bounds;
        previewLayer.videoGravity = AVLayerVideoGravityResizeAspectFill;
        view.layer.addSublayer(previewLayer);
        
        captureSession.startRunning();
        keypair_generate(shared_get_pico_identity_key(shared))
        let filemgr = FileManager.default
        let dirPaths = filemgr.urls(for: .documentDirectory,
                                    in: .userDomainMask)
        var pubPath = dirPaths[0]
        var privPath = dirPaths[0]
        pubPath.appendPathComponent("pub")
        pubPath.appendPathExtension("key")
        privPath.appendPathComponent("priv")
        privPath.appendPathExtension("key")
        let pubPathString = pubPath.path
        let privPathString = privPath.path
        if (!(filemgr.fileExists(atPath: pubPathString)) && !(filemgr.fileExists(atPath: privPathString))){
            keypair_export(shared_get_pico_identity_key(shared), pubPathString, privPathString)
        }
        keypair_import(shared_get_pico_identity_key(shared), pubPathString, privPathString)
        databaseOnStart()
        //storeData()
    }
    
    func failed() {
        let ac = UIAlertController(title: "Error", message: "Could not connect to camera.", preferredStyle: .alert)
        ac.addAction(UIAlertAction(title: "OK", style: .default))
        present(ac, animated: true)
        captureSession = nil
    }
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        
        if (captureSession?.isRunning == false) {
            captureSession.startRunning();
        }
    }
    
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        
        if (captureSession?.isRunning == true) {
            captureSession.stopRunning();
        }
    }
    
    func captureOutput(_ captureOutput: AVCaptureOutput!, didOutputMetadataObjects metadataObjects: [Any]!, from connection: AVCaptureConnection!) {
        captureSession.stopRunning()
        
        if let metadataObject = metadataObjects.first {
            let readableObject = metadataObject as! AVMetadataMachineReadableCodeObject;
            
            AudioServicesPlaySystemSound(SystemSoundID(kSystemSoundID_Vibrate))
            found(code: readableObject.stringValue);
        }
        
        
    }
    
    func found(code: String) {
        captureSession.stopRunning()
        /* print(code)
        if let dataFromString = code.data(using: .utf8, allowLossyConversion: false) {
            var context:LAContext = LAContext();
            var error:NSError?
            var success:Bool;
            var reason:String = "Please authenticate using TouchID.";
            
            if (context.canEvaluatePolicy(LAPolicy.deviceOwnerAuthenticationWithBiometrics, error: &error))
            {
                context.evaluatePolicy(LAPolicy.deviceOwnerAuthenticationWithBiometrics, localizedReason: reason, reply: { (success, error) -> Void in
                    if (success) {
                        print("Auth was OK");
                    }
                    else
                    {
                        //You should do better handling of error here but I'm being lazy
                        print("Error received: %d", error!);
                        return
                    }
                });
            }
            let codeJson = JSON(data: dataFromString)
            let codeType = codeJson["t"].stringValue
            var address = codeJson["sa"].stringValue
            print(address)
            address = address.replacingOccurrences(of: "http://rendezvous.mypico.org/channel/" , with: "")
            print(address)
            let channel = channel_connect(address)
            if (channel_open(channel)){
                print("Channel opened")
            }
            if (codeType == "KP"){
                print(codeJson["spk"].stringValue)
            }
         success = sigmaprover(channel, shared, code) */
        var picoSuccesful = false
       
        DispatchQueue.main.async {
            picoSuccesful = handleCode(code: code, shared: self.shared!, vController: self)
        }

        
        
            //let picoSuccesful = handleCode(code: code, shared: shared!)
            //let fullMessage = getType(codeType: codeType)
       
            var messageString:String
        
        if (picoSuccesful){
            messageString = "Succesfully authenticated"
        } else {
            messageString = "Error authenticating with service"
        }
        captureSession.startRunning()
    }
    //}
    
    func displayMessage(title: String, body: String){
        let typeAlert = UIAlertController(title: title, message: body, preferredStyle: .alert)
        let OKAction = UIAlertAction(title: "OK", style: .default) { (action:UIAlertAction!) in
            self.dismiss(animated: true)
        }
        typeAlert.addAction(OKAction)
        present(typeAlert, animated: true)
    }
    
    func getType(codeType: String) -> String {
        var message: String
        switch codeType{
            case "TP":
                message = "Found SignedVisualCode"
            case "DP":
                message = "Found DelegatePairingVisualCode"
            case "KA":
                message = "Found KeyAuthenticationVisualCode"
            case "KP":
                message = "Found KeyPairingVisualCode"
            case "LA":
                message = "Found LensAuthenticationVisualCode"
            case "LP":
                message = "Found LensPairingVisualCode"
            case "PA":
                message = "Found ProxyAuthVisualCode"
            default:
                message = "Could not find a valid Pico code"
        }
        return message
    }
    
    override var prefersStatusBarHidden: Bool {
        return true
    }
    
    override var supportedInterfaceOrientations: UIInterfaceOrientationMask {
        return .portrait
    }
}


