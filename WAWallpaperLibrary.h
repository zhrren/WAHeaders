/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "WAUpgradeCallback.h"
#import </libobjc.A.h>

@class NSString, NSCache, NSArray;

__attribute__((visibility("hidden")))
@interface WAWallpaperLibrary : NSObject <WAUpgradeCallback> {
	NSArray* _imagePaths;
	NSCache* _fullsizeImages;
	NSCache* _thumbnails;
	NSArray* _solidColors;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) NSArray* solidColors;
+(void)migrateWallpaper;
+(void)upgradeWallpaperSettingsOnNewInstall:(BOOL)install;
+(void)wa_didUpgradeFrom:(id)from to:(id)to;
+(id)chatBackgroundColor;
+(void)setSolidChatBackgroundColor:(id)color;
+(void)setCustomWallpaperImage:(id)image;
+(void)setStockWallpaperWithFilename:(id)filename;
+(void)restoreDefaultWallpaper;
+(void)deleteCustomChatBackgroundImage;
+(id)chatWallpaperImage;
+(id)stockWallpaperWithFilename:(id)filename;
+(id)fullPathToCustomWallpaperImage;
+(CGSize)preferredDisplaySizeInPixelsForImageSize:(CGSize)imageSize inPortraitOrientation:(BOOL)portraitOrientation;
+(CGSize)thumbnailSizeLandscape;
+(CGSize)thumbnailSizePortrait;
+(float)thumbnailSpacing;
+(float)thumbnailSideMargin;
+(id)sharedLibrary;
-(void).cxx_destruct;
-(void)fetchFullsizeImageAtIndex:(unsigned)index completion:(id)completion;
-(void)fetchThumbnailForImageAtIndex:(unsigned)index completion:(id)completion;
-(id)imageAtIndex:(unsigned)index;
-(id)filenameForImageAtIndex:(unsigned)index;
-(unsigned)numberOfItems;
-(id)init;
@end

