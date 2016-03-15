/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "WANotificationWindow.h"

@class UIView, UIPanGestureRecognizer, UIVisualEffectView;

@interface _WALiveBlurNotificationWindow : WANotificationWindow {
	BOOL _blurredBackgroundVisible;
	UIVisualEffectView* _backgroundBlurView;
	UIView* _backgroundBlurContentView;
	UIView* _topMostContentView;
	UIPanGestureRecognizer* _panGesture;
	float _panGestureTranslation;
	float _currentNotificationPanelHeight;
	float _notificationPanelContentHeight;
	BOOL _dragging;
}
+(UIEdgeInsets)contentInsets;
+(float)windowHeightForInterfaceOrientation:(int)interfaceOrientation;
-(void).cxx_destruct;
-(void)removeAllContentViews;
-(CGRect)containerViewFrame;
-(void)extendWindowFrameIfNecessary;
-(void)setNotificationPanelHeight:(float)height;
-(void)handlePanGesture:(id)gesture;
-(void)slideOutAnimationFinishedForContentView:(id)contentView;
-(void)slideContentViewOut:(id)anOut;
-(void)slideInAnimationFinishedForContentView:(id)contentView;
-(void)slideContentViewIn:(id)anIn;
-(void)prepareContentViewToBeAnimatedIn:(id)anIn;
-(BOOL)canShowNextMessage;
-(id)initWithFrame:(CGRect)frame;
@end

