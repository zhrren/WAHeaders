/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class UIView;

@interface WACallWindow : _ABAddressBookCopyArrayOfAllGroups
{
    UIView *_statusBarBackgroundView;
    UIView *_backgroundContainerView;
    int _currentInterfaceOrientation;
    BOOL _minimized;
}

- (void)setMinimized:(BOOL)fp8;
- (BOOL)isMinimized;
- (void).cxx_destruct;
- (BOOL)_canBecomeKeyWindow;
- (void)maximize;
- (void)statusBarTapped:(id)fp8;
- (void)minimizeWithAnimation:(BOOL)fp8;
- (id)hitTest:(struct CGPoint)fp8 withEvent:(id)fp16;
- (void)updateStatusBarFrameWithAnimationDuration:(double)fp8;
- (void)applicationDidChangeStatusBarFrame:(id)fp8;
- (void)layoutSubviews;
- (void)setStatusBarSuppressed:(BOOL)fp8;
- (BOOL)isStatusBarSuppressed;
- (void)setUpFauxStatusBar;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end

