/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class UIButton, UIColor, UIFont, UILabel, UIView;

@interface WAWarningView : _ABAddressBookCopyArrayOfAllGroups
{
    UIView *_topBorder;
    UIView *_bottomBorder;
    UIView *_backgroundView;
    BOOL _textShadowEnabled;
    BOOL _translucentBackground;
    BOOL _showsTopBorder;
    BOOL _showsBottomBorder;
    UIFont *_font;
    UIColor *_textColor;
    UIButton *_button;
    UILabel *_label;
    id _action;
    struct UIEdgeInsets _contentInset;
}

- (void)setAction:(id)fp(null);
- (id)action;
- (void)setLabel:(id)fp8;
- (id)label;
- (void)setButton:(id)fp8;
- (id)button;
- (struct UIEdgeInsets)contentInset;
- (BOOL)showsBottomBorder;
- (BOOL)showsTopBorder;
- (BOOL)translucentBackground;
- (BOOL)isTextShadowEnabled;
- (id)textColor;
- (id)font;
- (void).cxx_destruct;
- (void)setShowsBottomBorder:(BOOL)fp8;
- (void)setShowsTopBorder:(BOOL)fp8;
- (void)setTranslucentBackground:(BOOL)fp8;
- (void)setTextShadowEnabled:(BOOL)fp8;
- (void)updateShadowForLabel;
- (void)updateShadowForButton;
- (void)setTextColor:(id)fp8;
- (void)setFont:(id)fp8;
- (id)text;
- (void)setText:(id)fp8 withAction:(id)fp(null);
- (struct CGSize)preferredSizeForWidth:(float)fp8;
- (void)layoutSubviews;
- (void)buttonTapped:(id)fp8;
- (void)createLabelIfNeeded;
- (void)createButtonIfNeeded;
- (id)initWithFrame:(struct CGRect)fp8;

@end
