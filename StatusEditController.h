/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WATableViewController.h"
#import "WhatsApp-Structs.h"
#import "UITextViewDelegate.h"

@class NSString, UITextView, UITableViewCell;
@protocol StatusEditControllerDelegate;

__attribute__((visibility("hidden")))
@interface StatusEditController : WATableViewController <UITextViewDelegate> {
	float _keyboardHeight;
	UITableViewCell* _textViewCell;
	UITextView* _textView;
	BOOL _editingMode;
	id<StatusEditControllerDelegate> _delegate;
	NSString* _preloadedStatusText;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL editingMode;
@property(retain, nonatomic) NSString* preloadedStatusText;
@property(assign, nonatomic) __weak id<StatusEditControllerDelegate> delegate;
-(void).cxx_destruct;
-(void)keyboardWillShow:(id)keyboard;
-(void)viewDidLayoutSubviews;
-(void)fixContentOffset;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)textViewDidChange:(id)textView;
-(void)textViewDidBeginEditing:(id)textView;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)saveAction:(id)action;
-(void)cancelAction:(id)action;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)updateNavigationBar;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate;
-(id)init;
@end

