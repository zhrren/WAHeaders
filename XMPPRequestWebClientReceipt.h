/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSArray, NSString;

@interface XMPPRequestWebClientReceipt : _ABAddressBookCopyArrayOfAllGroups
{
    NSString *_jid;
    NSArray *_messages;
    double _lastTimestamp;
}

- (void)setLastTimestamp:(double)fp8;
- (double)lastTimestamp;
- (void)setMessages:(id)fp8;
- (id)messages;
- (void)setJid:(id)fp8;
- (id)jid;
- (void).cxx_destruct;

@end

