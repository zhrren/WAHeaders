/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSDate, NSMutableDictionary;

@interface ExecutionTimeProfiler : _ABAddressBookCopyArrayOfAllGroups
{
    NSMutableDictionary *beginDates;
    NSMutableDictionary *endDates;
    NSDate *beginDate;
    NSDate *endDate;
}

- (void)setEndDate:(id)fp8;
- (id)endDate;
- (void)setBeginDate:(id)fp8;
- (id)beginDate;
- (void).cxx_destruct;
- (id)result;
- (double)durationForTask:(id)fp8;
- (double)timeFromStart;
- (double)totalTime;
- (void)endTask:(id)fp8;
- (void)beginTask:(id)fp8;
- (void)end;
- (void)begin;
- (id)init;

@end
