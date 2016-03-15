/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAMediaScrollViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WANavigationControllerPopFromAnimating.h"
#import "WhatsApp-Structs.h"
#import "WAImageToImageTransitioning.h"
#import "WAImageToImagePanPopGestureRecognizerDelegate.h"
#import "WAViewController.h"
#import "UINavigationControllerDelegate.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"

@class UILabel, UIActivityIndicatorView, NSString, UIScrollView, NSMutableSet, UIToolbar, WAMediaManager, UIView, WAMessage, UINavigationController, UIBarButtonItem, WAMediaCaptionView, WAImageToImagePanPopGestureRecognizer, NSTimer;

__attribute__((visibility("hidden")))
@interface WALegacyMediaViewController : WAViewController <UIScrollViewDelegate, UINavigationControllerDelegate, ABPeoplePickerNavigationControllerDelegate, WAMediaScrollViewDelegate, WAImageToImageTransitioning, WAImageToImagePanPopGestureRecognizerDelegate, WANavigationControllerPopFromAnimating> {
	int _currentPageIndex;
	WAMediaManager* _mediaManager;
	NSMutableSet* _recycledPages;
	NSMutableSet* _visiblePages;
	BOOL _suppressRelayoutInScrollViewDidScroll;
	BOOL _tiling;
	UINavigationController* _lastNavigationController;
	NSTimer* _hideBarsTimer;
	BOOL _shouldAutoPlay;
	BOOL _shouldResumePlayback;
	BOOL _fullScreenMode;
	float _lastStatusBarHeight;
	UIBarButtonItem* _showAllButton;
	UIBarButtonItem* _actionButton;
	UIBarButtonItem* _trashButton;
	UIBarButtonItem* _playButton;
	UIBarButtonItem* _pauseButton;
	UIBarButtonItem* _previousButton;
	UIBarButtonItem* _nextButton;
	NSTimer* _holdingTimer;
	BOOL _holding;
	BOOL _mediaManagerUpdateInProgress;
	WAMessage* _currentMessage;
	BOOL _reloadCurrentMessageOnAppear;
	UIView* _busyBackgroundView;
	UIActivityIndicatorView* _busySpinner;
	WAMediaCaptionView* _captionView;
	WAImageToImagePanPopGestureRecognizer* _panPopGesture;
	UIScrollView* _pagingScrollView;
	UIToolbar* _toolbar;
	UIView* _viewMediaInfo;
	UILabel* _labelMediaInfo;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UILabel* labelMediaInfo;
@property(retain, nonatomic) UIView* viewMediaInfo;
@property(retain, nonatomic) UIToolbar* toolbar;
@property(retain, nonatomic) UIScrollView* pagingScrollView;
@property(assign, nonatomic) int currentPageIndex;
@property(retain, nonatomic) WAMediaManager* mediaManager;
-(void).cxx_destruct;
-(void)applicationWillPresentCallScreen:(id)application;
-(void)showMissingVideoErrorWithTryingToForward:(BOOL)forward;
-(void)gestureRecognizerWillFinishManagingInteractivePopTransition:(id)gestureRecognizer;
-(void)gestureRecognizerDidBeginManagingInteractivePopTransition:(id)gestureRecognizer;
-(void)gestureRecognizerWillBeginManagingInteractivePopTransition:(id)gestureRecognizer;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)finishTransitionWithView:(id)view context:(id)context;
-(id)nonTransitioningContainerView;
-(id)viewForTransitionAnimationWithContext:(id)context;
-(void)prepareForTransitionWithContext:(id)context;
-(BOOL)shouldUseImageToImageTransitionForOperation:(int)operation fromViewController:(id)viewController toViewController:(id)viewController3 context:(id)context;
-(void)wa_applicationWillEnterForeground;
-(void)wa_applicationDidEnterBackground;
-(void)setCurrentPageIndex:(int)index scrollToPage:(BOOL)page;
-(void)refreshInterfaceOnPageChange;
-(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier;
-(void)peoplePickerNavigationController:(id)controller didSelectPerson:(void*)person;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person;
-(void)assignImage:(id)image toContactID:(int)contactID;
-(void)presentMoveAndScaleViewControllerForPerson:(void*)person;
-(void)assignImageToContact;
-(void)saveCurrentMedia;
-(BOOL)isMediaScrollViewInFullScreenMode:(id)fullScreenMode;
-(void)mediaScrollViewDidEndZooming:(id)mediaScrollView;
-(void)mediaScrollViewWillBeginZooming:(id)mediaScrollView;
-(void)mediaScrollViewWillBeginDragging:(id)mediaScrollView;
-(void)mediaScrollViewWillBeginZoomBounceAnimation:(id)mediaScrollView;
-(void)mediaScrollViewDidScroll:(id)mediaScrollView;
-(void)mediaScrollViewDidZoom:(id)mediaScrollView;
-(void)updateImageRectOfCaptionViewForMediaScrollView:(id)mediaScrollView;
-(void)mediaScrollViewDidEndScrubbing:(id)mediaScrollView;
-(void)mediaScrollViewDidBeginScrubbing:(id)mediaScrollView;
-(UIEdgeInsets)mediaScrollViewLayoutInset:(id)inset;
-(BOOL)mediaScrollViewCanShowErrorAlertView:(id)view;
-(void)mediaScrollViewWantsFullscreenTimerInvalidated:(id)invalidated;
-(void)mediaScrollViewDidFinishLongPress:(id)mediaScrollView;
-(void)mediaScrollViewDidReceiveSingleTap:(id)mediaScrollView;
-(void)mediaScrollViewPlaybackDidFinish:(id)mediaScrollViewPlayback;
-(BOOL)mediaScrollView:(id)view handleEncounteredError:(id)error;
-(void)mediaScrollViewPlaybackStateDidChange:(id)mediaScrollViewPlaybackState;
-(void)mediaScrollViewLoadStateDidChange:(id)mediaScrollViewLoadState;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)updateCaptionView;
-(void)relayoutCaptionView;
-(void)wa_fontSizeDidChange;
-(id)previewActionItems;
-(void)didReceiveMemoryWarning;
-(void)viewWillTransitionToSize:(CGSize)view withTransitionCoordinator:(id)transitionCoordinator;
-(id)rotatingFooterView;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)shouldAutorotate;
-(void)deviceOrientationDidChange:(id)deviceOrientation;
-(void)willMoveToParentViewController:(id)parentViewController;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)deleteCurrentMedia:(id)media;
-(void)showAllMedia:(id)media;
-(void)navigateToNextPage:(id)nextPage;
-(void)beginSeekingForward:(id)forward;
-(void)handleNextButtonTouchDown:(id)down;
-(void)handleNextButtonTouchUp:(id)up;
-(void)navigateToPreviousPage:(id)previousPage;
-(void)beginSeekingBackward:(id)backward;
-(void)handlePreviousButtonTouchDown:(id)down;
-(void)handlePreviousButtonTouchUp:(id)up;
-(void)showMediaActions:(id)actions;
-(void)togglePlayPause:(id)pause;
-(void)reallyDeleteCurrentMedia;
-(void)tilePages;
-(void)configurePage:(id)page forIndex:(unsigned)index;
-(id)pageForIndex:(unsigned)index;
-(BOOL)isDisplayingPageForIndex:(unsigned)index;
-(void)recyclePage:(id)page;
-(id)dequeueRecycledPage;
-(void)shareMediaExternally;
-(void)forwardMediaViaWhatsAppToContactInfo:(id)contactInfo;
-(void)showPersonPickerForMediaForwardViaWhatsApp;
-(void)setProfilePhoto;
-(void)assignCurrentImageToGroup;
-(void)setSpinnerHidden:(BOOL)hidden;
-(void)hideBarsTimer:(id)timer;
-(void)cancelHideBarsTimer;
-(void)startHideBarsTimer;
-(int)preferredStatusBarStyle;
-(void)setFullScreenMode:(BOOL)mode animated:(BOOL)animated;
-(void)setFullScreenMode:(BOOL)mode;
-(BOOL)fullScreenModeAllowed;
-(void)updateToolbar;
-(void)updateInterface;
-(void)reloadPagingScrollView;
-(float)topLayoutEdge;
-(CGRect)frameForPageAtIndex:(unsigned)index;
-(CGRect)frameForPagingScrollView;
-(void)mediaManagerDidChangeContent:(id)mediaManager;
-(void)mediaManagerWillChangeContent:(id)mediaManager;
-(void)reloadMediaViewer;
-(id)uniqueIdentifier;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(id)popFromAnimationIdentifier;
-(BOOL)usesScreenEdgePanGestureRecognizerForCustomPopTransition;
@end

