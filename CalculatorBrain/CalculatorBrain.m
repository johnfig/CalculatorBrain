//
//  CalculatorBrain.m
//  CalculatorBrain
//
//  Created by John Figueiredo on 10/14/13.
//  Copyright (c) 2013 John Figueiredo. All rights reserved.
//

#import "CalculatorBrain.h"

@implementation CalculatorBrain

-(void)setOperand:(double)anOperand {
    operand = anOperand;
}

-(void)performWaitingOperation {
    if ([@"+" isEqual:waitingOperation]) {
        operand = waitingOperand + operand;
    } else if ([@"-" isEqual:waitingOperation]) {
        operand = waitingOperand - operand;
    } else if ([@"*" isEqual:waitingOperation]) {
        operand = waitingOperand * operand;
    } else if ([@"/" isEqual:waitingOperation]) {
        if (operand) {
            operand = waitingOperand / operand;
        }
    }
}

-(double)performOperation:(NSString *)operation {
    if ([operation isEqual:@"sqrt"]) {
        operand = sqrt(operand);
    } else {
        [self performWaitingOperation];
        waitingOperation = operation;
        waitingOperand = operand;
    }
    return operand;
}

@end
