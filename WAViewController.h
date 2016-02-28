/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "WAViewControllerExtensions-Protocol.h"
#import "WAViewControllerPrivateExtensions-Protocol.h"

@class _WAViewControllerHelper;

@interface WAViewController : _ABAddressBookCopyArrayOfAllGroups <WAViewControllerPrivateExtensions, WAViewControllerExtensions>
{
    _WAViewControllerHelper *_wa_helper;
}

- (void).cxx_destruct;
- (void)setDefaultPreviewActionItems:(id)fp8;
- (id)defaultPreviewActionItems;
- (BOOL)wa_is3DTouchAvailable;
- (BOOL)wa_isBeingPreviewed;
- (void)visibleConnectionStatusDidChange;
- (unsigned int)visibleConnectionStatus;
- (void)performAfterTransitionEnds:(id)fp(null);
- (void)wa_applicationDidBecomeActive;
- (void)wa_applicationWillResignActive;
- (void)wa_applicationDidEnterBackground;
- (void)wa_applicationWillEnterForeground;
- (void)wa_tintColorDidChange;
- (void)wa_fontSizeDidChange;
- (void)dismissAllDropDownAlertViewsWithAnimation:(BOOL)fp8;
- (void)dismissDropDownAlertView:(id)fp8 animated:(BOOL)fp12;
- (void)showDropDownAlertView:(id)fp8 animated:(BOOL)fp12;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (id)uniqueIdentifier;
- (id)wa_helper;
- (void)dealloc;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;
- (id)initWithCoder:(id)fp8;

@end

