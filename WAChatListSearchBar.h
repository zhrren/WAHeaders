/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WASearchBar.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class UIColor, _WAArchivedChatsButtonView;

@interface WAChatListSearchBar : WASearchBar <UIGestureRecognizerDelegate>
{
    _WAArchivedChatsButtonView *_buttonView;
    UIColor *_expandedBackgroundColor;
    UIColor *_contractedBackgroundColor;
    BOOL _expanded;
}

- (BOOL)isExpanded;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (void)setExpanded:(BOOL)fp8;
- (void)setExpanded:(BOOL)fp8 animated:(BOOL)fp12;
- (float)incrementalHeight;
- (void)layoutSubviews;
- (BOOL)gestureRecognizerShouldBegin:(id)fp8;
- (void)archivedChatsButtonTapped:(id)fp8;
- (void)updateArchivedChatsCell;
- (void)commonInit;

@end

