/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAMultiSendPreviewViewControllerDelegate.h"
#import "WAVideoPreviewViewControllerDelegate.h"
#import "WANavigationController.h"
#import "WACameraViewControllerDelegate.h"

@class NSString;
@protocol WAMultiShotCameraControllerDelegate;

__attribute__((visibility("hidden")))
@interface WAMultiShotCameraController : WANavigationController <WACameraViewControllerDelegate, WAMultiSendPreviewViewControllerDelegate, WAVideoPreviewViewControllerDelegate> {
	BOOL _recipientUnknown;
	id<WAMultiShotCameraControllerDelegate> _cameraDelegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL recipientUnknown;
@property(assign, nonatomic) __weak id<WAMultiShotCameraControllerDelegate> cameraDelegate;
+(BOOL)isSupported;
-(void).cxx_destruct;
-(id)navigationController:(id)controller interactionControllerForAnimationController:(id)animationController;
-(id)navigationController:(id)controller animationControllerForOperation:(int)operation fromViewController:(id)viewController toViewController:(id)viewController4;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)videoPreviewViewControllerDidCancel:(id)videoPreviewViewController;
-(void)videoPreviewViewController:(id)controller didFailWithError:(id)error;
-(void)videoPreviewViewControllerDidConfirmVideo:(id)videoPreviewViewController;
-(void)didSelectVideoFromPhotoLibrary:(id)photoLibrary cancelSelectionHandler:(id)handler;
-(void)presentMultiSendPreviewForMediaPickerAsset:(id)mediaPickerAsset identifier:(id)identifier media:(id)media;
-(void)didSelectMediaFromPhotoLibrary:(id)photoLibrary cancelSelectionHandler:(id)handler;
-(void)multiSendPreviewViewControllerDidRequestRetakePhoto:(id)multiSendPreviewViewController;
-(void)multiSendPreviewViewControllerDidCancel:(id)multiSendPreviewViewController;
-(void)multiSendPreviewViewController:(id)controller didConfirmItems:(id)items;
-(void)cameraViewController:(id)controller didSelectMediaPickerAsset:(id)asset cancelSelectionHandler:(id)handler;
-(void)cameraViewController:(id)controller didFinishWithMediaItems:(id)mediaItems;
-(void)cameraViewControllerDidCancel:(id)cameraViewController;
-(id)initWithRootViewController:(id)rootViewController;
-(id)initWithCameraRollPicker:(BOOL)cameraRollPicker;
@end

