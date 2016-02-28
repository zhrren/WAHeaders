/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSData, NSString, WAWebClientSessionData;

@interface WAWebClientSession : _ABAddressBookCopyArrayOfAllGroups
{
    WAWebClientSessionData *_sessionData;
    BOOL _preemptiveChatResponseSent;
    BOOL _preemptiveContactsResponseSent;
    NSString *_browserID;
    NSData *_sharedSecret;
}

+ (void)deleteKeychainEntryForBrowserID:(id)fp8;
+ (id)keychainQueryForBrowserID:(id)fp8;
+ (id)existingSessionWithBrowserID:(id)fp8;
+ (id)allSavedSessionDataObjects;
+ (id)lastSession;
- (void)setPreemptiveContactsResponseSent:(BOOL)fp8;
- (BOOL)preemptiveContactsResponseSent;
- (void)setPreemptiveChatResponseSent:(BOOL)fp8;
- (BOOL)preemptiveChatResponseSent;
- (void)setSharedSecret:(id)fp8;
- (id)sharedSecret;
- (id)browserID;
- (void).cxx_destruct;
- (void)setLocation:(id)fp8;
- (id)location;
- (void)setClientToken:(id)fp8;
- (id)clientToken;
- (void)setBrowser:(id)fp8;
- (id)browser;
- (void)setOperatingSystem:(id)fp8;
- (id)operatingSystem;
- (void)setLastActiveTime:(id)fp8;
- (id)lastActiveTime;
- (void)setDeviceLoginTime:(id)fp8;
- (id)deviceLoginTime;
- (void)setWebRef:(id)fp8;
- (id)webRef;
- (id)hashWithSharedSecret:(id)fp8;
- (id)unserialize:(id)fp8 streamError:(out char *)fp12;
- (id)serialize:(id)fp8;
- (void)resetState;
- (void)setOrExtendTimeoutIfNeeded;
- (void)resetTimeoutIfNeeded;
- (void)makeTemporary;
- (void)remove;
- (void)makeCurrent;
- (id)description;
- (void)save;
- (id)initWithNewBrowserID:(id)fp8 deviceLoginTime:(id)fp12;
- (id)initWithExistingBrowserID:(id)fp8 secret:(id)fp12 sessionData:(id)fp16;

@end
