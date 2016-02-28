/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "NSSecureCoding-Protocol.h"

@class WAInetAddress;

@interface WADNSCacheEntry : _ABAddressBookCopyArrayOfAllGroups <NSSecureCoding>
{
    WAInetAddress *_inetAddress;
    double _expirationTime;
}

+ (BOOL)supportsSecureCoding;
- (double)expirationTime;
- (id)inetAddress;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (BOOL)expired;
- (id)initWithInetAddress:(id)fp8 expirationTime:(double)fp12;

@end
