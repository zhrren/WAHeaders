/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <UIKit/UICollectionViewFlowLayout.h>

@class WAMediaBrowserCollectionViewCell, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _WAMediaBrowserFlowLayout : UICollectionViewFlowLayout {
	NSMutableSet* _indexPathsToDelete;
	NSMutableSet* _indexPathsToInsert;
	WAMediaBrowserCollectionViewCell* _visibleCell;
}
+(Class)layoutAttributesClass;
-(void).cxx_destruct;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)boundsChange;
-(id)layoutAttributesForElementsInRect:(CGRect)rect;
-(id)layoutAttributesForItemAtIndexPath:(id)indexPath;
-(void)finalizeCollectionViewUpdates;
-(void)prepareForCollectionViewUpdates:(id)collectionViewUpdates;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)indexPath;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)indexPath;
-(void)finalizeAnimatedBoundsChange;
-(void)prepareForAnimatedBoundsChange:(CGRect)animatedBoundsChange;
-(id)init;
@end

