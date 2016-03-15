/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "WAVideoScrubberPrecisionRangeSlider.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, UIView, UIImageView;
@protocol WAVideoScrubberTrimmerDelegate;

__attribute__((visibility("hidden")))
@interface WAVideoScrubberTrimmer : WAVideoScrubberPrecisionRangeSlider <UIGestureRecognizerDelegate> {
	UIImageView* _leftHandleView;
	UIImageView* _rightHandleView;
	UIImageView* _middleFillView;
	UIView* _coverContainerView;
	UIView* _leftCover;
	UIView* _rightCover;
	UIImageView* _scrubberThumb;
	float _thumbValueBeforeDragging;
	float _thumbValue;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<WAVideoScrubberTrimmerDelegate> delegate;
@property(assign, nonatomic) float thumbValue;
@property(readonly, assign, nonatomic) CGRect frameForThumbnailBar;
+(float)preferredHeight;
-(void).cxx_destruct;
-(void)handleThumbPan:(id)pan;
-(void)didEndDragging;
-(void)didBeginDragging;
-(BOOL)shouldBeginDraggingWithTouch:(id)touch;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(id)rightHandleView;
-(id)leftHandleView;
-(void)didChangeRange;
-(float)minimumRangeWidth;
-(void)setThumbHidden:(BOOL)hidden animated:(BOOL)animated;
-(void)layoutSubviews;
-(void)getFramesForLeftHandle:(CGRect*)leftHandle atPosition:(float)position rightHandle:(CGRect*)handle atPosition:(float)position4 leftMostVisiblePosition:(float)position5 rightMostVisiblePosition:(float)position6;
-(id)initWithFrame:(CGRect)frame;
@end

