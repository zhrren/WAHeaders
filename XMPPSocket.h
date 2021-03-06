/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "GCDAsyncSocketDelegate.h"
#import </libobjc.A.h>

@class WATimer, NSArray, GCDAsyncSocket, NSMutableArray, NSMutableData, NSString, WAInetAddress;
@protocol OS_dispatch_queue, XMPPSocketDelegate;

__attribute__((visibility("hidden")))
@interface XMPPSocket : NSObject <GCDAsyncSocketDelegate> {
	GCDAsyncSocket* _socket;
	double _timeout;
	WATimer* _disconnectionTimer;
	NSArray* _hosts;
	int _currentState;
	NSMutableArray* _ipv4Addresses;
	NSMutableArray* _ipv6Addresses;
	int _primaryPort;
	int _secondaryPort;
	NSString* _interface;
	BOOL _resolveWithCFSocketStream;
	int _httpChunkRemainingLength;
	NSMutableData* _httpRemainingChunk;
	BOOL _bindsToCellularNetwork;
	WAInetAddress* _currentAddress;
	NSString* _currentHost;
	unsigned _currentPort;
	WAInetAddress* _hintIP;
	id<XMPPSocketDelegate> _delegate;
}
@property(readonly, assign, nonatomic, getter=isAlive) BOOL alive;
@property(assign, nonatomic) __weak id<XMPPSocketDelegate> delegate;
@property(retain, nonatomic) WAInetAddress* hintIP;
@property(assign, nonatomic) BOOL bindsToCellularNetwork;
@property(readonly, assign, nonatomic, getter=isConnected) BOOL connected;
@property(readonly, assign, nonatomic) unsigned currentPort;
@property(readonly, copy, nonatomic) NSString* currentHost;
@property(readonly, assign, nonatomic) WAInetAddress* currentAddress;
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue>* queue;
-(void).cxx_destruct;
-(void)socketDidDisconnect:(id)socket withError:(id)error;
-(void)socket:(id)socket didWriteDataWithTag:(long)tag;
-(void)socket:(id)socket didReadData:(id)data withTag:(long)tag;
-(void)socket:(id)socket didConnectToHost:(id)host port:(unsigned short)port;
-(void)writeData:(id)data withTimeout:(double)timeout;
-(void)readDataWithTimeout:(double)timeout;
-(void)disconnectAfterWriting;
-(void)disconnectImmediately;
-(void)connect;
-(void)resolveAddressesForHost:(id)host;
-(void)processHttpChunkData:(id)data;
-(void)resetInternalState;
-(void)xmppSocketDidDisconnect;
-(void)updateAndPerformNextState;
-(void)connectToHost;
-(id)initWithQueue:(id)queue timeout:(double)timeout;
@end

