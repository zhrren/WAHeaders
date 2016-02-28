/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WACloudInteractionBackupOperation_Documents.h"

@class NSSet, WAActionManager, WACloudStatus;

@interface WADownloadBackupOperation_Documents : WACloudInteractionBackupOperation_Documents
{
    float _progress;
    WAActionManager *_actionManager;
    unsigned int _failureCode;
    WACloudStatus *_capturedCloudStatus;
    NSSet *_filesToDownload;
}

- (id)filesToDownload;
- (id)capturedCloudStatus;
- (unsigned int)failureCode;
- (id)actionManager;
- (void).cxx_destruct;
- (void)startDownloadingRelevantBackupFiles;
- (void)run;
- (void)listenForCloudStatus;
- (id)cloudStatusToObserve;
- (float)progress;
- (id)initWithActionManager:(id)fp8 failureCode:(unsigned int)fp12 cloudManager:(id)fp16 filesToDownload:(id)fp20;
- (id)init;

@end
