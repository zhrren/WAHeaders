/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "UIScrollViewDelegate-Protocol.h"

@class UIImageView;

@interface _WAProfilePictureScrollView : _ABAddressBookCopyArrayOfAllGroups <UIScrollViewDelegate>
{
    UIImageView *_imageView;
}

- (id)imageView;
- (void).cxx_destruct;
- (void)scrollViewDidZoom:(id)fp8;
- (id)viewForZoomingInScrollView:(id)fp8;
- (void)recenterImageView;
- (void)setImageView:(id)fp8;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)fp8;

@end

