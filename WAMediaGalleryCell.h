/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAMediaCollectionViewCell.h"

@class NSBlockOperation, NSManagedObjectID;
@protocol WAMediaGalleryCellMenuDelegate;

__attribute__((visibility("hidden")))
@interface WAMediaGalleryCell : WAMediaCollectionViewCell {
	NSBlockOperation* _thumbnailLoadingOp;
	NSManagedObjectID* _messageID;
	id<WAMediaGalleryCellMenuDelegate> _menuDelegate;
}
@property(assign, nonatomic) __weak id<WAMediaGalleryCellMenuDelegate> menuDelegate;
+(void)initialize;
-(void).cxx_destruct;
-(id)baseAccessibilityValue;
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
-(void)copyMessage:(id)message;
-(void)markMessageAsStarred:(id)starred;
-(id)thumbnailForMessage:(id)message;
-(void)loadThumbnailForMessage:(id)message;
-(void)setThumbnail:(id)thumbnail forMessage:(id)message;
@end

