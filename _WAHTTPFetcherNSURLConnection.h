/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSURLSessionTaskDelegate.h"
#import "WAHTTPFetcher.h"

@class NSString, NSURLConnection, NSMutableData, NSURLResponse;

@interface _WAHTTPFetcherNSURLConnection : WAHTTPFetcher <NSURLSessionTaskDelegate> {
	NSURLResponse* _response;
	NSMutableData* _receivedData;
	NSURLConnection* _connection;
	unsigned _backgroundTaskIdentifier;
	BOOL _isCancellingChallenge;
	BOOL _connectionHasEnded;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection willSendRequestForAuthenticationChallenge:(id)authenticationChallenge;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)endBackgroundTask;
-(void)failToBeginFetchWithError:(id)error;
-(void)invokeCompletionHandlerWithData:(id)data error:(id)error;
-(void)stopFetching;
-(void)beginFetchOnQueue:(id)queue completion:(id)completion;
@end

