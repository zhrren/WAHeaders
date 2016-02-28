/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSConditionLock, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, UIImage, WAMessage;

@interface WAMessageHelper : _ABAddressBookCopyArrayOfAllGroups
{
    NSObject<OS_dispatch_queue> *_generateImageRepresentationQueue;
    NSObject<OS_dispatch_group> *_thumbnailLoadingGroup;
    NSObject<OS_dispatch_queue> *_localThumbnailLoadingQueue;
    NSConditionLock *_xmppLoadingLock;
    int _activeOperationCount;
    BOOL _thumbnailLoadingInProgress;
    BOOL _mapThumbnailRequestInProgress;
    WAMessage *_message;
    UIImage *_imageRepresentation;
    UIImage *_xmppImage;
    UIImage *_blurredImage;
    double _cachedMediaDuration;
}

+ (id)alertStringToSendMultipleMessagesWithParts:(id)fp8 overflowed:(BOOL)fp12;
+ (id)imageForMediaAtPath:(id)fp8;
+ (double)durationOfMediaAtPath:(id)fp8;
+ (Class)helperClassForMessage:(id)fp8;
+ (id)messageHelperForMessage:(id)fp8;
+ (id)jpegDataFromImage:(id)fp8 error:(out id *)fp12;
+ (BOOL)checkMediaSize:(id)fp8 error:(out id *)fp12;
+ (id)errorWithDescription:(id)fp8 failureReason:(id)fp12;
+ (id)messageTimestampForVoiceOverFromDate:(id)fp8;
+ (id)stringRepresentationForVoiceOverForMessage:(id)fp8;
+ (id)stringRepresentationForNotificationForMessage:(id)fp8;
+ (id)stringRepresentationForChatForMessage:(id)fp8;
+ (id)stringRepresentationForMessage:(id)fp8;
+ (id)senderNameForStringRepresentationForMessage:(id)fp8;
+ (id)cachedThumbnailPathFromMediaPath:(id)fp8;
+ (id)cachedThumbnailPathForLocation:(id)fp8;
+ (unsigned int)blurredImagePreference;
+ (float)blurredImageMaximumWidth;
+ (id)staticMediaBrowserThumbnail;
+ (struct CGSize)mediaBrowserThumbnailSize;
+ (void)initialize;
- (void)setMapThumbnailRequestInProgress:(BOOL)fp8;
- (BOOL)mapThumbnailRequestInProgress;
- (void)setThumbnailLoadingInProgress:(BOOL)fp8;
- (BOOL)thumbnailLoadingInProgress;
- (void)setCachedMediaDuration:(double)fp8;
- (double)cachedMediaDuration;
- (void)setBlurredImage:(id)fp8;
- (id)blurredImage;
- (void)setXmppImage:(id)fp8;
- (id)xmppImage;
- (void)setImageRepresentation:(id)fp8;
- (id)imageRepresentation;
- (void)setMessage:(id)fp8;
- (id)message;
- (void).cxx_destruct;
- (BOOL)isProcessing;
- (void)freeCachedData;
- (void)didReceiveMemoryWarning:(id)fp8;
- (void)applicationDidEnterBackground:(id)fp8;
- (void)dealloc;
- (id)init;
- (id)activityDataTypeIdentifierForActivityType:(id)fp8;
- (id)activitySubjectForActivityType:(id)fp8;
- (id)activityItemForActivityType:(id)fp8;
- (id)activityPlaceholderItem;
- (void)internalRepeatedlyFetchBetterThumbnailsWithBlock:(id)fp(null);
- (void)repeatedlyFetchBetterThumbnailsWithBlock:(id)fp(null);
- (void)fetchMapPreviewIfNecessary;
- (void)prepareForDisplay;
- (id)internalGenerateImageRepresentationFromSourceMediaAtPath:(id)fp8;
- (id)generateImageRepresentationFromSourceMediaAtPath:(id)fp8;
- (void)messageDidStoreIncomingMedia;
- (void)storeIncomingMediaWithFilename:(id)fp8 data:(id)fp12 completion:(id)fp(null);
- (void)sanitizeIncomingMediaData:(id)fp8 completion:(id)fp(null);
- (void)storeOutgoingMedia:(id)fp8 completion:(id)fp(null);
- (struct CGSize)chatThumbnailSize;
- (id)chatThumbnailReturningPermanentState:(out char *)fp8;
- (void)internalGenerateMediaBrowserThumbnailFromImageRepresentation:(id)fp8 completion:(id)fp(null);
- (void)generateMediaBrowserThumbnailWithCompletionHandler:(id)fp(null);
- (void)internalGenerateChatThumbnailFromImageRepresentation:(id)fp8 completion:(id)fp(null);
- (void)generateChatThumbnailWithCompletionHandler:(id)fp(null);
- (void)internalGenerateXMPPThumbnailFromImageRepresentation:(id)fp8 completion:(id)fp(null);
- (void)generateXMPPThumbnailWithCompletionHandler:(id)fp(null);
- (void)internalFetchImageRepresentationWithCompletionHandler:(id)fp(null);
- (void)fetchImageRepresentationWithCompletionHandler:(id)fp(null);

@end
