/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UICollectionViewDataSource.h"
#import "WhatsApp-Structs.h"
#import </libobjc.A.h>

@class NSArray, NSString, PHAssetCollection, PHFetchResult, ALAssetsGroup, UIImage;

__attribute__((visibility("hidden")))
@interface WAAssetCollection : NSObject <UICollectionViewDataSource> {
	unsigned _mediaTypes;
	PHAssetCollection* _assetCollection;
	PHFetchResult* _fetchResult;
	ALAssetsGroup* _assetsGroup;
	BOOL _useReverseOrderForCollectionView;
	NSArray* _assets;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) PHFetchResult* fetchResult;
@property(assign, nonatomic) BOOL useReverseOrderForCollectionView;
@property(readonly, assign, nonatomic) NSArray* assets;
@property(readonly, assign, nonatomic) UIImage* posterImage;
@property(readonly, assign, nonatomic) id localIdentifier;
@property(readonly, assign, nonatomic) unsigned assetCount;
@property(readonly, assign, nonatomic) unsigned estimatedAssetCount;
@property(readonly, copy, nonatomic) NSString* localizedTitle;
+(id)sortedAssetCollectionsWithCollections:(id)collections;
+(void)fetchAllCollectionsForMediaTypes:(unsigned)mediaTypes completion:(id)completion;
+(void)fetchAllAssetsFromAssetsGroup:(id)assetsGroup completion:(id)completion;
-(void).cxx_destruct;
-(int)indexOfCollectionViewMediaPickerAsset:(id)collectionViewMediaPickerAsset;
-(id)collectionViewMediaPickerAssetAtIndex:(int)index;
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;
-(int)numberOfVideos;
-(int)numberOfPhotos;
-(BOOL)canQueryCountOfMediaType;
-(void)storeCountOfVideosInCameraRoll:(int)cameraRoll;
-(void)storeCountOfPhotosInCameraRoll:(int)cameraRoll;
-(void)stopCachingThumbnailsOfPixelSize:(CGSize)pixelSize inRange:(NSRange)range;
-(void)startCachingThumbnailsOfPixelSize:(CGSize)pixelSize inRange:(NSRange)range;
-(BOOL)updateWithChangeInstance:(id)changeInstance;
-(id)phAssetAtIndex:(unsigned)index;
-(void)fetchAssetsFromPhotosFrameworkWithCompletionHandler:(id)completionHandler;
-(void)fetchAssetsFromAssetsLibraryWithCompletionHandler:(id)completionHandler;
-(void)fetchAssetsWithCompletionHandler:(id)completionHandler;
-(void)refreshWithCompletionHandler:(id)completionHandler;
-(id)allAssetCollectionsFromMoments:(id)moments;
-(id)fetchResultsForAssetsWithMediaTypes:(unsigned)mediaTypes inCollection:(id)collection;
-(id)initWithAssetsGroup:(id)assetsGroup mediaTypes:(unsigned)types;
-(id)initWithAssetCollection:(id)assetCollection mediaTypes:(unsigned)types;
@end

