/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>


__attribute__((visibility("hidden")))
@interface WAAssetsLibraryManager : NSObject {
}
+(id)phAssetWithURL:(id)url;
+(void)showFailedToSaveMediaAlertView;
+(void)showUnusableVideoAlertViewFromViewController:(id)viewController;
+(void)showUnusablePhotoAlertViewFromViewController:(id)viewController;
+(void)showNoPhotoLibraryAccessAlertViewFromViewController:(id)viewController;
+(id)resizedImageForSending:(id)sending;
+(void)saveImage:(id)image completion:(id)completion;
+(void)saveImageInMediaInfo:(id)mediaInfo completion:(id)completion;
+(void)saveMediaAtPath:(id)path completion:(id)completion;
+(BOOL)shouldSaveMediaAtPathAsVideo:(id)pathAsVideo;
+(void)processNextSaveTaskInQueue:(id)queue;
+(void)beginProcessingSaveQueueIfNeeded;
+(void)enqueueSavingMediaToCameraRollAtPath:(id)path completion:(id)completion;
+(void)storePathsOfEnqueuedMediaItems;
+(void)endDeferringSavingMediaToCameraRoll;
+(void)beginDeferringSavingMediaToCameraRoll;
+(void)loadBestEditedImageForAssetURL:(id)assetURL completion:(id)completion;
+(void)creationDateForAssetURL:(id)assetURL completion:(id)completion;
+(void)loadSendableImageForAssetURL:(id)assetURL completion:(id)completion;
+(void)loadFullScreenImageForAssetURL:(id)assetURL completion:(id)completion;
+(void)fetchAllAssetsGroupsForMediaTypes:(unsigned)mediaTypes completion:(id)completion;
+(void)checkPhotosPermissionWithCompletionHandler:(id)completionHandler;
+(void)assetsGroupForURL:(id)url completion:(id)completion;
+(void)assetForURL:(id)url completion:(id)completion;
+(id)assetsFilterForMediaType:(unsigned)mediaType;
+(BOOL)authorizationGranted;
+(id)sharedAssetsLibrary;
+(void)recoverUnsavedMediaIfNeeded;
+(void)initialize;
@end

