/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WARecipientsViewControllerDelegate.h"
#import "NSFetchedResultsControllerDelegate.h"
#import "WATableViewController.h"
#import "UIGestureRecognizerDelegate.h"
#import "WhatsApp-Structs.h"
#import "UITextFieldDelegate.h"

@class WAChatSession, _WAEditListNameTableViewCell, UITableViewCell, NSFetchedResultsController, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface WAListInfoViewController : WATableViewController <NSFetchedResultsControllerDelegate, WARecipientsViewControllerDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate> {
	NSFetchedResultsController* _fetchedResultsController;
	BOOL _chatStorageAvailable;
	UITableViewCell* _changeRecipientCell;
	_WAEditListNameTableViewCell* _editNameCell;
	NSMutableArray* _groupMembersToUpdate;
	BOOL _animateListChanges;
	WAChatSession* _list;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) unsigned fetchedResultsCount;
@property(retain, nonatomic) WAChatSession* list;
-(void).cxx_destruct;
-(void)wa_fontSizeDidChange;
-(void)chatStorageDidLoadDatabase:(id)chatStorage;
-(void)chatStorageWillUnloadDatabase:(id)chatStorage;
-(void)updateGroupMemberInfoForVisibleCells;
-(void)loadStatusMessagesOfGroupMembers:(id)groupMembers;
-(void)controllerDidChangeContent:(id)controller;
-(void)controller:(id)controller didChangeObject:(id)object atIndexPath:(id)indexPath forChangeType:(unsigned)changeType newIndexPath:(id)path;
-(void)controller:(id)controller didChangeSection:(id)section atIndex:(unsigned)index forChangeType:(unsigned)changeType;
-(void)controllerWillChangeContent:(id)controller;
-(void)setUpFetchRequest;
-(void)checkListEncryptionState;
-(void)recipientsControllerDidCancel:(id)recipientsController;
-(void)updateRecipientsWithContacts:(id)contacts;
-(void)recipientsController:(id)controller didFinishWithContacts:(id)contacts;
-(void)changeRecipients;
-(BOOL)showContactInfoForGroupMember:(id)groupMember;
-(void)textFieldDidEndEditing:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(void)updateGroupMemberAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)updateInterface;
-(void)tableViewTapped:(id)tapped;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)reloadAll;
-(void)dealloc;
-(id)initWithStyle:(int)style;
-(id)init;
@end

