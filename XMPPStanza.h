/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "XMPPStanzaElement.h"

@class NSDictionary;

@interface XMPPStanza : XMPPStanzaElement
{
    NSDictionary *_connectionInfo;
}

+ (id)generateSID;
+ (id)generateUniqueIdentifier;
+ (id)generateUniqueMessageIdentifier;
+ (id)stanzaFromMessage:(id)fp8;
- (void)setConnectionInfo:(id)fp8;
- (id)connectionInfo;
- (void).cxx_destruct;
- (BOOL)isReceivedWithActiveWebClientSession;
- (int)offlineCount;
- (BOOL)offline;
- (id)error;
- (id)errorCode;
- (id)timestamp;
- (id)participant;
- (void)setParticipant:(id)fp8;
- (void)setFromJID:(id)fp8;
- (id)fromJID;
- (void)setToJID:(id)fp8;
- (id)toJID;
- (void)setUniqueIdentifier:(id)fp8;
- (id)uniqueIdentifier;
- (id)initWithName:(id)fp8 fromJID:(id)fp12 toJID:(id)fp16;
- (id)initWithStanzaElement:(id)fp8;

@end
