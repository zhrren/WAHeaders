/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <UIKit/UIWindow.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface WACallWindow : UIWindow {
	UIView* _statusBarBackgroundView;
	UIView* _backgroundContainerView;
	int _currentInterfaceOrientation;
	BOOL _minimized;
}
@property(assign, nonatomic, getter=isMinimized) BOOL minimized;
@property(assign, nonatomic, getter=isStatusBarSuppressed) BOOL statusBarSuppressed;
-(void).cxx_destruct;
-(BOOL)_canBecomeKeyWindow;
-(void)maximize;
-(void)statusBarTapped:(id)tapped;
-(void)minimizeWithAnimation:(BOOL)animation;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)updateStatusBarFrameWithAnimationDuration:(double)animationDuration;
-(void)applicationDidChangeStatusBarFrame:(id)application;
-(void)layoutSubviews;
-(void)setUpFauxStatusBar;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

