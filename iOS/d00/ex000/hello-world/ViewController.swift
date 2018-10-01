//
//  ViewController.swift
//  hello-world
//
//  Created by Spencer SCHAFER on 2018/10/01.
//  Copyright © 2018 Spencer SCHAFER. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    @IBAction func printMessage(_ sender: Any) {
        print("Hello World!")
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
}
