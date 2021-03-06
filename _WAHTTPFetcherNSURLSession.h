/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSURLSessionDelegate.h"
#import "WAHTTPFetcher.h"

@class NSURLSession, NSString, NSURLSessionTask;

@interface _WAHTTPFetcherNSURLSession : WAHTTPFetcher <NSURLSessionDelegate> {
	NSURLSession* _urlSession;
	NSURLSessionTask* _urlSessionTask;
	BOOL _cancelled;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)URLSession:(id)session task:(id)task didReceiveChallenge:(id)challenge completionHandler:(id)handler;
-(void)stopFetching;
-(void)beginFetchOnQueue:(id)queue completion:(id)completion;
-(void)invokeCompletionHandlerWithData:(id)data response:(id)response error:(id)error;
@end

