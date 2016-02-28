/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@interface WASpringAnimator : _ABAddressBookCopyArrayOfAllGroups
{
    double _x;
    double _v;
    double _initialVelocity;
    double _t;
    double _tension;
    double _friction;
}

- (void)setFriction:(double)fp8;
- (double)friction;
- (void)setTension:(double)fp8;
- (double)tension;
- (double)t;
- (void)integrateState:(double)fp8 v:(double)fp16 speed:(double)fp24 outX:(inout double *)fp32 outV:(inout double *)fp36;
- (void)evaluateStateWithDerivative:(double)fp8:(double)fp16:(double)fp24:(double)fp32:(double)fp40:(double *)fp48:(double *)fp52;
- (void)evaluateState:(double)fp8:(double)fp16:(double *)fp24:(double *)fp28;
- (void)advanceByTimeDelta:(double)fp8;
- (double)value;
- (void)reset;
- (id)initWithInitialVelocity:(double)fp8;

@end
