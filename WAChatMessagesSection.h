/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSDate, NSMutableArray;

@interface WAChatMessagesSection : _ABAddressBookCopyArrayOfAllGroups
{
    NSMutableArray *_rows;
    int _day;
    int _month;
    int _year;
    NSDate *_earliestDate;
}

- (void)setEarliestDate:(id)fp8;
- (id)earliestDate;
- (void)setYear:(int)fp8;
- (int)year;
- (void)setMonth:(int)fp8;
- (int)month;
- (void)setDay:(int)fp8;
- (int)day;
- (void)setRows:(id)fp8;
- (id)rows;
- (void).cxx_destruct;
- (id)init;

@end
