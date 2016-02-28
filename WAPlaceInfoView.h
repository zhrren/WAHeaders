/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSAttributedString, UIImageView, UILabel, UIView, WAMessageFooterView;

@interface WAPlaceInfoView : _ABAddressBookCopyArrayOfAllGroups
{
    NSAttributedString *_placeInfoString;
    NSAttributedString *_placeInfoStringHighlighted;
    WAMessageFooterView *_footerView;
    BOOL _showListIcon;
    UIImageView *_listIconImageView;
    UIView *_listIconSeparatorView;
    BOOL _highlighted;
    UILabel *_label;
}

+ (id)nameFont;
+ (id)attributedStringFromCellData:(id)fp8 returningNameRange:(out struct _NSRange *)fp12;
+ (struct CGSize)preferredSizeForCellData:(id)fp8 maximumWidth:(float)fp12;
+ (void)initialize;
- (BOOL)highlighted;
- (id)label;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setHighlighted:(BOOL)fp8;
- (id)listIconImageView;
- (void)setStarIconHidden:(BOOL)fp8 animated:(BOOL)fp12;
- (void)configureWithCellData:(id)fp8 animated:(BOOL)fp12;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)fp8;

@end
