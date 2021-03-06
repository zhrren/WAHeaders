/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAContactsSearchControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "WhatsApp-Structs.h"
#import "WAViewController.h"
#import "UINavigationControllerDelegate.h"
#import "PeopleMultiPickerNavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class UITableView, UILabel, NSString, WAContactsSearchController, UITextField, UIView, UIButton, NSArray, NSMutableArray;
@protocol WARecipientsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WARecipientsViewController : WAViewController <PeopleMultiPickerNavigationControllerDelegate, UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, WAContactsSearchControllerDelegate> {
	WAContactsSearchController* _searchController;
	NSArray* _searchResults;
	NSMutableArray* _selectedContacts;
	NSMutableArray* _selectedJIDs;
	UIButton* _addContactVoiceOverButton;
	float _keyboardHeight;
	BOOL _keyboardActive;
	unsigned _maxContacts;
	unsigned _minContacts;
	unsigned _mode;
	id<WARecipientsViewControllerDelegate> _delegate;
	UIButton* _buttonAddContacts;
	UIView* _viewContactName;
	UITextField* _textFieldContactName;
	UIView* _bottomBorder;
	UIView* _viewContacts;
	UITableView* _tableViewContacts;
	UILabel* _labelHelperText;
	UIView* _viewSearchResults;
	UITableView* _tableViewSearchResults;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UITableView* tableViewSearchResults;
@property(retain, nonatomic) UIView* viewSearchResults;
@property(retain, nonatomic) UILabel* labelHelperText;
@property(retain, nonatomic) UITableView* tableViewContacts;
@property(retain, nonatomic) UIView* viewContacts;
@property(retain, nonatomic) UIView* bottomBorder;
@property(retain, nonatomic) UITextField* textFieldContactName;
@property(retain, nonatomic) UIView* viewContactName;
@property(retain, nonatomic) UIButton* buttonAddContacts;
@property(assign, nonatomic) __weak id<WARecipientsViewControllerDelegate> delegate;
@property(readonly, assign, nonatomic) NSArray* selectedContacts;
@property(readonly, assign, nonatomic) unsigned mode;
-(void).cxx_destruct;
-(void)contactsSearchControllerDelegateDidInvalidateSearchResults:(id)contactsSearchControllerDelegate;
-(void)peopleMultiPickerNavigationControllerDidCancel:(id)peopleMultiPickerNavigationController;
-(void)peopleMultiPickerNavigationController:(id)controller didSelectContacts:(id)contacts;
-(void)keyboardWillHide:(id)keyboard;
-(void)keyboardWillShow:(id)keyboard;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)tableView:(id)view accessoryButtonTappedForRowWithIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForFooterInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)wa_fontSizeDidChange;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)updateVoiceOverElements;
-(void)accessibilityVoiceOverStatusChanged:(id)changed;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(void)recipientsTableTapped:(id)tapped;
-(void)deleteRowAction:(id)action withEvent:(id)event;
-(void)contactNameEditedAction:(id)action;
-(void)addContactsAction:(id)action;
-(void)cancelAction:(id)action;
-(void)createAction:(id)action;
-(void)unblockContact:(id)contact;
-(void)searchContactsWithMask:(id)mask;
-(void)setupTableViews;
-(void)layoutViewsWithAnimationDuration:(double)animationDuration;
-(void)updateButtonState;
-(void)setInitiallySelectedGroupMembers:(id)members;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate mode:(unsigned)mode;
@end

