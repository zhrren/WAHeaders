/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class UIImageView, UIView, WAMediaPickerVideoAssetOverlayView;

@interface WAMediaCollectionViewCell : _ABAddressBookCopyArrayOfAllGroups
{
    UIImageView *_imageView;
    UIView *_checkmarkBackgroundView;
    UIImageView *_checkmarkImageView;
    UIView *_dimmingView;
    WAMediaPickerVideoAssetOverlayView *_durationOverlay;
    unsigned int _cellState;
}

- (unsigned int)cellState;
- (id)imageView;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)baseAccessibilityValue;
- (BOOL)isAccessibilityElement;
- (void)didMoveToWindow;
- (void)cancelThumbnailLoading;
- (void)prepareForReuse;
- (void)setMediaDuration:(int)fp8 mediaIconType:(unsigned int)fp12;
- (BOOL)isParticipatingInInteractiveTransition;
- (void)setCellState:(unsigned int)fp8;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)fp8;

@end

