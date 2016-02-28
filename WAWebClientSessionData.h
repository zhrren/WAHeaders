/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "NSCoding-Protocol.h"

@class NSDate, NSString;

@interface WAWebClientSessionData : _ABAddressBookCopyArrayOfAllGroups <NSCoding>
{
    NSString *_webRef;
    BOOL _active;
    NSString *_browserID;
    NSString *_clientToken;
    NSString *_operatingSystem;
    NSString *_browser;
    NSDate *_deviceLoginTime;
    NSString *_location;
    NSDate *_lastActiveTime;
    NSDate *_expirationTime;
}

- (void)setExpirationTime:(id)fp8;
- (id)expirationTime;
- (void)setActive:(BOOL)fp8;
- (BOOL)isActive;
- (void)setLastActiveTime:(id)fp8;
- (id)lastActiveTime;
- (void)setLocation:(id)fp8;
- (id)location;
- (void)setDeviceLoginTime:(id)fp8;
- (id)deviceLoginTime;
- (void)setBrowser:(id)fp8;
- (id)browser;
- (void)setOperatingSystem:(id)fp8;
- (id)operatingSystem;
- (id)webRef;
- (id)clientToken;
- (void)setBrowserID:(id)fp8;
- (id)browserID;
- (void).cxx_destruct;
- (void)setWebRef:(id)fp8;
- (void)setClientToken:(id)fp8;
- (BOOL)isEqualToSessionData:(id)fp8;
- (void)clear;
- (id)description;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;

@end
