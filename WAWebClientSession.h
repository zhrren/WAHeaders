/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class WAWebClientSessionData, NSString, NSData, NSDate;

__attribute__((visibility("hidden")))
@interface WAWebClientSession : NSObject {
	WAWebClientSessionData* _sessionData;
	BOOL _preemptiveChatResponseSent;
	BOOL _preemptiveContactsResponseSent;
	NSString* _browserID;
	NSData* _sharedSecret;
}
@property(copy, nonatomic) NSString* location;
@property(copy, nonatomic) NSString* clientToken;
@property(copy, nonatomic) NSString* browser;
@property(copy, nonatomic) NSString* operatingSystem;
@property(copy, nonatomic) NSDate* lastActiveTime;
@property(copy, nonatomic) NSDate* deviceLoginTime;
@property(copy, nonatomic) NSString* webRef;
@property(assign, nonatomic) BOOL preemptiveContactsResponseSent;
@property(assign, nonatomic) BOOL preemptiveChatResponseSent;
@property(copy, nonatomic) NSData* sharedSecret;
@property(readonly, copy, nonatomic) NSString* browserID;
+(void)deleteKeychainEntryForBrowserID:(id)browserID;
+(id)keychainQueryForBrowserID:(id)browserID;
+(id)existingSessionWithBrowserID:(id)browserID;
+(id)allSavedSessionDataObjects;
+(id)lastSession;
-(void).cxx_destruct;
-(id)hashWithSharedSecret:(id)sharedSecret;
-(id)unserialize:(id)unserialize streamError:(out BOOL*)error;
-(id)serialize:(id)serialize;
-(void)resetState;
-(void)setOrExtendTimeoutIfNeeded;
-(void)resetTimeoutIfNeeded;
-(void)makeTemporary;
-(void)remove;
-(void)makeCurrent;
-(id)description;
-(void)save;
-(id)initWithNewBrowserID:(id)newBrowserID deviceLoginTime:(id)time;
-(id)initWithExistingBrowserID:(id)existingBrowserID secret:(id)secret sessionData:(id)data;
@end

