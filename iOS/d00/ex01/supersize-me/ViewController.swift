//
//  ViewController.swift
//  supersize-me
//
//  Created by Spencer SCHAFER on 2018/10/01.
//  Copyright © 2018 Spencer SCHAFER. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    var display:Int = 0;
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    @IBOutlet weak var textLabel: UILabel!
    
    @IBAction func changeLabelButton(_ sender: Any) {
        if (display == 0) {
            display = 1;
            textLabel.text = "Goodbye!"
        } else if (display == 1) {
            display = 0;
            textLabel.text = "Hello!"
        }
    }
}
