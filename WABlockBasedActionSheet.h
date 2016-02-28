/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "UIActionSheetDelegate-Protocol.h"

@class NSMutableDictionary;

@interface WABlockBasedActionSheet : _ABAddressBookCopyArrayOfAllGroups <UIActionSheetDelegate>
{
    NSMutableDictionary *_actionMap;
    id _destructiveActionHandler;
    id _cancelHandler;
    id _completionHandler;
}

+ (id)actionSheetWithTitle:(id)fp8;
- (void)setCompletionHandler:(id)fp(null);
- (id)completionHandler;
- (void)setCancelHandler:(id)fp(null);
- (id)cancelHandler;
- (void).cxx_destruct;
- (void)didPresentActionSheet:(id)fp8;
- (void)actionSheet:(id)fp8 didDismissWithButtonIndex:(int)fp12;
- (void)actionSheet:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)addDestructiveButtonWithTitle:(id)fp8 handler:(id)fp(null);
- (void)addButtonWithTitle:(id)fp8 handler:(id)fp(null);
- (void)showInView:(id)fp8;
- (void)showFromRect:(struct CGRect)fp8 inView:(id)fp24 animated:(BOOL)fp28;
- (void)showFromBarButtonItem:(id)fp8 animated:(BOOL)fp12;
- (void)showFromToolbar:(id)fp8;
- (void)showFromTabBar:(id)fp8;
- (void)addCancelButton;
- (void)applicationWillResetUserInterface:(id)fp8;
- (void)applicationDidEnterBackground:(id)fp8;
- (void)dealloc;

@end
