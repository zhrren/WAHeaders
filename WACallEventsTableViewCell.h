/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSMutableArray, UILabel, UIView;

@interface WACallEventsTableViewCell : _ABAddressBookCopyArrayOfAllGroups
{
    UIView *_topEdge;
    NSMutableArray *_customConstraints;
    UILabel *_dateLabel;
    NSMutableArray *_timeLabels;
    NSMutableArray *_eventLabels;
    NSMutableArray *_durationLabels;
}

- (void).cxx_destruct;
- (void)updateConstraints;
- (void)addCustomConstraints:(id)fp8;
- (void)configureWithAggregateCallEvent:(id)fp8;
- (int)indexOfAccessibilityElement:(id)fp8;
- (id)accessibilityElementAtIndex:(int)fp8;
- (int)accessibilityElementCount;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end

