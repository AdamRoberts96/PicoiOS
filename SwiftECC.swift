//
//  SwiftECC.swift
//  Scanner
//
//  Created by Adam Roberts on 23/03/2017.
//  Copyright © 2017 Adam Roberts. All rights reserved.
//

import Foundation

class Point{
    let x: BInt
    let y: BInt
    
    init(x:BInt, y:BInt){
        self.x = x
        self.y = y
    }
    
    static func ==(lhs: Point, rhs: Point) -> Bool{
        return(lhs.x == rhs.x && lhs.y == rhs.y)
    }
    
}

class KPair{
    let privKey: BInt
    let pubKey: Point
    let curve: Curve
    
    init(curve: Curve){
        self.privKey = randomBInt(bits: 96)
        self.pubKey = scalarMultiply(k: privKey, point: curve.basePoint, curve: curve)
        self.curve = curve
    }
}

class Curve {
    let name: String
    //Field parameter
    let p: BInt
    
    //Curve coefficients
    let a: BInt
    let b: BInt
    
    //Base point
    let basePoint:Point
    
    //Subgroup order
    let n: BInt
    
    //Subgroup cofactor
    let h: BInt
    
    init(){
        
        //Parameters specified by NIST at http://www.secg.org/SEC2-Ver-1.0.pdf
        self.name = "secp192r1"
        self.p = BInt(number: "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFFFFFFFFFF".lowercased(), withBase: 16)
        self.a = BInt(number: "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFFFFFFFFFC".lowercased(), withBase: 16)
        self.b = BInt(number: "64210519E59C80E70FA7E9AB72243049FEB8DEECC146B9B1".lowercased(), withBase: 16)
        self.basePoint = Point(x: BInt(number: "188DA80EB03090F67CBF20EB43A18800F4FF0AFD82FF1012".lowercased(), withBase: 16),
                               y: BInt(number: "07192B95FFC8DA78631011ED6B24CDD573F977A11E794811".lowercased(), withBase: 16))
        self.n = BInt(number: "FFFFFFFFFFFFFFFFFFFFFFFF99DEF836146BC9B1B4D22831".lowercased(), withBase: 16)
        self.h = BInt(1)
        
    }
    
}

//Returns the inverse of k modulo p
func inverseMod(k:BInt, p:BInt) -> BInt{
    
    if (k == 0){
        print ("Cannot divide by 0")
        return BInt(0)
    }
    
    if (k < 0){
        return p - inverseMod(k: -k, p: p)
    }
    var s = BInt(0)
    var oldS = BInt(1)
    var t = BInt(1)
    var oldT = BInt(0)
    var r = p
    var oldR = k
    var quotient = BInt(0)
    var temp = BInt(0)
    
    while (r != 0){
        quotient = (oldR / r)
        
        temp = r
        r = oldR - (quotient * r)
        oldR = temp
        
        temp = t
        t = oldT - (quotient * t)
        oldT = temp
        
        temp = s
        s = oldS - (quotient * s)
        oldS = temp
    }
    
    let gcd = oldR
    
    //+p to make positive as BInt has trouble with negative mod
    let x = oldS + p
    let y = oldT
    assert(gcd == 1)
    assert((k * x) % p == 1)
    
    return x % p
}

func isOnCurve(point:Point, curve:Curve) -> Bool{
    let nullPoint = Point(x: 0,y: 0)
    
    if (point == nullPoint){
        return true
    }
    let test = (((point.y * point.y) - (point.x * point.x * point.x) - (curve.a * point.x) - curve.b) % curve.p)
    return (((point.y * point.y) - (point.x * point.x * point.x) - (curve.a * point.x) - curve.b) % curve.p == 0)
}

func pointNeg(point:Point, curve:Curve) -> Point{
    assert(isOnCurve(point: point, curve: curve))
    return Point(x: point.x, y:((curve.p - point.y) % curve.p))
}

func pointAdd(point1: Point, point2: Point, curve: Curve) -> Point{
    let nullPoint = Point(x: 0,y: 0)
    
    assert(isOnCurve(point: point1, curve: curve))
    assert(isOnCurve(point: point2, curve: curve))
    
    if(point1 == nullPoint){
        return point2
    }
    
    if (point2 == nullPoint){
        return point1
    }
    

    let x1 = point1.x
    let y1 = point1.y
    
    let x2 = point2.x
    let y2 = point2.y
    
    if(x1 == x2 && y1 != y2){
        return Point(x: 0,y: 0)
    }
    var m = BInt(0)
    
    if (x1 == x2){
        m = (3 * x1 * x1 + curve.a) * inverseMod(k: 2 * y1, p: curve.p)
    } else {
        m = (y1 - y2) * inverseMod(k: x1 - x2, p: curve.p)
    }
    
    var x3 = m * m - x1 - x2
    var y3 = y1 + m * (x3 - x1)
    
    x3 = ((x3 + curve.p) % curve.p)
    y3 = ((y3) % curve.p)
    
    let out = Point(x: x3, y: y3)
    
    assert(isOnCurve(point: out, curve: curve))
    
    return out
}

//Returns a scalar multiple of the point using the double and add method
func scalarMultiply(k: BInt, point: Point, curve:Curve) -> Point{
    let nullPoint = Point(x: 0,y: 0)
    
    if (k % curve.n == 0 || point == nullPoint){
        return nullPoint
    }
    
    var mult = k
    
    if (mult < 0){
        //-k * point == k * -point
        return scalarMultiply(k: -k, point: pointNeg(point: point, curve: curve), curve: curve)
    }
    
    var result = nullPoint
    var add = point
    
    while (mult != 0) {
        
        if (mult % 2 == 1){
            
            result = pointAdd(point1: result, point2: add, curve: curve)
        
        }
        
        add = pointAdd(point1: add, point2: add, curve: curve)
        
        mult = mult >> 1
        
    }
    
    assert(isOnCurve(point: result, curve: curve))
    return result
}

func createKeyPairSwiftECC(curve: Curve){
    let aliceKey = KPair(curve: curve)
    let bobKey = KPair(curve: curve)
    let s1 = scalarMultiply(k: aliceKey.privKey, point: bobKey.pubKey, curve: curve)
    let s2 = scalarMultiply(k: bobKey.privKey, point: aliceKey.pubKey, curve: curve)
    print("ECDH - Checking if shared secret matches")
    print(s1==s2)
}

