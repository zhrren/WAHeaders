/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WAMediaPickerControllerDelegate-Protocol.h"
#import "WAMultiSendPreviewViewControllerDelegate-Protocol.h"
#import "WAVideoPreviewViewControllerDelegate-Protocol.h"

@class UINavigationController;

@interface WAMultiSendMediaPickerController : _ABAddressBookCopyArrayOfAllGroups <WAMediaPickerControllerDelegate, UINavigationControllerDelegate, WAMultiSendPreviewViewControllerDelegate, UIImagePickerControllerDelegate, WAVideoPreviewViewControllerDelegate>
{
    double _imagePickerDelayStartTime;
    UINavigationController *_activeNavigationController;
    id <WAMultiSendMediaPickerControllerDelegate> _delegate;
    unsigned int _pickerMode;
}

- (unsigned int)pickerMode;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)videoPreviewViewControllerDidCancel:(id)fp8;
- (void)videoPreviewViewController:(id)fp8 didFailWithError:(id)fp12;
- (void)videoPreviewViewControllerDidConfirmVideo:(id)fp8;
- (void)nativePickerDidCancel;
- (void)showPreviewViewControllerWithMediaInfo:(id)fp8 onNavigationController:(id)fp12;
- (void)showPreviewViewControllerUsingInterstitialWithMediaInfo:(id)fp8 onNavigationController:(id)fp12;
- (void)imagePickerController:(id)fp8 didFinishTakingPhotoWithInfo:(id)fp12;
- (void)imagePickerController:(id)fp8 didFinishPickingMediaWithInfo:(id)fp12;
- (void)navigationController:(id)fp8 didShowViewController:(id)fp12 animated:(BOOL)fp16;
- (void)cancel;
- (void)multiSendPreviewViewControllerDidRequestRetakePhoto:(id)fp8;
- (void)multiSendPreviewViewControllerDidCancel:(id)fp8;
- (void)multiSendPreviewViewController:(id)fp8 didConfirmItems:(id)fp12;
- (void)didSelectMediaItem:(id)fp8 inMediaPickerController:(id)fp12;
- (void)mediaPickerControllerDidFinishPresenting:(id)fp8;
- (void)mediaPickerController:(id)fp8 didFinishWithSelectedItems:(id)fp12;
- (void)presentCustomPickerFromViewController:(id)fp8;
- (void)presentCameraFromViewController:(id)fp8;
- (void)presentFromViewController:(id)fp8;
- (void)applicationDidEnterBackground:(id)fp8;
- (void)dealloc;
- (id)initWithPickerMode:(unsigned int)fp8;

@end

