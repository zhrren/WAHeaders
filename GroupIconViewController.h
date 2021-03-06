/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WASinglePhotoPickerControllerDelegate.h"
#import "WAViewController.h"
#import "WebImagePickerDelegate.h"
#import "WANavigationControllerPopFromAnimating.h"
#import "WAImageToImageTransitioning.h"
#import "WAImageToImagePanPopGestureRecognizerDelegate.h"

@class WAActivityLabel, UIBarButtonItem, WebImagePicker, UIToolbar, NSString, _WAProfilePictureScrollView, WAImageToImagePanPopGestureRecognizer, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface GroupIconViewController : WAViewController <WASinglePhotoPickerControllerDelegate, WebImagePickerDelegate, WAImageToImageTransitioning, WAImageToImagePanPopGestureRecognizerDelegate, WANavigationControllerPopFromAnimating> {
	BOOL _ignoreNextProfilePictureUpdateNotification;
	BOOL _displayingPlaceholderImage;
	BOOL _displayingFullsizeImage;
	WAActivityLabel* _activityLabel;
	_WAProfilePictureScrollView* _scrollView;
	UIActivityIndicatorView* _activityIndicator;
	WebImagePicker* _webImagePicker;
	UIToolbar* _toolbar;
	UIBarButtonItem* _bbItemEditPicture;
	UIBarButtonItem* _bbItemPictureAction;
	WAImageToImagePanPopGestureRecognizer* _panPopGesture;
	BOOL _addressBookPictureAllowed;
	BOOL _updating;
	NSString* _jid;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) BOOL updating;
@property(assign, nonatomic) BOOL addressBookPictureAllowed;
@property(copy, nonatomic) NSString* jid;
+(id)controllerWithJID:(id)jid;
-(void).cxx_destruct;
-(id)previewActionItems;
-(void)profilePictureChanged:(id)changed;
-(void)wa_applicationDidEnterBackground;
-(void)webImagePickerDidCancel:(id)webImagePicker;
-(void)webImagePicker:(id)picker didSelectImage:(id)image;
-(void)singlePhotoPickerControllerDidCancel:(id)singlePhotoPickerController;
-(void)singlePhotoPickerController:(id)controller didFinishWithImage:(id)image;
-(void)gestureRecognizerWillFinishManagingInteractivePopTransition:(id)gestureRecognizer;
-(void)gestureRecognizerDidBeginManagingInteractivePopTransition:(id)gestureRecognizer;
-(void)gestureRecognizerWillBeginManagingInteractivePopTransition:(id)gestureRecognizer;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(BOOL)usesScreenEdgePanGestureRecognizerForCustomPopTransition;
-(id)popFromAnimationIdentifier;
-(void)finishTransitionWithView:(id)view context:(id)context;
-(id)viewForTransitionAnimationWithContext:(id)context;
-(void)prepareForTransitionWithContext:(id)context;
-(BOOL)shouldUseImageToImageTransitionForOperation:(int)operation fromViewController:(id)viewController toViewController:(id)viewController3 context:(id)context;
-(id)rotatingFooterView;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)loadView;
-(void)pictureAction:(id)action;
-(void)editAction:(id)action;
-(void)copyImageToPasteboard;
-(void)saveImageToCameraRoll;
-(void)showImageSearchController;
-(void)reallyShowImagePickerForSourceType:(int)sourceType;
-(void)showImagePickerForSourceType:(int)sourceType;
-(void)deletePicture:(BOOL)picture;
-(void)handleDoubleTapGesture:(id)gesture;
-(void)configureScrollViewForZooming;
-(void)relayout;
-(void)reloadPicture:(BOOL)picture;
-(void)handleReceivedFullsizeProfilePicture:(id)picture;
-(void)hideActivityIndicator;
-(void)showActivityIndicator;
-(void)hideActivity;
-(void)showActivity:(id)activity;
-(void)updateNavigationTitle;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

