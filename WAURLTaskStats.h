/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@interface WAURLTaskStats : _ABAddressBookCopyArrayOfAllGroups <NSSecureCoding, NSCopying>
{
    int _mediaType;
    int _result;
    int _mediaSize;
    double _startTime;
    double _durationBeforeSuspend;
}

+ (BOOL)supportsSecureCoding;
- (void)setMediaSize:(int)fp8;
- (int)mediaSize;
- (void)setResult:(int)fp8;
- (int)result;
- (void)setDurationBeforeSuspend:(double)fp8;
- (double)durationBeforeSuspend;
- (void)setStartTime:(double)fp8;
- (double)startTime;
- (void)setMediaType:(int)fp8;
- (int)mediaType;
- (void)reset;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;

@end

