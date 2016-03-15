/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAMultiSendPreviewViewControllerDelegate.h"
#import "WAVideoPreviewViewControllerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import </libobjc.A.h>
#import "WAMediaPickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString, UINavigationController;
@protocol WAMultiSendMediaPickerControllerDelegate;

__attribute__((visibility("hidden")))
@interface WAMultiSendMediaPickerController : NSObject <WAMediaPickerControllerDelegate, UINavigationControllerDelegate, WAMultiSendPreviewViewControllerDelegate, UIImagePickerControllerDelegate, WAVideoPreviewViewControllerDelegate> {
	double _imagePickerDelayStartTime;
	UINavigationController* _activeNavigationController;
	id<WAMultiSendMediaPickerControllerDelegate> _delegate;
	unsigned _pickerMode;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) unsigned pickerMode;
@property(assign, nonatomic) __weak id<WAMultiSendMediaPickerControllerDelegate> delegate;
-(void).cxx_destruct;
-(void)videoPreviewViewControllerDidCancel:(id)videoPreviewViewController;
-(void)videoPreviewViewController:(id)controller didFailWithError:(id)error;
-(void)videoPreviewViewControllerDidConfirmVideo:(id)videoPreviewViewController;
-(void)nativePickerDidCancel;
-(void)showPreviewViewControllerWithMediaInfo:(id)mediaInfo onNavigationController:(id)controller;
-(void)showPreviewViewControllerUsingInterstitialWithMediaInfo:(id)mediaInfo onNavigationController:(id)controller;
-(void)imagePickerController:(id)controller didFinishTakingPhotoWithInfo:(id)info;
-(void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)cancel;
-(void)multiSendPreviewViewControllerDidRequestRetakePhoto:(id)multiSendPreviewViewController;
-(void)multiSendPreviewViewControllerDidCancel:(id)multiSendPreviewViewController;
-(void)multiSendPreviewViewController:(id)controller didConfirmItems:(id)items;
-(void)didSelectMediaItem:(id)item inMediaPickerController:(id)mediaPickerController;
-(void)mediaPickerControllerDidFinishPresenting:(id)mediaPickerController;
-(void)mediaPickerController:(id)controller didFinishWithSelectedItems:(id)selectedItems;
-(void)presentCustomPickerFromViewController:(id)viewController;
-(void)presentCameraFromViewController:(id)viewController;
-(void)presentFromViewController:(id)viewController;
-(void)applicationDidEnterBackground:(id)application;
-(void)dealloc;
-(id)initWithPickerMode:(unsigned)pickerMode;
@end

