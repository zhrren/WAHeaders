/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSDictionary, NSMutableArray;

@interface WAMediaGalleryFlowLayout : _ABAddressBookCopyArrayOfAllGroups
{
    NSDictionary *_layoutAttributesForDeletedItems;
    NSMutableArray *_deleteIndexPaths;
    NSMutableArray *_insertIndexPaths;
}

+ (Class)layoutAttributesClass;
- (void)setInsertIndexPaths:(id)fp8;
- (id)insertIndexPaths;
- (void)setDeleteIndexPaths:(id)fp8;
- (id)deleteIndexPaths;
- (void)setLayoutAttributesForDeletedItems:(id)fp8;
- (id)layoutAttributesForDeletedItems;
- (void).cxx_destruct;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)fp8;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)fp8;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)fp8;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)fp8;
- (id)layoutAttributesForElementsInRect:(struct CGRect)fp8;

@end
