/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>

@class UILabel, NSString, UIButton, WACircleView, CAKeyframeAnimation, UIColor, NSObject;
@protocol WACameraButtonViewDelegate, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface WACameraButtonView : UIView {
	UIView* _outerRing;
	WACircleView* _innerRing;
	WACircleView* _circleShadow;
	UILabel* _textLabel;
	UIButton* _button;
	BOOL _depressed;
	NSObject<OS_dispatch_group>* _animationDispatchGroup;
	CAKeyframeAnimation* _bounceAnimation;
	BOOL _longPressing;
	BOOL _cancelsOnRelease;
	id<WACameraButtonViewDelegate> _delegate;
	UIView* _contentView;
}
@property(retain, nonatomic) UIColor* buttonColor;
@property(assign, nonatomic) BOOL cancelsOnRelease;
@property(readonly, assign, nonatomic) UIView* contentView;
@property(copy, nonatomic) NSString* text;
@property(readonly, assign, nonatomic) BOOL longPressing;
@property(assign, nonatomic) __weak id<WACameraButtonViewDelegate> delegate;
-(void).cxx_destruct;
-(id)loopedBounceAnimationFrom:(double)from to:(double)to;
-(void)performTransitionToReadyAnimation;
-(void)performTransitionToRecordAnimation;
-(void)setUserInteractionEnabled:(BOOL)enabled;
-(void)updateButtonHighlight;
-(void)finishTouch;
-(void)beginLongPress;
-(void)handleTouchDragExit:(id)exit;
-(void)handleTouchDragEnter:(id)enter;
-(void)handleTouchCancelled:(id)cancelled;
-(void)handleTouchDown:(id)down;
-(void)handleTouchUpOutside:(id)outside;
-(void)handleTouchUpInside:(id)inside;
-(void)reset;
-(void)layoutSubviews;
-(void)awakeFromNib;
@end

