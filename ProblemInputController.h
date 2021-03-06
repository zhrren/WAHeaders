/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"
#import "UITextViewDelegate.h"
#import "WhatsApp-Structs.h"
#import "WAImageAttachmentContainerViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "WAFAQBrowserViewControllerDelegate.h"
#import "WATableViewController.h"
#import "UINavigationControllerDelegate.h"

@class WAHTTPFetcher, NSString, WADoneWithSpinnerBarButtonItem, NSObject, UITextView, NSArray, WAImageAttachmentContainerView, UIBarButtonItem, UITableViewCell;
@protocol OS_dispatch_group, ProblemInputControllerDelegate;

__attribute__((visibility("hidden")))
@interface ProblemInputController : WATableViewController <WAImageAttachmentContainerViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIGestureRecognizerDelegate, WAFAQBrowserViewControllerDelegate, UITextViewDelegate> {
	UITableViewCell* _textViewCell;
	UITextView* _textView;
	WADoneWithSpinnerBarButtonItem* _doneButton;
	NSObject<OS_dispatch_group>* _logsGatheringDispatchGroup;
	NSString* _gzippedLogs;
	float _keyboardHeight;
	WAImageAttachmentContainerView* _imageAttachmentContainer;
	UIBarButtonItem* _dismissKeyboardBarButtonItem;
	UIBarButtonItem* _cancelBarButtonItem;
	BOOL _keyboardHidden;
	WAHTTPFetcher* _searchFetcher;
	NSArray* _imagesToSend;
	id<ProblemInputControllerDelegate> _delegate;
	NSString* _initialText;
	unsigned _numberOfFAQSearchResultsReturned;
	unsigned _numberOfFAQSearchResultsOpened;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) unsigned numberOfFAQSearchResultsOpened;
@property(readonly, assign, nonatomic) unsigned numberOfFAQSearchResultsReturned;
@property(copy, nonatomic) NSString* initialText;
@property(assign, nonatomic) __weak id<ProblemInputControllerDelegate> delegate;
-(void).cxx_destruct;
-(void)faqBrowserViewControllerShouldProceedToEmail:(id)faqBrowserViewController;
-(void)cancelPendingSearch;
-(void)searchFAQ:(id)faq checkpoint:(id)checkpoint completion:(id)completion;
-(void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(void)imagePickerControllerDidCancel:(id)imagePickerController;
-(void)imageAttachmentContainerViewDidDeleteImage:(id)imageAttachmentContainerView;
-(void)imageAttachmentContainerViewDidRequestAddImage:(id)imageAttachmentContainerView;
-(void)dismissKeyboard:(id)keyboard;
-(void)keyboardWillHide:(id)keyboard;
-(void)keyboardWillShow:(id)keyboard;
-(void)textViewDidChange:(id)textView;
-(void)textViewDidBeginEditing:(id)textView;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view titleForFooterInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)viewTapped:(id)tapped;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(void)wa_applicationDidEnterBackground;
-(void)wa_fontSizeDidChange;
-(void)viewDidLayoutSubviews;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)cancelAction:(id)action;
-(void)proceedToEmail;
-(void)doneAction:(id)action;
-(void)updateButtonState;
-(BOOL)userHasEnteredSufficientText;
-(void)dealloc;
-(id)initWithStyle:(int)style;
-(id)init;
@end

