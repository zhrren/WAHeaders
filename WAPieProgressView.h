/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <UIKit/UIView.h>

@class WAShapeView, _WAPieView, NSObject;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface WAPieProgressView : UIView {
	_WAPieView* _pieView;
	WAShapeView* _outerView;
	unsigned _state;
	NSObject<OS_dispatch_group>* _animationDispatchGroup;
	CGRect _prevFrame;
	unsigned _counter;
	float _progress;
}
@property(assign, nonatomic) float progress;
-(void).cxx_destruct;
-(id)outerViewPathExpanded:(BOOL)expanded scale:(float)scale;
-(id)tweenableRectInRect:(CGRect)rect rounded:(BOOL)rounded;
-(id)baseOutlineInRect:(CGRect)rect;
-(void)performFinishedAnimationWithCompletionHandler:(id)completionHandler;
-(void)performAppearAnimationWithCompletionHandler:(id)completionHandler;
-(void)performCancelAnimationWithCompletionHandler:(id)completionHandler;
-(void)transitionToState:(unsigned)state forced:(BOOL)forced;
-(void)transitionToState:(unsigned)state animated:(BOOL)animated;
-(void)setProgress:(float)progress animated:(BOOL)animated;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end

