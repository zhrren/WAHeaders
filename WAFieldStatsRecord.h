/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSString;

@interface WAFieldStatsRecord : _ABAddressBookCopyArrayOfAllGroups
{
    BOOL _written;
    int _type;
    int _uniqueId;
    unsigned int _timestamp;
    NSString *_stringValue;
    double _numericValue;
}

+ (id)typeToString:(int)fp8;
- (void)setWritten:(BOOL)fp8;
- (BOOL)written;
- (void)setNumericValue:(double)fp8;
- (double)numericValue;
- (void)setStringValue:(id)fp8;
- (id)stringValue;
- (void)setTimestamp:(unsigned int)fp8;
- (unsigned int)timestamp;
- (void)setUniqueId:(int)fp8;
- (int)uniqueId;
- (void)setType:(int)fp8;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToRecord:(id)fp8;
- (BOOL)isDimension;
- (id)initWithType:(int)fp8 uniqueId:(int)fp12 timestamp:(unsigned int)fp16;
- (id)initWithType:(int)fp8 uniqueId:(int)fp12 value:(double)fp16;
- (id)initWithType:(int)fp8 uniqueId:(int)fp12 stringValue:(id)fp16;

@end

