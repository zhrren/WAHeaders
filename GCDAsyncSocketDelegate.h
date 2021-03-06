/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"


@protocol GCDAsyncSocketDelegate
@optional
-(void)socket:(id)socket didReceiveTrust:(SecTrust*)trust completionHandler:(id)handler;
-(void)socketDidSecure:(id)socket;
-(void)socketDidDisconnect:(id)socket withError:(id)error;
-(void)socketDidCloseReadStream:(id)socket;
-(double)socket:(id)socket shouldTimeoutWriteWithTag:(long)tag elapsed:(double)elapsed bytesDone:(unsigned)done;
-(double)socket:(id)socket shouldTimeoutReadWithTag:(long)tag elapsed:(double)elapsed bytesDone:(unsigned)done;
-(void)socket:(id)socket didWritePartialDataOfLength:(unsigned)length tag:(long)tag;
-(void)socket:(id)socket didWriteDataWithTag:(long)tag;
-(void)socket:(id)socket didReadPartialDataOfLength:(unsigned)length tag:(long)tag;
-(void)socket:(id)socket didReadData:(id)data withTag:(long)tag;
-(void)socket:(id)socket didConnectToHost:(id)host port:(unsigned short)port;
-(void)socket:(id)socket didAcceptNewSocket:(id)socket2;
-(id)newSocketQueueForConnectionFromAddress:(id)address onSocket:(id)socket;
@end

