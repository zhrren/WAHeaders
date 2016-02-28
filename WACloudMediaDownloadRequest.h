/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSData, NSError, NSURL, NSURLSessionDownloadTask, PHAsset, WACloudMediaDownloadManager;

@interface WACloudMediaDownloadRequest : _ABAddressBookCopyArrayOfAllGroups
{
    int _imageRequestID;
    NSURL *_cachedBaseFileURL;
    NSURL *_localFileURL;
    id _assetContent;
    NSURL *_fileURL;
    NSError *_error;
    float _progress;
    WACloudMediaDownloadManager *_manager;
    PHAsset *_phAsset;
    NSURLSessionDownloadTask *_downloadTask;
    NSURL *_remoteURL;
    NSData *_resumeData;
    id _progressHandler;
    id _completionHandler;
    unsigned int _requestState;
}

- (void)setRequestState:(unsigned int)fp8;
- (unsigned int)requestState;
- (void)setCompletionHandler:(id)fp(null);
- (id)completionHandler;
- (void)setProgressHandler:(id)fp(null);
- (id)progressHandler;
- (void)setResumeData:(id)fp8;
- (id)resumeData;
- (id)remoteURL;
- (id)downloadTask;
- (id)phAsset;
- (void)setManager:(id)fp8;
- (id)manager;
- (float)progress;
- (id)error;
- (id)fileURL;
- (void).cxx_destruct;
- (void)setProgress:(float)fp8;
- (void)didDownloadRemoteURLTo:(id)fp8 preferredExtension:(id)fp12;
- (void)didFinishDownloadWithError:(id)fp8;
- (void)didFinishRequest;
- (void)cancel;
- (void)resume;
- (BOOL)isCancelled;
- (BOOL)isDownloading;
- (BOOL)isAssetCloudPlaceholder;
- (id)identifier;
- (int)reallyRequestAssetFromPhotosLibraryWithCompletionHandler:(id)fp(null);
- (void)requestAssetFromPhotosLibraryWithCompletionHandler:(id)fp(null);
- (void)unload;
- (void)resetState;
- (BOOL)isContentAvailable;
- (id)image;
- (id)existingCachedFileURLWithBaseURL:(id)fp8;
- (id)initWithPHAsset:(id)fp8;

@end
