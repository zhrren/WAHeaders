/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSLayoutConstraint, UIImageView, UILabel, WAAggregateCallEvent;

@interface WACallHistoryTableViewCell : _ABAddressBookCopyArrayOfAllGroups
{
    WAAggregateCallEvent *_aggregateCallEvent;
    NSLayoutConstraint *_dateLabelRightEdgeConstraint;
    unsigned int _lastCellState;
    UIImageView *_outgoingCallIconView;
    UILabel *_dateLabel;
    UILabel *_eventCountLabel;
    UILabel *_displayNameLabel;
    UILabel *_detailLabel;
}

+ (struct UIEdgeInsets)preferredSeparatorInset;
+ (float)preferredRowHeight;
+ (void)initialize;
- (void)setDetailLabel:(id)fp8;
- (id)detailLabel;
- (void)setDisplayNameLabel:(id)fp8;
- (id)displayNameLabel;
- (id)eventCountLabel;
- (id)dateLabel;
- (id)outgoingCallIconView;
- (void).cxx_destruct;
- (id)infoIconImageView;
- (void)willTransitionToState:(unsigned int)fp8;
- (void)prepareForReuse;
- (void)applyFonts;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (void)configureWithAggregateCallEvent:(id)fp8;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end
