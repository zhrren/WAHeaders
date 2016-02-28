/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAVideoScrubberPrecisionRangeSlider.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class UIImageView, UIView;

@interface WAVideoScrubberTrimmer : WAVideoScrubberPrecisionRangeSlider <UIGestureRecognizerDelegate>
{
    UIImageView *_leftHandleView;
    UIImageView *_rightHandleView;
    UIImageView *_middleFillView;
    UIView *_coverContainerView;
    UIView *_leftCover;
    UIView *_rightCover;
    UIImageView *_scrubberThumb;
    float _thumbValueBeforeDragging;
    float _thumbValue;
}

+ (float)preferredHeight;
- (float)thumbValue;
- (void).cxx_destruct;
- (void)handleThumbPan:(id)fp8;
- (void)didEndDragging;
- (void)didBeginDragging;
- (BOOL)shouldBeginDraggingWithTouch:(id)fp8;
- (BOOL)gestureRecognizerShouldBegin:(id)fp8;
- (id)rightHandleView;
- (id)leftHandleView;
- (void)didChangeRange;
- (struct CGRect)frameForThumbnailBar;
- (float)minimumRangeWidth;
- (void)setThumbHidden:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setThumbValue:(float)fp8;
- (void)layoutSubviews;
- (void)getFramesForLeftHandle:(struct CGRect *)fp8 atPosition:(float)fp12 rightHandle:(struct CGRect *)fp16 atPosition:(float)fp20 leftMostVisiblePosition:(float)fp24 rightMostVisiblePosition:(float)fp28;
- (id)initWithFrame:(struct CGRect)fp8;

@end
