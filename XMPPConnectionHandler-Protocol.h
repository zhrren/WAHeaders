/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol XMPPConnectionHandler <NSObject>
- (void)connectionDidReceiveOfflineCompleteMarker:(id)fp8;
- (BOOL)handleLoginResponseStanza:(id)fp8 onConnection:(id)fp12;
- (void)xmppConnection:(id)fp8 initialConfigurationAsync:(id)fp(null);
- (BOOL)handleNotification:(id)fp8 onConnection:(id)fp12;
@end

