/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAViewController.h"
#import "WAUpgradeCallback.h"

@class UILabel, NSString, UIView, UIButton;

__attribute__((visibility("hidden")))
@interface WAMessageAlertsReminderViewController : WAViewController <WAUpgradeCallback> {
	UIView* _contentView;
	UIButton* _buttonClose;
	UILabel* _labelItem1;
	UILabel* _labelItem2;
	UILabel* _labelItem3;
	UILabel* _labelTitle;
	UILabel* _labelOpenSettings;
	UILabel* _labelTapNotifications;
	UILabel* _labelTurnOnMessageNotifications;
	UILabel* _labelMessageAlerts;
	UIView* _viewMessageAlerts;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIView* viewMessageAlerts;
@property(retain, nonatomic) UILabel* labelMessageAlerts;
@property(retain, nonatomic) UILabel* labelTurnOnMessageNotifications;
@property(retain, nonatomic) UILabel* labelTapNotifications;
@property(retain, nonatomic) UILabel* labelOpenSettings;
@property(retain, nonatomic) UILabel* labelTitle;
@property(retain, nonatomic) UILabel* labelItem3;
@property(retain, nonatomic) UILabel* labelItem2;
@property(retain, nonatomic) UILabel* labelItem1;
@property(retain, nonatomic) UIButton* buttonClose;
@property(retain, nonatomic) UIView* contentView;
+(void)resetLastReminderDate;
+(void)wa_didUpgradeFrom:(id)from to:(id)to;
+(BOOL)canPresentReminder;
+(id)controller;
-(void).cxx_destruct;
-(void)closeAction:(id)action;
-(void)dismiss;
-(void)presentModallyFromViewController:(id)viewController;
-(unsigned)supportedInterfaceOrientations;
-(int)preferredStatusBarStyle;
-(void)viewDidLoad;
@end

