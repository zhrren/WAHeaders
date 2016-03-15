/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import </libobjc.A.h>

@class AVAsset, AVAssetReader, AVVideoComposition, AVAssetReaderOutput, AVAssetExportSession, AVAssetReaderTrackOutput, AVAssetWriterInput, NSURL, AVAssetWriter, NSError;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface WAVideoTranscoder : NSObject {
	NSObject<OS_dispatch_queue>* _exportQueue;
	NSObject<OS_dispatch_group>* _exportDispatchGroup;
	id _completionHandler;
	float _progress;
	BOOL _cancelExportRequested;
	AVAsset* _asset;
	AVVideoComposition* _videoComposition;
	AVAssetReader* _assetReader;
	AVAssetReaderOutput* _videoOutput;
	AVAssetReaderTrackOutput* _audioOutput;
	AVAssetWriter* _assetWriter;
	AVAssetWriterInput* _videoInput;
	AVAssetWriterInput* _audioInput;
	AVAssetExportSession* _passThroughExportSession;
	BOOL _passThroughOnly;
	BOOL _preservesOriginalDimensions;
	NSURL* _outputURL;
	int _status;
	NSError* _error;
	double _exportedDuration;
	XXStruct_yD8eWC _timeRange;
}
@property(assign, nonatomic) BOOL preservesOriginalDimensions;
@property(assign, nonatomic) BOOL passThroughOnly;
@property(assign, nonatomic) XXStruct_yD8eWC timeRange;
@property(readonly, assign, nonatomic) double exportedDuration;
@property(readonly, assign, nonatomic) NSError* error;
@property(readonly, assign, nonatomic) int status;
@property(readonly, assign, nonatomic) float progress;
@property(readonly, copy, nonatomic) NSURL* outputURL;
+(id)initialCompressionSettingsForVideoTrack:(id)videoTrack;
+(id)genericUnusableVideoError;
+(id)errorWithCode:(int)code reason:(id)reason;
+(void)changeContainerToMP4IfNeededForVideoAtPath:(id)path completion:(id)completion;
-(void).cxx_destruct;
-(void)reallyPerformPassThroughExport;
-(void)performPassThroughExportWithTimeRange:(XXStruct_yD8eWC)timeRange resultBlock:(id)block;
-(void)transcoderDidFinishExporting;
-(void)finishExporting;
-(void)writeSamplesStartingAtTime:(XXStruct_pwHToB)time;
-(void)reallyPerformExportWithTimeRange:(XXStruct_yD8eWC)timeRange;
-(void)performExportWithTimeRange:(XXStruct_yD8eWC)timeRange passThroughOnly:(BOOL)only;
-(void)abortWithError:(id)error;
-(CGSize)transcodedSizeFromNaturalSize:(CGSize)naturalSize;
-(BOOL)videoSizeIsEligibleForPassThrough:(CGSize)passThrough;
-(void)cancelExport;
-(void)exportAsynchronouslyWithCompletionHandler:(id)completionHandler;
-(id)initWithAsset:(id)asset videoComposition:(id)composition outputURL:(id)url;
@end

