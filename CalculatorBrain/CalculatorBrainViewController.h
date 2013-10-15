//
//  CalculatorBrainViewController.h
//  CalculatorBrain
//
//  Created by John Figueiredo on 10/14/13.
//  Copyright (c) 2013 John Figueiredo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CalculatorBrain.h"

@interface CalculatorBrainViewController : UIViewController {
    IBOutlet UILabel *display;
    CalculatorBrain *brain;
    BOOL userIsInTheMiddleOfTypingANumber;
}

- (IBAction)digitPressed:(id)sender;
- (IBAction)operationPressed:(id)sender;
- (IBAction)clearDisplayValueToZero:(id)sender;

@end
