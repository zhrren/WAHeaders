/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <UIKit/UIWindow.h>

@class UITapGestureRecognizer, UIView, NSString, NSMutableArray;
@protocol WANotificationWindowDelegate;

__attribute__((visibility("hidden")))
@interface WANotificationWindow : UIWindow {
	UITapGestureRecognizer* _tapGestureRecognizer;
	BOOL _activelyPresentingMessage;
	BOOL _animatingNotificationWindow;
	BOOL _forcedToHide;
	NSString* _contactJID;
	NSString* _stanzaID;
	id<WANotificationWindowDelegate> _delegate;
	NSMutableArray* _messageQueue;
	UIView* _containerView;
}
@property(readonly, assign, nonatomic) UIView* containerView;
@property(retain, nonatomic) NSMutableArray* messageQueue;
@property(assign, nonatomic) BOOL forcedToHide;
@property(assign, nonatomic) __weak id<WANotificationWindowDelegate> delegate;
@property(copy, nonatomic) NSString* stanzaID;
@property(copy, nonatomic) NSString* contactJID;
+(float)windowHeightForInterfaceOrientation:(int)interfaceOrientation;
+(UIEdgeInsets)contentInsets;
+(id)window;
-(void).cxx_destruct;
-(void)contentViewAnyTouch:(id)touch;
-(void)contentViewTouchUp:(id)up;
-(void)handleTapGesture:(id)gesture;
-(void)closeAction:(id)action;
-(CGRect)containerViewFrame;
-(void)setNotificationWindowHeight:(float)height;
-(void)resizeToCurrentStatusBarBounds;
-(void)didChangeStatusBarFrame:(id)frame;
-(void)hideTemporarily;
-(void)hideAnimated:(BOOL)animated;
-(void)removeAllContentViews;
-(void)slideOutAnimationFinishedForContentView:(id)contentView;
-(void)slideContentViewOut:(id)anOut;
-(void)removeContentView:(id)view withAnimationDuration:(double)animationDuration;
-(void)removeContentView:(id)view;
-(void)slideInAnimationFinishedForContentView:(id)contentView;
-(void)slideContentViewIn:(id)anIn;
-(void)prepareContentViewToBeAnimatedIn:(id)anIn;
-(void)showNextMessage;
-(void)showNextMessageIfPossible;
-(BOOL)canShowNextMessage;
-(void)show;
-(void)postWAMessage:(id)message duration:(double)duration;
-(void)configureContentView:(id)view withChatName:(id)chatName senderName:(id)name messageText:(id)text profilePicture:(id)picture;
-(id)addCloseButtonToContentView:(id)contentView;
-(id)newContentViewForMessage:(id)message profilePicture:(id)picture;
-(BOOL)_canAffectStatusBarAppearance;
-(void)applicationWillResignActive:(id)application;
-(id)rootViewController;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

