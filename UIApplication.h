/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIApplication.h>


@interface UIApplication (WhatsAppExtras)
+(id)wa_statusBarView;
+(BOOL)wa_isProductionBuild;
+(BOOL)wa_blurEffectsEnabled;
+(BOOL)iOS9;
+(BOOL)iOS8;
+(BOOL)iOS7;
+(id)packageHash;
+(id)wa_cachesDirectory;
+(id)wa_libraryDirectory;
+(id)wa_documentsDirectory;
+(id)wa_httpUserAgentString;
+(id)wa_versionString;
+(void)setupEnv;
+(BOOL)wa_isDirtyCached;
+(BOOL)isDirty;
-(id)wa_matchingViewInView:(id)view;
-(id)wa_mainAppPrimaryContentView;
-(id)wa_mainAppView;
-(id)wa_mainAppSecondaryView;
-(id)wa_mainAppPrimaryView;
-(id)wa_mainAppWindows;
-(id)wa_mainAppWindow;
-(id)wa_viewWithIdentifier:(id)identifier;
-(float)wa_currentStatusBarHeight;
-(void)wa_terminate;
-(id)wa_topMostWindow;
-(void)wa_clearNotificationCenterAndApplicationBadge;
-(void)showLocalNotification:(id)notification hasAction:(BOOL)action alertAction:(id)action3 fireDate:(id)date;
-(BOOL)isActive;
-(BOOL)isBackgrounded;
@end

