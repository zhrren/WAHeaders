/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import </libobjc.A.h>

@class GCDAsyncSocketPreBuffer, GCDAsyncReadPacket, GCDAsyncWritePacket, NSMutableArray, NSString, NSData;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface GCDAsyncSocket : NSObject {
	unsigned flags;
	unsigned short config;
	id delegate;
	NSObject<OS_dispatch_queue>* delegateQueue;
	int socket4FD;
	int socket6FD;
	int stateIndex;
	NSData* connectInterface4;
	NSData* connectInterface6;
	NSObject<OS_dispatch_queue>* socketQueue;
	NSObject<OS_dispatch_source>* accept4Source;
	NSObject<OS_dispatch_source>* accept6Source;
	NSObject<OS_dispatch_source>* connectTimer;
	NSObject<OS_dispatch_source>* readSource;
	NSObject<OS_dispatch_source>* writeSource;
	NSObject<OS_dispatch_source>* readTimer;
	NSObject<OS_dispatch_source>* writeTimer;
	NSMutableArray* readQueue;
	NSMutableArray* writeQueue;
	GCDAsyncReadPacket* currentRead;
	GCDAsyncWritePacket* currentWrite;
	unsigned long socketFDBytesAvailable;
	GCDAsyncSocketPreBuffer* preBuffer;
	XXStruct_4pnlqD streamContext;
	CFReadStreamRef readStream;
	CFWriteStreamRef writeStream;
	SSLContextRef sslContext;
	GCDAsyncSocketPreBuffer* sslPreBuffer;
	unsigned long sslWriteCachedLength;
	long sslErrCode;
	void* IsOnSocketQueueOrTargetQueueKey;
	id userData;
}
@property(assign) BOOL autoDisconnectOnClosedReadStream;
@property(readonly, assign) BOOL isSecure;
@property(readonly, assign) BOOL isIPv6;
@property(readonly, assign) BOOL isIPv4;
@property(readonly, assign) NSData* localAddress;
@property(readonly, assign) NSData* connectedAddress;
@property(readonly, assign) unsigned short localPort;
@property(readonly, assign) NSString* localHost;
@property(readonly, assign) unsigned short connectedPort;
@property(readonly, assign) NSString* connectedHost;
@property(readonly, assign) BOOL isConnected;
@property(readonly, assign) BOOL isDisconnected;
@property(retain) id userData;
@property(assign, getter=isIPv4PreferredOverIPv6) BOOL IPv4PreferredOverIPv6;
@property(assign, getter=isIPv6Enabled) BOOL IPv6Enabled;
@property(assign, getter=isIPv4Enabled) BOOL IPv4Enabled;
@property(retain) NSObject<OS_dispatch_queue>* delegateQueue;
@property(assign) __weak id delegate;
+(id)ZeroData;
+(id)LFData;
+(id)CRData;
+(id)CRLFData;
+(BOOL)getHost:(id*)host port:(unsigned short*)port family:(char*)family fromAddress:(id)address;
+(BOOL)getHost:(id*)host port:(unsigned short*)port fromAddress:(id)address;
+(BOOL)isIPv6Address:(id)address;
+(BOOL)isIPv4Address:(id)address;
+(unsigned short)portFromAddress:(id)address;
+(id)hostFromAddress:(id)address;
+(unsigned short)portFromSockaddr6:(const sockaddr_in6*)sockaddr6;
+(unsigned short)portFromSockaddr4:(const sockaddr_in*)sockaddr4;
+(id)hostFromSockaddr6:(const sockaddr_in6*)sockaddr6;
+(id)hostFromSockaddr4:(const sockaddr_in*)sockaddr4;
+(id)lookupHost:(id)host port:(unsigned short)port error:(id*)error;
+(void)unscheduleCFStreams:(id)streams;
+(void)scheduleCFStreams:(id)streams;
+(void)cfstreamThread;
+(void)stopCFStreamThreadIfNeeded;
+(void)startCFStreamThreadIfNeeded;
+(void)ignore:(id)ignore;
+(id)gaiError:(int)error;
+(void)freeCFHostConnect:(CFHostRef)connect readStream:(CFReadStreamRef)stream writeStream:(CFWriteStreamRef)stream3;
-(void).cxx_destruct;
-(SSLContextRef)sslContext;
-(BOOL)enableBackgroundingOnSocketWithCaveat;
-(BOOL)enableBackgroundingOnSocket;
-(BOOL)enableBackgroundingOnSocketWithCaveat:(BOOL)caveat;
-(CFWriteStreamRef)writeStream;
-(CFReadStreamRef)readStream;
-(int)socket6FD;
-(int)socket4FD;
-(int)socketFD;
-(void)performBlock:(id)block;
-(void)unmarkSocketQueueTargetQueue:(id)queue;
-(void)markSocketQueueTargetQueue:(id)queue;
-(BOOL)openStreams;
-(void)removeStreamsFromRunLoop;
-(BOOL)addStreamsToRunLoop;
-(BOOL)registerForStreamCallbacksIncludingReadWrite:(BOOL)streamCallbacksIncludingReadWrite;
-(BOOL)createReadAndWriteStream;
-(void)cf_startTLS;
-(void)cf_abortSSLHandshake:(id)handshake;
-(void)cf_finishSSLHandshake;
-(void)ssl_shouldTrustPeer:(BOOL)peer stateIndex:(int)index;
-(void)ssl_continueSSLHandshake;
-(void)ssl_startTLS;
-(long)sslWriteWithBuffer:(const void*)buffer length:(unsigned*)length;
-(long)sslReadWithBuffer:(void*)buffer length:(unsigned*)length;
-(void)maybeStartTLS;
-(void)startTLS:(id)tls;
-(void)doWriteTimeoutWithExtension:(double)extension;
-(void)doWriteTimeout;
-(void)setupWriteTimerWithTimeout:(double)timeout;
-(void)endCurrentWrite;
-(void)completeCurrentWrite;
-(void)doWriteData;
-(void)maybeDequeueWrite;
-(float)progressOfWriteReturningTag:(long*)writeReturningTag bytesDone:(unsigned*)done total:(unsigned*)total;
-(void)writeData:(id)data withTimeout:(double)timeout tag:(long)tag;
-(void)doReadTimeoutWithExtension:(double)extension;
-(void)doReadTimeout;
-(void)setupReadTimerWithTimeout:(double)timeout;
-(void)endCurrentRead;
-(void)completeCurrentRead;
-(void)doReadEOF;
-(void)doReadData;
-(void)flushSSLBuffers;
-(void)maybeDequeueRead;
-(float)progressOfReadReturningTag:(long*)readReturningTag bytesDone:(unsigned*)done total:(unsigned*)total;
-(void)readDataToData:(id)data withTimeout:(double)timeout buffer:(id)buffer bufferOffset:(unsigned)offset maxLength:(unsigned)length tag:(long)tag;
-(void)readDataToData:(id)data withTimeout:(double)timeout maxLength:(unsigned)length tag:(long)tag;
-(void)readDataToData:(id)data withTimeout:(double)timeout buffer:(id)buffer bufferOffset:(unsigned)offset tag:(long)tag;
-(void)readDataToData:(id)data withTimeout:(double)timeout tag:(long)tag;
-(void)readDataToLength:(unsigned)length withTimeout:(double)timeout buffer:(id)buffer bufferOffset:(unsigned)offset tag:(long)tag;
-(void)readDataToLength:(unsigned)length withTimeout:(double)timeout tag:(long)tag;
-(void)readDataWithTimeout:(double)timeout buffer:(id)buffer bufferOffset:(unsigned)offset maxLength:(unsigned)length tag:(long)tag;
-(void)readDataWithTimeout:(double)timeout buffer:(id)buffer bufferOffset:(unsigned)offset tag:(long)tag;
-(void)readDataWithTimeout:(double)timeout tag:(long)tag;
-(void)resumeWriteSource;
-(void)suspendWriteSource;
-(void)resumeReadSource;
-(void)suspendReadSource;
-(BOOL)usingSecureTransportForTLS;
-(BOOL)usingCFStreamForTLS;
-(void)setupReadAndWriteSourcesForNewlyConnectedSocket:(int)newlyConnectedSocket;
-(void)getInterfaceAddress4:(id*)a4 address6:(id*)a6 fromDescription:(id)description port:(unsigned short)port;
-(unsigned short)localPortFromSocket6:(int)socket6;
-(unsigned short)localPortFromSocket4:(int)socket4;
-(id)localHostFromSocket6:(int)socket6;
-(id)localHostFromSocket4:(int)socket4;
-(unsigned short)connectedPortFromSocket6:(int)socket6;
-(unsigned short)connectedPortFromSocket4:(int)socket4;
-(id)connectedHostFromSocket6:(int)socket6;
-(id)connectedHostFromSocket4:(int)socket4;
-(unsigned short)localPort6;
-(unsigned short)localPort4;
-(id)localHost6;
-(id)localHost4;
-(unsigned short)connectedPort6;
-(unsigned short)connectedPort4;
-(id)connectedHost6;
-(id)connectedHost4;
-(id)otherError:(id)error;
-(id)connectionClosedError;
-(id)writeTimeoutError;
-(id)readTimeoutError;
-(id)readMaxedOutError;
-(id)connectTimeoutError;
-(id)sslError:(long)error;
-(id)errnoError;
-(id)errnoErrorWithReason:(id)reason;
-(id)badParamError:(id)error;
-(id)badConfigError:(id)error;
-(void)maybeClose;
-(void)disconnectAfterReadingAndWriting;
-(void)disconnectAfterWriting;
-(void)disconnectAfterReading;
-(void)disconnect;
-(void)closeWithError:(id)error;
-(void)doConnectTimeout;
-(void)endConnectTimeout;
-(void)startConnectTimeout:(double)timeout;
-(void)didNotConnect:(int)connect error:(id)error;
-(void)didConnect:(int)connect;
-(BOOL)connectWithAddress4:(id)address4 address6:(id)a6 error:(id*)error;
-(void)lookup:(int)lookup didFail:(id)fail;
-(void)lookup:(int)lookup didSucceedWithAddress4:(id)address4 address6:(id)a6;
-(int)blockUntilReadStreamOpened:(CFReadStreamRef)opened withTimeout:(double)timeout;
-(void)connectImplWithCFHost:(CFHostRef)cfhost onPort:(unsigned short)port withTimeout:(double)timeout;
-(BOOL)connectWithCFHost:(CFHostRef)cfhost onPort:(unsigned short)port withTimeout:(double)timeout error:(id*)error;
-(BOOL)connectToAddress:(id)address viaInterface:(id)interface withTimeout:(double)timeout error:(id*)error;
-(BOOL)connectToAddress:(id)address withTimeout:(double)timeout error:(id*)error;
-(BOOL)connectToAddress:(id)address error:(id*)error;
-(BOOL)connectToHost:(id)host onPort:(unsigned short)port viaInterface:(id)interface withTimeout:(double)timeout error:(id*)error;
-(BOOL)connectToHost:(id)host onPort:(unsigned short)port withTimeout:(double)timeout error:(id*)error;
-(BOOL)connectToHost:(id)host onPort:(unsigned short)port error:(id*)error;
-(BOOL)preConnectWithInterface:(id)interface error:(id*)error;
-(BOOL)doAccept:(int)accept;
-(BOOL)acceptOnInterface:(id)interface port:(unsigned short)port error:(id*)error;
-(BOOL)acceptOnPort:(unsigned short)port error:(id*)error;
-(void)synchronouslySetDelegate:(id)delegate delegateQueue:(id)queue;
-(void)setDelegate:(id)delegate delegateQueue:(id)queue;
-(void)setDelegate:(id)delegate delegateQueue:(id)queue synchronously:(BOOL)synchronously;
-(void)getDelegate:(id*)delegate delegateQueue:(id*)queue;
-(void)synchronouslySetDelegateQueue:(id)queue;
-(void)setDelegateQueue:(id)queue synchronously:(BOOL)synchronously;
-(void)synchronouslySetDelegate:(id)delegate;
-(void)setDelegate:(id)delegate synchronously:(BOOL)synchronously;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate delegateQueue:(id)queue socketQueue:(id)queue3;
-(id)initWithDelegate:(id)delegate delegateQueue:(id)queue;
-(id)initWithSocketQueue:(id)socketQueue;
-(id)init;
@end

