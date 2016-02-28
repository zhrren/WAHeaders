/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class UIImageView, UILabel;

@interface WAMediaPickerVideoAssetOverlayView : _ABAddressBookCopyArrayOfAllGroups
{
    UILabel *_durationLabel;
    UIImageView *_cameraIconImageView;
    UIImageView *_gradientView;
    unsigned int _iconType;
}

+ (float)preferredHeight;
+ (void)initialize;
- (unsigned int)iconType;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setIconType:(unsigned int)fp8;
- (void)setDuration:(double)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end
