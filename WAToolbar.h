/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSString, UILabel, WANavigationController;

@interface WAToolbar : _ABAddressBookCopyArrayOfAllGroups
{
    UILabel *_titleLabel;
    NSString *_title;
    WANavigationController *_parentNavigationController;
}

- (void)setParentNavigationController:(id)fp8;
- (id)parentNavigationController;
- (id)title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTitle:(id)fp8;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;

@end
