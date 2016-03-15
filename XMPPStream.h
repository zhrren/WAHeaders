/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "XMPPSocketDelegate.h"

@class NSDictionary, WATimer, ExecutionTimeProfiler, XMPPSocket, NSMutableArray, XMPPBinaryCoder, NSMutableData, NSData, NSString;
@protocol OS_dispatch_queue, XMPPStreamDelegate;

__attribute__((visibility("hidden")))
@interface XMPPStream : NSObject <XMPPSocketDelegate> {
	XMPPBinaryCoder* _binaryCoder;
	NSMutableData* _incomingBuffer;
	XMPPSocket* _socket;
	ExecutionTimeProfiler* _profiler;
	NSMutableData* _nextToken;
	double _lastSocketReadTime;
	double _systemUptimeAtLastSocketRead;
	NSMutableArray* _messages;
	BOOL _firstPresenceReceived;
	NSDictionary* _connectionInfo;
	unsigned _busySocketTask;
	BOOL _isDisconnecting;
	BOOL _isAckKick;
	WATimer* _socketIdleTimer;
	BOOL _contactsAccessAllowed;
	BOOL _xmppPassiveMode;
	BOOL _opened;
	id<XMPPStreamDelegate> _delegate;
	NSString* _xmppUser;
	NSData* _xmppPassword;
	double _lastOfflineStanzaTime;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic, getter=isSocketAlive) BOOL socketAlive;
@property(copy, nonatomic) NSString* hintIPAdress;
@property(readonly, assign, nonatomic) unsigned short currentPort;
@property(readonly, copy, nonatomic) NSString* currentHost;
@property(readonly, copy, nonatomic) NSString* currentIPAddress;
@property(assign, nonatomic) BOOL bindsToCellularNetwork;
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue>* queue;
@property(readonly, assign, nonatomic, getter=isOpened) BOOL opened;
@property(readonly, assign, nonatomic) double lastOfflineStanzaTime;
@property(readonly, assign, nonatomic) double elapsedTimeSinceLastReadData;
@property(assign, nonatomic) BOOL xmppPassiveMode;
@property(retain, nonatomic) NSData* xmppPassword;
@property(retain, nonatomic) NSString* xmppUser;
@property(assign, nonatomic, getter=isContactsAccessAllowed) BOOL contactsAccessAllowed;
@property(assign, nonatomic) __weak id<XMPPStreamDelegate> delegate;
-(void).cxx_destruct;
-(void)xmppSocketDidDisconnect:(id)xmppSocket;
-(void)invalidateBusySocketTimer;
-(void)reportIdleSocketAfterDelay;
-(void)xmppSocketDidWriteData:(id)xmppSocket;
-(void)xmppSocket:(id)socket didReadData:(id)data;
-(void)startStreamWithLoginStanzaElements:(id)loginStanzaElements connectionInfo:(id)info;
-(void)xmppSocket:(id)socket didConnectToHost:(id)host port:(unsigned short)port;
-(void)xmppSocket:(id)socket willConnectToHost:(id)host;
-(void)processElements:(id)elements;
-(void)processStanza:(id)stanza;
-(void)processMessages;
-(void)outputProfilingResults;
-(unsigned)sendElements:(id)elements;
-(unsigned)sendElements:(id)elements timeout:(double)timeout;
-(unsigned)sendElement:(id)element;
-(unsigned)sendElement:(id)element timeout:(double)timeout;
-(unsigned)internalSendElements:(id)elements timeout:(double)timeout encrypted:(BOOL)encrypted;
-(void)sendStreamEndAndDisconnect;
-(void)disconnectImmediately;
-(void)connect;
-(void)dealloc;
-(id)initWithQueue:(id)queue;
@end

