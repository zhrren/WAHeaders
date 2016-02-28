/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSArray, TextBlock, UIImageView, UIView, WAMessageFooterView, _WAMessageTextViewInternal;

@interface WAMessageTextView : _ABAddressBookCopyArrayOfAllGroups
{
    UIImageView *_listIconImageView;
    TextBlock *_selectedTextBlock;
    BOOL _isHandlingLongPress;
    BOOL _showListIcon;
    BOOL _flippedHorizontally;
    float _dividerWidth;
    id <WAMessageTextViewDelegate> _delegate;
    WAMessageFooterView *_footerView;
    _WAMessageTextViewInternal *_messageTextViewInternal;
    UIView *_listIconSeparatorView;
    NSArray *_textMessages;
}

+ (struct CGSize)preferredSizeForCellData:(id)fp8 maximumWidth:(float)fp12;
+ (void)initialize;
- (BOOL)flippedHorizontally;
- (BOOL)showListIcon;
- (id)textMessages;
- (id)listIconSeparatorView;
- (id)messageTextViewInternal;
- (id)footerView;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setDividerWidth:(float)fp8;
- (float)dividerWidth;
- (void).cxx_destruct;
- (id)linkDataForPreviewAtLocation:(struct CGPoint)fp8 returningLinkDisplayRect:(struct CGRect *)fp16;
- (void)touchesCancelled:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (id)textBlockAtTouchLocation:(struct CGPoint)fp8;
- (id)hitTest:(struct CGPoint)fp8 withEvent:(id)fp16;
- (void)handleLongPress;
- (void)handleSingleTap;
- (void)unhighlightAllTextBlocks;
- (void)highlightTextBlock:(id)fp8;
- (id)contentView;
- (void)setStarIconHidden:(BOOL)fp8 animated:(BOOL)fp12;
- (void)configureWithCellData:(id)fp8 animated:(BOOL)fp12;
- (void)layoutSubviews;
- (id)listIconImageView;
- (id)initWithFrame:(struct CGRect)fp8;

@end
