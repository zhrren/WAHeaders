/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <UIKit/UICollectionViewFlowLayout.h>

@class NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface WAMediaGalleryFlowLayout : UICollectionViewFlowLayout {
	NSDictionary* _layoutAttributesForDeletedItems;
	NSMutableArray* _deleteIndexPaths;
	NSMutableArray* _insertIndexPaths;
}
@property(retain) NSMutableArray* insertIndexPaths;
@property(retain) NSMutableArray* deleteIndexPaths;
@property(retain, nonatomic) NSDictionary* layoutAttributesForDeletedItems;
+(Class)layoutAttributesClass;
-(void).cxx_destruct;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)boundsChange;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)indexPath;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)indexPath;
-(void)finalizeCollectionViewUpdates;
-(void)prepareForCollectionViewUpdates:(id)collectionViewUpdates;
-(id)layoutAttributesForElementsInRect:(CGRect)rect;
@end

