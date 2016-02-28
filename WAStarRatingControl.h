/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSArray;

@interface WAStarRatingControl : _ABAddressBookCopyArrayOfAllGroups
{
    NSArray *_stars;
    float _margin;
}

+ (struct CGSize)preferredSizeForStarCount:(int)fp8 margin:(float)fp12;
- (float)margin;
- (void).cxx_destruct;
- (void)updateValueWithTouch:(id)fp8;
- (BOOL)continueTrackingWithTouch:(id)fp8 withEvent:(id)fp12;
- (BOOL)beginTrackingWithTouch:(id)fp8 withEvent:(id)fp12;
- (int)value;
- (void)setValue:(int)fp8;
- (void)setColor:(id)fp8;
- (id)color;
- (void)setMargin:(float)fp8;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithStarCount:(int)fp8;

@end
