/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "WAPageableItemViewDelegate-Protocol.h"

@class NSMutableSet, UIScrollView;

@interface WAPageableItemBrowserView : _ABAddressBookCopyArrayOfAllGroups <UIScrollViewDelegate, WAPageableItemViewDelegate>
{
    UIScrollView *_pagingScrollView;
    NSMutableSet *_visiblePages;
    NSMutableSet *_recycledPages;
    BOOL _ignoreScrollViewDidScroll;
    BOOL _disableDelegateCallbacksDuringScrollingAnimation;
    BOOL _keyboardHidden;
    BOOL _scrolling;
    id <WAPageableItemBrowserViewDelegate> _delegate;
    int _currentIndex;
    struct UIEdgeInsets _contentInsetForLayout;
    struct UIEdgeInsets _contentInset;
}

- (BOOL)isScrolling;
- (struct UIEdgeInsets)contentInset;
- (struct UIEdgeInsets)contentInsetForLayout;
- (BOOL)isKeyboardHidden;
- (int)currentIndex;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)stopPresentation;
- (void)didScroll;
- (void)setKeyboardHidden:(BOOL)fp8;
- (id)panGestureRecognizer;
- (void)setScrollEnabled:(BOOL)fp8;
- (BOOL)isScrollEnabled;
- (void)setScrolling:(BOOL)fp8;
- (void)setCroppingCurrentItem:(BOOL)fp8;
- (BOOL)isCroppingCurrentItem;
- (void)prepareToCancelCropping;
- (void)rotateCurrentItem;
- (void)setViewStateOfCurrentPage:(id)fp8;
- (id)viewStateOfCurrentPage;
- (void)resetViewStates;
- (void)scrollViewDidEndDecelerating:(id)fp8;
- (void)scrollViewDidEndDragging:(id)fp8 willDecelerate:(BOOL)fp12;
- (void)scrollViewWillBeginDragging:(id)fp8;
- (void)scrollViewDidEndScrollingAnimation:(id)fp8;
- (void)scrollViewDidScroll:(id)fp8;
- (float)fractionalCurrentIndex;
- (id)pageableItemViewContainingViewController:(id)fp8;
- (BOOL)pageableItemViewKeyboardIsShown:(id)fp8;
- (void)pageableItemViewDidEndFocusedTask:(id)fp8;
- (void)pageableItemViewWillBeginFocusedTask:(id)fp8;
- (void)pageableItemViewDidFinishRotationAnimation:(id)fp8;
- (void)pageableItemView:(id)fp8 willAnimateRotationByAngle:(float)fp12;
- (void)pageableItemViewDidUpdateThumbnail:(id)fp8;
- (void)pageableItemViewDidEndEditingAnimation:(id)fp8;
- (void)pageableItemViewWillBeginEditingAnimation:(id)fp8;
- (id)dequeueOrCreateViewForItem:(id)fp8;
- (void)configurePage:(id)fp8 atIndex:(int)fp12;
- (struct CGRect)frameForPageAtIndex:(int)fp8;
- (id)visiblePageAtIndex:(int)fp8;
- (void)setContentInsetForLayout:(struct UIEdgeInsets)fp8;
- (void)setContentInset:(struct UIEdgeInsets)fp8 animated:(BOOL)fp24;
- (void)setContentInset:(struct UIEdgeInsets)fp8;
- (id)currentItemView;
- (id)displayPageAtIndex:(int)fp8;
- (void)tilePages;
- (void)removeItemAtIndex:(int)fp8 animated:(BOOL)fp12;
- (void)insertItemAtIndex:(int)fp8 animated:(BOOL)fp12;
- (void)recycleView:(id)fp8;
- (void)setCurrentIndex:(int)fp8 animated:(BOOL)fp12;
- (void)setCurrentIndex:(int)fp8;
- (void)reloadItemAtIndex:(int)fp8;
- (void)reload;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)fp8 withEvent:(id)fp16;
- (void)commonInit;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end

