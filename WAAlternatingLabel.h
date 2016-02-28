/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSString, NSTimer;

@interface WAAlternatingLabel : _ABAddressBookCopyArrayOfAllGroups
{
    NSTimer *_timer;
    int _index;
    NSString *_primaryText;
    NSString *_secondaryText;
    double _interval;
}

- (void)setInterval:(double)fp8;
- (double)interval;
- (void)setSecondaryText:(id)fp8;
- (id)secondaryText;
- (id)primaryText;
- (void).cxx_destruct;
- (void)switchLabel:(id)fp8;
- (void)setPrimaryText:(id)fp8;
- (void)setAnimating:(BOOL)fp8;
- (BOOL)isAnimating;

@end
