/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class CAShapeLayer;

@interface WACameraZoomSlider : _ABAddressBookCopyArrayOfAllGroups
{
    CAShapeLayer *_holePunchLayer;
}

- (void).cxx_destruct;
- (void)cancelTrackingWithEvent:(id)fp8;
- (void)endTrackingWithTouch:(id)fp8 withEvent:(id)fp12;
- (void)fadeOutWithDuration:(double)fp8;
- (void)fadeOut;
- (void)fadeOutAfterDelay;
- (void)setValueAndFadeOut:(float)fp8;
- (struct CGRect)thumbRectForBounds:(struct CGRect)fp8 trackRect:(struct CGRect)fp24 value:(float)fp40;
- (id)initWithFrame:(struct CGRect)fp8;

@end

