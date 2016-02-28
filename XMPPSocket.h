/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "GCDAsyncSocketDelegate-Protocol.h"

@class GCDAsyncSocket, NSArray, NSMutableData, NSString, WAInetAddress, WATimer;

@interface XMPPSocket : _ABAddressBookCopyArrayOfAllGroups <GCDAsyncSocketDelegate>
{
    GCDAsyncSocket *_socket;
    double _timeout;
    WATimer *_disconnectionTimer;
    NSArray *_hosts;
    int _currentState;
    NSArray *_addresses;
    int _primaryPort;
    int _secondaryPort;
    NSString *_interface;
    int _disconnectCount;
    int _httpChunkRemainingLength;
    NSMutableData *_httpRemainingChunk;
    BOOL _bindsToCellularNetwork;
    WAInetAddress *_currentAddress;
    NSString *_currentHost;
    unsigned int _currentPort;
    WAInetAddress *_hintIP;
    id <XMPPSocketDelegate> _delegate;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setHintIP:(id)fp8;
- (id)hintIP;
- (void)setBindsToCellularNetwork:(BOOL)fp8;
- (BOOL)bindsToCellularNetwork;
- (unsigned int)currentPort;
- (id)currentHost;
- (id)currentAddress;
- (void).cxx_destruct;
- (void)socketDidDisconnect:(id)fp8 withError:(id)fp12;
- (void)socket:(id)fp8 didWriteDataWithTag:(long)fp12;
- (void)socket:(id)fp8 didReadData:(id)fp12 withTag:(long)fp16;
- (void)socket:(id)fp8 didConnectToHost:(id)fp12 port:(unsigned short)fp16;
- (BOOL)isAlive;
- (void)writeData:(id)fp8 withTimeout:(double)fp12;
- (void)readDataWithTimeout:(double)fp8;
- (BOOL)isConnected;
- (void)disconnectAfterWriting;
- (void)disconnectImmediately;
- (void)connect;
- (id)queue;
- (void)resolveAddressesForHost:(id)fp8;
- (id)randomHost;
- (void)processHttpChunkData:(id)fp8;
- (void)resetInternalState;
- (void)xmppSocketDidDisconnect;
- (void)updateAndPerformNextState;
- (void)connectToHost;
- (id)initWithQueue:(id)fp8 timeout:(double)fp12;

@end
