/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class TextBlock, TextMessage, UIColor;

@interface WALinkLabel : _ABAddressBookCopyArrayOfAllGroups
{
    TextBlock *_selectedTextBlock;
    TextMessage *_message;
    BOOL _underlineLinks;
    id <WALinkLabelDelegate> _delegate;
    UIColor *_linkColor;
    UIColor *_linkColorHighlighted;
    UIColor *_linkBackgroundColor;
    struct UIEdgeInsets _contentInset;
}

- (BOOL)underlineLinks;
- (id)linkBackgroundColor;
- (id)linkColorHighlighted;
- (id)linkColor;
- (void)setContentInset:(struct UIEdgeInsets)fp8;
- (struct UIEdgeInsets)contentInset;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (void)drawRect:(struct CGRect)fp8;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (void)setUnderlineLinks:(BOOL)fp8;
- (void)setTextAlignment:(int)fp8;
- (void)setLinkBackgroundColor:(id)fp8;
- (void)setLinkColorHighlighted:(id)fp8;
- (void)setLinkColor:(id)fp8;
- (void)setTextColor:(id)fp8;
- (void)setFont:(id)fp8;
- (void)setText:(id)fp8;
- (void)openURL;
- (void)highlightURL:(BOOL)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end
