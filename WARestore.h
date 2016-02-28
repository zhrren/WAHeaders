/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAActionManager.h"

@class NSMutableArray, NSString, WABackupInformation, WAChatStorage, WACloudBackupManager, WACloudInteractionBackupOperation_Documents, WACloudStatus, WATriggeredOperation;

@interface WARestore : WAActionManager
{
    WACloudStatus *_cloudStatus;
    id _cloudStatusListener;
    BOOL _shouldRestore;
    WATriggeredOperation *_delayedStart;
    NSMutableArray *_untarOperations;
    NSString *_localRestorePath;
    unsigned int _backgroundTask;
    BOOL _additionalSpaceRequired;
    WACloudStatus *_downloadStatus;
    WACloudBackupManager *_manager;
    WAChatStorage *_storage;
    WABackupInformation *_backupInformation;
    WACloudInteractionBackupOperation_Documents *_downloadOperation;
    unsigned long long _size;
    unsigned long long _additionalSpaceAmount;
}

- (void)setDownloadOperation:(id)fp8;
- (id)downloadOperation;
- (id)backupInformation;
- (id)storage;
- (id)manager;
- (void)setDownloadStatus:(id)fp8;
- (id)downloadStatus;
- (unsigned long long)additionalSpaceAmount;
- (BOOL)additionalSpaceRequired;
- (unsigned long long)size;
- (void).cxx_destruct;
- (void)willEnterForeground:(id)fp8;
- (void)endBackgroundTask;
- (void)willEndForegroundTask:(id)fp8;
- (void)calculateSizeParameters;
- (void)unregisterForCloudStatus;
- (void)registerForCloudStatus;
- (void)incrementPhase;
- (unsigned int)maximumPhase;
- (id)errorDomain;
- (void)start;
- (void)removeTemporaryDirectory;
- (void)completeWithReason:(unsigned int)fp8;
- (BOOL)encounteredTARError;
- (void)addFirstOperations;
- (void)internalStartRestore;
- (void)addOperation:(id)fp8;
- (void)dealloc;
- (id)initWithManager:(id)fp8 chatStorage:(id)fp12 options:(unsigned int)fp16 completion:(id)fp(null);
- (id)initWithOptions:(unsigned int)fp8;

@end

