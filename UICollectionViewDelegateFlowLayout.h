/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "UICollectionViewDelegate.h"


@protocol UICollectionViewDelegateFlowLayout <UICollectionViewDelegate>
@optional
-(CGSize)collectionView:(id)view layout:(id)layout referenceSizeForFooterInSection:(int)section;
-(CGSize)collectionView:(id)view layout:(id)layout referenceSizeForHeaderInSection:(int)section;
-(float)collectionView:(id)view layout:(id)layout minimumInteritemSpacingForSectionAtIndex:(int)index;
-(float)collectionView:(id)view layout:(id)layout minimumLineSpacingForSectionAtIndex:(int)index;
-(UIEdgeInsets)collectionView:(id)view layout:(id)layout insetForSectionAtIndex:(int)index;
-(CGSize)collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)indexPath;
@end

