/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "UITableViewDataSource.h"
#import "WARecipientsViewControllerDelegate.h"
#import "UITableViewDelegate.h"
#import "NSFetchedResultsControllerDelegate.h"
#import "WAViewController.h"

@class WAChatSession, UIView, NSFetchedResultsController, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface WAListsViewController : WAViewController <NSFetchedResultsControllerDelegate, WARecipientsViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
	NSFetchedResultsController* _fetchedResultsController;
	UIView* _emptyListView;
	UITableView* _tableView;
	BOOL _chatStorageAvailable;
	WAChatSession* _activeList;
	BOOL _isUpdatingTable;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) unsigned fetchedResultsCount;
-(void).cxx_destruct;
-(void)chatStorageDidLoadDatabase:(id)chatStorage;
-(void)chatStorageWillUnloadDatabase:(id)chatStorage;
-(void)recipientsController:(id)controller didFinishWithContacts:(id)contacts;
-(void)recipientsControllerDidCancel:(id)recipientsController;
-(void)createNewList:(id)list;
-(void)deleteExistingList:(id)list;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(void)controllerDidChangeContent:(id)controller;
-(void)controller:(id)controller didChangeObject:(id)object atIndexPath:(id)indexPath forChangeType:(unsigned)changeType newIndexPath:(id)path;
-(void)controller:(id)controller didChangeSection:(id)section atIndex:(unsigned)index forChangeType:(unsigned)changeType;
-(void)controllerWillChangeContent:(id)controller;
-(void)setUpFetchRequest;
-(void)tableView:(id)view accessoryButtonTappedForRowWithIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)navigateToList:(id)list animated:(BOOL)animated;
-(void)updateInterfaceWithAnimation:(BOOL)animation;
-(void)setUpEmptyListView;
-(void)setBackButtonHidden:(BOOL)hidden animated:(BOOL)animated;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)resetAllSeparatorInsets;
-(void)wa_fontSizeDidChange;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)loadView;
-(id)uniqueIdentifier;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(id)init;
@end

