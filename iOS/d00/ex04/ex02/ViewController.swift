//
//  ViewController.swift
//  ex02
//
//  Created by Spencer SCHAFER on 2018/10/01.
//  Copyright © 2018 Spencer SCHAFER. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    var placeholder:Int64 = 0
    var display:Int64 = 0;
    //var ops:[String] = ("+", "-", "*", "/")
    var op:Int = 0
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    @IBOutlet weak var displayLabel: UILabel!
    
    func modifyDisplay(number:Int64) {
        display = (display * 10) + number
        if (display <= 2147483647 && display >= -2147483648) {
            displayLabel.text = String(display)
            print("{ \(placeholder):\(display) }")
        }
        else {
            print("[ LIMIT ] ")
            displayLabel.text = "Limited Reached"
        }
    }
    
    @IBAction func acButton(_ sender: Any) {
        print("[ AC ]")
        display = 0
        placeholder = 0
        displayLabel.text = String(display)
    }
    
    @IBAction func negButton(_ sender: Any) {
        print("[ NEG ]")
        display *= -1
        displayLabel.text = String(display)
        print("{ \(placeholder):\(display) }")
    }
    
    @IBAction func divideButton(_ sender: Any) {
        print("[ ÷ ]")
        print("{ \(placeholder):\(display) }")
        if (placeholder == 0) {
            placeholder = display
        }
        else {
            placeholder /= display
        }
        
        op = 3
        display = 0
        displayLabel.text = String(display)
    }
    
    @IBAction func multiplyButton(_ sender: Any) {
        print("[ × ]")
        print("{ \(placeholder):\(display) }")
        if (placeholder == 0) {
            placeholder = display
        }
        else {
            placeholder *= display
        }
        op = 2
        display = 0
        displayLabel.text = String(display)
    }
    
    @IBAction func minusButton(_ sender: Any) {
        print("[ - ]")
        print("{ \(placeholder):\(display) }")
        if (placeholder == 0) {
            placeholder = display
        }
        else {
            placeholder -= display
        }
        op = 1
        display = 0
        displayLabel.text = String(display)
    }
    
    @IBAction func plusButton(_ sender: Any) {
        print("[ + ]")
        print("{ \(placeholder):\(display) }")
        if (placeholder == 0) {
            placeholder = display
        }
        else {
            placeholder += display
        }
        op = 0
        display = 0
        displayLabel.text = "0"
    }
    
    @IBAction func equalButton(_ sender: Any) {
        print("[ = ]")
            switch(op) {
            case 0:
                placeholder += display
                displayLabel.text = String(placeholder)
                print("{ \(placeholder):\(display) }")
                display = placeholder
                placeholder = 0
                break
            case 1:
                placeholder -= display
                displayLabel.text = String(placeholder)
                print("{ \(placeholder):\(display) }")
                display = placeholder
                placeholder = 0
                break
            case 2:
                placeholder *= display
                displayLabel.text = String(placeholder)
                print("{ \(placeholder):\(display) }")
                display = placeholder
                placeholder = 0
                break
            case 3:
                if (display == 0) {
                    displayLabel.text = "Not a number"
                } else {
                    placeholder /= display
                    displayLabel.text = String(placeholder)
                    print("{ \(placeholder):\(display) }")
                    display = placeholder
                    placeholder = 0
                }
                break
            default:
                break
        }
    }
    
    @IBAction func zeroButton(_ sender: Any) {
        print("[ 0 ]")
        modifyDisplay(number: 0)
    }
    
    @IBAction func oneButton(_ sender: Any) {
        print("[ 1 ]")
        modifyDisplay(number: 1)
    }
    
    @IBAction func twoButton(_ sender: Any) {
        print("[ 2 ]")
        modifyDisplay(number: 2)
    }
    
    @IBAction func threeButton(_ sender: Any) {
        print("[ 3 ]")
        modifyDisplay(number: 3)
    }
    
    @IBAction func fourButton(_ sender: Any) {
        print("[ 4 ]")
        modifyDisplay(number: 4)
    }
    
    @IBAction func fiveButton(_ sender: Any) {
        print("[ 5 ]")
        modifyDisplay(number: 5)
    }
    
    @IBAction func sixButton(_ sender: Any) {
        print("[ 6 ]")
        modifyDisplay(number: 6)
    }
    
    @IBAction func sevenButton(_ sender: Any) {
        print("[ 7 ]")
        modifyDisplay(number: 7)
    }
    
    @IBAction func eightButton(_ sender: Any) {
        print("[ 8 ]")
        modifyDisplay(number: 8)
    }
    
    @IBAction func nineButton(_ sender: Any) {
        print("[ 9 ]")
        modifyDisplay(number: 9)
    }
}
