/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSAttributedString;

@interface WACopyableLabel : _ABAddressBookCopyArrayOfAllGroups
{
    NSAttributedString *_originalAttributedText;
    BOOL _copyEnabled;
    NSAttributedString *_highlightedAttributedText;
}

- (void)setHighlightedAttributedText:(id)fp8;
- (id)highlightedAttributedText;
- (void)setCopyEnabled:(BOOL)fp8;
- (BOOL)copyEnabled;
- (void).cxx_destruct;
- (void)copy:(id)fp8;
- (BOOL)canPerformAction:(SEL)fp8 withSender:(id)fp12;
- (BOOL)canBecomeFirstResponder;
- (void)menuControllerDidHideMenu:(id)fp8;
- (void)showPopupMenu;
- (void)handleLongPress:(id)fp8;
- (void)setHighlighted:(BOOL)fp8;
- (void)setAttributedText:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end

