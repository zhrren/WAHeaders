/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class WAChatButton;

@interface WAChatListHeaderCell : _ABAddressBookCopyArrayOfAllGroups
{
    WAChatButton *_broadcastButton;
    WAChatButton *_groupButton;
}

- (id)groupButton;
- (id)broadcastButton;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setHighlighted:(BOOL)fp8 animated:(BOOL)fp12;
- (void)layoutSubviews;
- (float)preferredHeight;
- (id)init;

@end

