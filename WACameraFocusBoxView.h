/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class UIColor;

@interface WACameraFocusBoxView : _ABAddressBookCopyArrayOfAllGroups
{
    UIColor *_borderColor;
}

+ (id)focusAnimationOfDuration:(double)fp8;
- (void)setBorderColor:(id)fp8;
- (id)borderColor;
- (void).cxx_destruct;
- (void)animationDidStop:(id)fp8 finished:(BOOL)fp12;
- (void)presentAtPoint:(struct CGPoint)fp8 inView:(id)fp16;
- (void)drawRect:(struct CGRect)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end

