/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class UIView;

@interface _WANoBlurNavigationBar : _ABAddressBookCopyArrayOfAllGroups
{
    UIView *_grayBackgroundView;
    int _lastStateDuringLayout;
}

- (void).cxx_destruct;
- (void)touchesCancelled:(id)fp8 withEvent:(id)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (void)layoutSubviews;
- (void)setCenter:(struct CGPoint)fp8;
- (void)commonInit;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)fp8;

@end

