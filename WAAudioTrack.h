/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class AVAssetExportSession, NSString, NSTimer, NSURL, UIImage;

@interface WAAudioTrack : _ABAddressBookCopyArrayOfAllGroups
{
    id _exportCompletionHandler;
    id _exportProgressHandler;
    AVAssetExportSession *_exportSession;
    NSTimer *_progressTimer;
    float _lastProgressValue;
    NSURL *_assetURL;
    UIImage *_artwork;
    NSString *_title;
    NSString *_authorName;
    NSString *_collectionName;
    NSString *_outputFileType;
    NSURL *_outputMediaURLWithoutFileExtension;
    NSURL *_outputMediaURL;
    double _duration;
}

+ (id)audioFileExtensionForFileType:(id)fp8;
+ (id)cachePathForAssetURL:(id)fp8;
+ (void)pruneAudioTrackExportCacheFiles;
+ (id)pathToAudioTrackExportCacheFiles;
+ (BOOL)isMediaItemShareable:(id)fp8 error:(out id *)fp12;
- (id)outputMediaURL;
- (void)setOutputMediaURLWithoutFileExtension:(id)fp8;
- (id)outputMediaURLWithoutFileExtension;
- (id)outputFileType;
- (double)duration;
- (id)collectionName;
- (id)authorName;
- (id)title;
- (id)artwork;
- (id)assetURL;
- (void).cxx_destruct;
- (void)updateProgress:(id)fp8;
- (void)stopProgressTimer;
- (void)startProgressTimer;
- (void)handleExportCompletionWithSuccessfulOutcome:(BOOL)fp8;
- (void)performExport;
- (void)transferToMediaDirectoryWithProgressHandler:(id)fp(null) completion:(void)fp8;
- (void)addOutputFileToCache;
- (id)pathOfCachedAudioTrackFileForExport;
- (void)prepareWithCompletionHandler:(id)fp(null);
- (id)initWithMediaItem:(id)fp8;

@end

