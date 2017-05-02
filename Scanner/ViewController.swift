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
        let pub = buffer_new(0);
        let priv = buffer_new(0);
        cryptosupport_getpublicpem(keypair_getpublickey(shared_get_pico_identity_key(shared)), pub)
        cryptosupport_getprivatepem(keypair_getprivatekey(shared_get_pico_identity_key(shared)), priv)
        let privstring = buffer_copy_to_new_string(priv)
        let pubstring = buffer_copy_to_new_string(pub)
        let pubNS = String.init(cString: pubstring!)
        let privNS = String.init(cString: privstring!)
        //let storedKey = storeData(pubKey: pubNS, privKey: privNS)
        //shared_set_pico_identity_public_key(shared, keypair_new())
       //keypair_import_from_string(shared_get_pico_identity_key(shared), storedKey.getPublicKey(), storedKey.getPrivateKey())
       // let testCurve = Curve()
         //createKeyPairSwiftECC(curve: testCurve)
        //testOpenSSL()
        //let testpoint = Point(x: BInt(number: "fe42fd28d09b6df20f58a56d59016da5bdd19302db040e21", withBase: 16), y: BInt(number: "fc52a1209bf8595da822b7346672888b8e969c5ba1f61cb7", withBase: 16))
        //let testval = isOnCurve(point: testpoint, curve: testCurve)
       // print (testval)
        //let curve = Curve()
        //var testmod = BInt(number: "fe42fd28d09b6df20f58a56d59016da5bdd19302db040e21", withBase: 16)
        //print(inverseMod(k: testmod, p: curve.p))
        //print(inverseMod2(k: testmod, p: curve.p))
        //let kpair = KPair(curve: curve)
        //let sig = signMessage(privateKey: kpair.privKey, message: "test message", curve: curve)
        //let output = verifySignature(publicKey: kpair.pubKey, message: "test message", r: sig.0, s: sig.1, curve: curve)
        //let falsePoint = KPair(curve: curve)
        //let falseOutput = verifySignature(publicKey: kpair.pubKey, message: "test message", r: falsePoint.pubKey.x, s: falsePoint.pubKey.y, curve: curve)
        //print(output)
        //print(falseOutput)
        //testCurveDHFloat(curve: curve)
        //let curve256 = Curve(curveName: "secp256k1")
        //testCurveDHFloat(curve: curve256)
    }
    
    func failed() {
        let ac = UIAlertController(title: "Error", message: "Could not connect to camera.", preferredStyle: .alert)
        ac.addAction(UIAlertAction(title: "OK", style: .default))
        present(ac, animated: true)
        captureSession = nil
    }
    
    func textPopup() -> String{
        var text = ""
        var alert = UIAlertController(title: "Alert", message: "Message", preferredStyle: UIAlertControllerStyle.alert)
        alert.addAction(UIAlertAction(title: "Click", style: UIAlertActionStyle.default, handler: nil))
        alert.addTextField(configurationHandler: {(textField: UITextField!) in
            textField.placeholder = "Enter text:"
            text = textField.text!
        })
        self.present(alert, animated: true, completion: nil)
        return text
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
        var picoSuccesful = false
       
        picoSuccesful = handleCode(code: code, shared: self.shared!, vController: self)

    }
    
    func displayMessage(title: String, body: String){
        let typeAlert = UIAlertController(title: title, message: body, preferredStyle: .alert)
        let OKAction = UIAlertAction(title: "OK", style: .default) { (action:UIAlertAction!) in
            self.dismiss(animated: true)
            self.captureSession.startRunning()
       
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


