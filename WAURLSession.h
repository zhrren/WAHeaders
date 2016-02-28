/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSURLSession, WAURLSessionManager;

@interface WAURLSession : _ABAddressBookCopyArrayOfAllGroups
{
    NSMutableArray *_tasks;
    BOOL _isLoaded;
    NSMutableArray *_deferredOperations;
    NSObject<OS_dispatch_queue> *_ioQueue;
    BOOL _ignoreSaveTasks;
    NSURLSession *_URLSession;
    NSString *_identifier;
    id _completionHandler;
    WAURLSessionManager *_sessionManager;
}

- (void)setSessionManager:(id)fp8;
- (id)sessionManager;
- (void)setCompletionHandler:(id)fp(null);
- (id)completionHandler;
- (id)identifier;
- (id)URLSession;
- (void).cxx_destruct;
- (void)restoreTasksWithCompletionHandler:(id)fp(null);
- (id)savedTasksFilePath;
- (void)saveTasks;
- (void)cancelAll;
- (void)resumeAll;
- (void)suspendAll;
- (id)allTaskIdentifiers;
- (id)addDownloadTaskWithTaskData:(id)fp8;
- (id)taskWithIdentifier:(id)fp8;
- (void)removeTask:(id)fp8;
- (void)addTask:(id)fp8;
- (void)flushDeferredTaskOperations;
- (BOOL)hasPendingInProcessRequests;
- (BOOL)isBackgroundSession;
- (id)initWithURLSession:(id)fp8 identifier:(id)fp12;
- (id)initWithIdentifier:(id)fp8;

@end
