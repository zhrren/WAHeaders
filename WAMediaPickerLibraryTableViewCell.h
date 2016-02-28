/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class UILabel;

@interface WAMediaPickerLibraryTableViewCell : _ABAddressBookCopyArrayOfAllGroups
{
    BOOL _bottomBorderHidden;
    UILabel *_assetCountLabel;
}

+ (int)preferredSeparatorStyle;
+ (float)preferredHeight;
+ (id)cellWithReuseIdentifier:(id)fp8;
- (id)assetCountLabel;
- (void)setBottomBorderHidden:(BOOL)fp8;
- (BOOL)isBottomBorderHidden;
- (void).cxx_destruct;
- (void)updateWithAssetCount:(unsigned int)fp8;
- (id)assetCountLabelTextForCount:(unsigned int)fp8;
- (void)configureWithAssetCollection:(id)fp8;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end
