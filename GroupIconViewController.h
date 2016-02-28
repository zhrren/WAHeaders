/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAViewController.h"

#import "WAImageToImagePanPopGestureRecognizerDelegate-Protocol.h"
#import "WAImageToImageTransitioning-Protocol.h"
#import "WANavigationControllerPopFromAnimating-Protocol.h"
#import "WASinglePhotoPickerControllerDelegate-Protocol.h"
#import "WebImagePickerDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIBarButtonItem, UIToolbar, WAActivityLabel, WAImageToImagePanPopGestureRecognizer, WebImagePicker, _WAProfilePictureScrollView;

@interface GroupIconViewController : WAViewController <WASinglePhotoPickerControllerDelegate, WebImagePickerDelegate, WAImageToImageTransitioning, WAImageToImagePanPopGestureRecognizerDelegate, WANavigationControllerPopFromAnimating>
{
    BOOL _ignoreNextProfilePictureUpdateNotification;
    BOOL _displayingPlaceholderImage;
    BOOL _displayingFullsizeImage;
    WAActivityLabel *_activityLabel;
    _WAProfilePictureScrollView *_scrollView;
    UIActivityIndicatorView *_activityIndicator;
    WebImagePicker *_webImagePicker;
    UIToolbar *_toolbar;
    UIBarButtonItem *_bbItemEditPicture;
    UIBarButtonItem *_bbItemPictureAction;
    WAImageToImagePanPopGestureRecognizer *_panPopGesture;
    BOOL _addressBookPictureAllowed;
    BOOL _updating;
    NSString *_jid;
}

+ (id)controllerWithJID:(id)fp8;
- (BOOL)updating;
- (void)setAddressBookPictureAllowed:(BOOL)fp8;
- (BOOL)addressBookPictureAllowed;
- (void)setJid:(id)fp8;
- (id)jid;
- (void).cxx_destruct;
- (id)previewActionItems;
- (void)profilePictureUpdated:(id)fp8;
- (void)wa_applicationDidEnterBackground;
- (void)webImagePickerDidCancel:(id)fp8;
- (void)webImagePicker:(id)fp8 didSelectImage:(id)fp12;
- (void)singlePhotoPickerControllerDidCancel:(id)fp8;
- (void)singlePhotoPickerController:(id)fp8 didFinishWithImage:(id)fp12;
- (void)gestureRecognizerWillFinishManagingInteractivePopTransition:(id)fp8;
- (void)gestureRecognizerDidBeginManagingInteractivePopTransition:(id)fp8;
- (void)gestureRecognizerWillBeginManagingInteractivePopTransition:(id)fp8;
- (BOOL)gestureRecognizerShouldBegin:(id)fp8;
- (BOOL)usesScreenEdgePanGestureRecognizerForCustomPopTransition;
- (id)popFromAnimationIdentifier;
- (void)finishTransitionWithView:(id)fp8 context:(id)fp12;
- (id)viewForTransitionAnimationWithContext:(id)fp8;
- (void)prepareForTransitionWithContext:(id)fp8;
- (BOOL)shouldUseImageToImageTransitionForOperation:(int)fp8 fromViewController:(id)fp12 toViewController:(id)fp16 context:(id)fp20;
- (id)rotatingFooterView;
- (void)willRotateToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (void)loadView;
- (void)pictureAction:(id)fp8;
- (void)editAction:(id)fp8;
- (void)copyImageToPasteboard;
- (void)saveImageToCameraRoll;
- (void)showImageSearchController;
- (void)reallyShowImagePickerForSourceType:(int)fp8;
- (void)showImagePickerForSourceType:(int)fp8;
- (void)deletePicture:(BOOL)fp8;
- (void)handleDoubleTapGesture:(id)fp8;
- (void)configureScrollViewForZooming;
- (void)relayout;
- (void)reloadPicture:(BOOL)fp8;
- (void)handleReceivedFullsizeProfilePicture:(id)fp8;
- (void)hideActivityIndicator;
- (void)showActivityIndicator;
- (void)hideActivity;
- (void)showActivity:(id)fp8;
- (void)updateNavigationTitle;
- (void)dealloc;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

