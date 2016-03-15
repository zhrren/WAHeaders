/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class WACloudMediaDownloadManager, NSString, NSData, NSURL, NSError, PHAsset, UIImage, NSURLSessionDownloadTask;

__attribute__((visibility("hidden")))
@interface WACloudMediaDownloadRequest : NSObject {
	int _imageRequestID;
	NSURL* _cachedBaseFileURL;
	NSURL* _localFileURL;
	id _assetContent;
	NSURL* _fileURL;
	NSError* _error;
	float _progress;
	WACloudMediaDownloadManager* _manager;
	PHAsset* _phAsset;
	NSURLSessionDownloadTask* _downloadTask;
	NSURL* _remoteURL;
	NSData* _resumeData;
	id _progressHandler;
	id _completionHandler;
	unsigned _requestState;
}
@property(readonly, assign, nonatomic) BOOL isAssetCloudPlaceholder;
@property(assign, nonatomic) unsigned requestState;
@property(copy, nonatomic) id completionHandler;
@property(copy, nonatomic) id progressHandler;
@property(retain, nonatomic) NSData* resumeData;
@property(readonly, copy, nonatomic) NSURL* remoteURL;
@property(readonly, assign, nonatomic) NSURLSessionDownloadTask* downloadTask;
@property(readonly, assign, nonatomic) PHAsset* phAsset;
@property(readonly, copy, nonatomic) NSString* identifier;
@property(assign, nonatomic) __weak WACloudMediaDownloadManager* manager;
@property(readonly, assign, nonatomic) UIImage* image;
@property(readonly, assign, nonatomic, getter=isContentAvailable) BOOL contentAvailable;
@property(readonly, assign, nonatomic, getter=isCancelled) BOOL cancelled;
@property(readonly, assign, nonatomic, getter=isDownloading) BOOL downloading;
@property(assign, nonatomic) float progress;
@property(readonly, assign, nonatomic) NSError* error;
@property(readonly, copy, nonatomic) NSURL* fileURL;
-(void).cxx_destruct;
-(void)didDownloadRemoteURLTo:(id)to preferredExtension:(id)extension;
-(void)didFinishDownloadWithError:(id)error;
-(void)didFinishRequest;
-(void)cancel;
-(void)resume;
-(int)reallyRequestAssetFromPhotosLibraryWithCompletionHandler:(id)completionHandler;
-(void)requestAssetFromPhotosLibraryWithCompletionHandler:(id)completionHandler;
-(void)unload;
-(void)resetState;
-(id)existingCachedFileURLWithBaseURL:(id)baseURL;
-(id)initWithPHAsset:(id)phasset;
@end

