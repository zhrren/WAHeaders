/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAHTTPFetcher.h"

#import "NSURLSessionDelegate-Protocol.h"

@class NSURLSession, NSURLSessionTask;

@interface _WAHTTPFetcherNSURLSession : WAHTTPFetcher <NSURLSessionDelegate>
{
    NSURLSession *_urlSession;
    NSURLSessionTask *_urlSessionTask;
    BOOL _cancelled;
}

- (void).cxx_destruct;
- (void)URLSession:(id)fp8 task:(id)fp12 didReceiveChallenge:(id)fp16 completionHandler:(id)fp(null);
- (void)stopFetching;
- (void)beginFetchOnQueue:(id)fp8 completion:(id)fp(null);
- (void)invokeCompletionHandlerWithData:(id)fp8 response:(id)fp12 error:(id)fp16;

@end
