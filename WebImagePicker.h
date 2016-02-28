/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "ImageSearchControllerDelegate-Protocol.h"
#import "WAPhotoMoveAndScaleViewControllerDelegate-Protocol.h"

@class ImageSearchController, WAHTTPFetcher, WAPhotoMoveAndScaleViewController;

@interface WebImagePicker : _ABAddressBookCopyArrayOfAllGroups <ImageSearchControllerDelegate, WAPhotoMoveAndScaleViewControllerDelegate>
{
    ImageSearchController *_imageSearchController;
    id <WebImagePickerDelegate> _pickerDelegate;
    WAHTTPFetcher *_httpFetcher;
    WAPhotoMoveAndScaleViewController *_moveAndScaleViewController;
}

- (void).cxx_destruct;
- (void)downloadImageAtURL:(id)fp8;
- (void)photoMoveAndScaleViewController:(id)fp8 didFinishWithImage:(id)fp12;
- (id)popViewControllerAnimated:(BOOL)fp8;
- (void)imageSearchControllerDidCancel:(id)fp8;
- (void)imageSearchController:(id)fp8 didSelectImageWithURL:(id)fp12;
- (void)setPreloadedSearchText:(id)fp8;
- (id)preloadedSearchText;
- (id)initWithPickerDelegate:(id)fp8;

@end
