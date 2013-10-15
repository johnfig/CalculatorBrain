//
//  CalculatorBrain.h
//  CalculatorBrain
//
//  Created by John Figueiredo on 10/14/13.
//  Copyright (c) 2013 John Figueiredo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject {
    double operand;
    NSString *waitingOperation;
    double waitingOperand;
}

-(void)setOperand:(double)anOperand;
-(double)performOperation:(NSString *)operation;

@end
