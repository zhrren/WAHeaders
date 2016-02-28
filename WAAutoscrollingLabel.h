/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSTimer, UILabel;

@interface WAAutoscrollingLabel : _ABAddressBookCopyArrayOfAllGroups
{
    BOOL _scrollEnabled;
    BOOL _needsToScroll;
    BOOL _isIniting;
    id <WAAutoScrollingLabelDelegate> _delegate;
    float _pointsPerSecond;
    UILabel *_scrollableLabel;
    float _scrollableLabelTextWidth;
    NSTimer *_noScrollTimer;
}

- (void)setNoScrollTimer:(id)fp8;
- (id)noScrollTimer;
- (void)setIsIniting:(BOOL)fp8;
- (BOOL)isIniting;
- (void)setNeedsToScroll:(BOOL)fp8;
- (BOOL)needsToScroll;
- (void)setScrollableLabelTextWidth:(float)fp8;
- (float)scrollableLabelTextWidth;
- (void)setScrollableLabel:(id)fp8;
- (id)scrollableLabel;
- (void)setPointsPerSecond:(float)fp8;
- (float)pointsPerSecond;
- (void)setScrollEnabled:(BOOL)fp8;
- (BOOL)isScrollEnabled;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)resizeScrollableLabelAndStartScrolling;
- (void)resizeScrollableLabel;
- (BOOL)startScrollingIfNecessary;
- (float)scrollableLabelWidth;
- (float)wa_baselineOffsetFromBottom;
- (int)textAlignment;
- (void)setTextAlignment:(int)fp8;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)fp8;
- (id)highlightedTextColor;
- (void)setHighlightedTextColor:(id)fp8;
- (int)baselineAdjustment;
- (void)setBaselineAdjustment:(int)fp8;
- (struct CGSize)shadowOffset;
- (void)setShadowOffset:(struct CGSize)fp8;
- (id)shadowColor;
- (void)setShadowColor:(id)fp8;
- (id)textColor;
- (void)setTextColor:(id)fp8;
- (int)lineBreakMode;
- (void)setLineBreakMode:(int)fp8;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)fp8;
- (id)font;
- (void)setFont:(id)fp8;
- (int)numberOfLines;
- (void)setNumberOfLines:(int)fp8;
- (id)attributedText;
- (void)setAttributedText:(id)fp8;
- (id)text;
- (void)setText:(id)fp8;
- (void)didMoveToWindow;
- (void)setBounds:(struct CGRect)fp8;
- (void)setFrame:(struct CGRect)fp8;
- (struct CGSize)intrinsicContentSize;
- (double)scrollDuration;
- (BOOL)textRequiresScrolling;
- (void)noNeedToScroll;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (void)setup;
- (id)initWithCoder:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;
- (id)initWithAutoscrollingLabel:(id)fp8;

@end
