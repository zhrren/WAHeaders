/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSSet, UILabel, UIView, WALabel;

@interface WASearchResultTableViewCell : _ABAddressBookCopyArrayOfAllGroups
{
    UIView *_containerView;
    UILabel *_titleLabel;
    WALabel *_snippetLabel;
    UILabel *_dateLabel;
    NSSet *_searchTokens;
}

- (void).cxx_destruct;
- (void)configureWithSearchResultMessage:(id)fp8 searchTokens:(id)fp12;
- (BOOL)isWord:(id)fp8 foundInSearchTokens:(id)fp12;
- (void)configureFonts;
- (void)setUpPlaceholderForSizing;
- (void)setHighlighted:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setSelected:(BOOL)fp8 animated:(BOOL)fp12;
- (void)layoutSubviews;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;
- (id)initWithReuseIdentifier:(id)fp8;

@end

