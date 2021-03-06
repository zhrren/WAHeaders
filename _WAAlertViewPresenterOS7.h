/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import "WAAlertViewPresenter.h"

@class NSMutableDictionary, NSString, UIAlertView;

__attribute__((visibility("hidden")))
@interface _WAAlertViewPresenterOS7 : WAAlertViewPresenter <UIAlertViewDelegate> {
	UIAlertView* _alertView;
	UIAlertView* _retainedAlertViewBeforePresentation;
	NSMutableDictionary* _actionMap;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)didPresentActionSheet:(id)sheet;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)addCancelButtonWithTitle:(id)title handler:(id)handler;
-(void)addButtonWithTitle:(id)title handler:(id)handler;
-(void)dismissByCancellingWithAnimation:(BOOL)animation;
-(void)presentFromViewController:(id)viewController;
-(id)initWithTitle:(id)title message:(id)message;
@end

