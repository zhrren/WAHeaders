/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAShapeView.h"

@interface WAPulsingCircleView : WAShapeView
{
    WAShapeView *_innerCircle;
    float _innerCircleRadius;
}

- (float)innerCircleRadius;
- (void).cxx_destruct;
- (void)setPulseAnimation:(id)fp8;
- (id)pulseAnimation;
- (void)setInnerCircleRadius:(float)fp8;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)fp8;

@end

