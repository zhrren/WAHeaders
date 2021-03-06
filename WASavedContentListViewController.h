/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSFetchedResultsControllerDelegate.h"
#import "WASearchResultsControllerDelegate.h"
#import "UISearchControllerDelegate.h"
#import "UISearchResultsUpdating.h"
#import "WhatsApp-Structs.h"
#import "_WASavedContentSearchResultsTableViewControllerConfigurationDelegate.h"
#import "UIViewControllerPreviewingDelegate.h"
#import "WASavedContentBrowserChildTableViewController.h"

@class UILabel, _WASavedContentSearchResultsTableViewController, NSString, NSCalendar, NSSet, NSDateFormatter, UISearchController, NSIndexPath, UIBarButtonItem, NSFetchedResultsController, WASearchResultsController;

__attribute__((visibility("hidden")))
@interface WASavedContentListViewController : WASavedContentBrowserChildTableViewController <UISearchControllerDelegate, UISearchResultsUpdating, WASearchResultsControllerDelegate, _WASavedContentSearchResultsTableViewControllerConfigurationDelegate, NSFetchedResultsControllerDelegate, UIViewControllerPreviewingDelegate> {
	NSCalendar* _calendar;
	int _currentMonth;
	int _currentYear;
	BOOL _needsReset;
	NSFetchedResultsController* _emptyResultsController;
	NSDateFormatter* _fullDateFormatter;
	NSDateFormatter* _monthOnlyDateFormatter;
	BOOL _isDatabaseLoaded;
	BOOL _isUpdatingTable;
	BOOL _needsUpdateFooter;
	BOOL _isInitialLayoutPass;
	UIBarButtonItem* _selectButton;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _forwardToolbarButton;
	UIBarButtonItem* _trashToolbarButton;
	UIBarButtonItem* _shareToolbarButton;
	UIBarButtonItem* _starToolbarButton;
	UIBarButtonItem* _unstarToolbarButton;
	NSIndexPath* _editingRowIndexPath;
	UILabel* _itemCountLabel;
	UISearchController* _searchController;
	_WASavedContentSearchResultsTableViewController* _searchResultsTableViewController;
	WASearchResultsController* _searchResultsController;
	NSSet* _chatJIDs;
	NSFetchedResultsController* _resultsController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) NSFetchedResultsController* resultsController;
@property(copy, nonatomic) NSSet* chatJIDs;
+(id)localizedStringForItemCount:(int)itemCount;
+(id)tableViewCellNibName;
+(float)tableViewCellPreferredHeight;
-(void).cxx_destruct;
-(id)itemPreviewViewControllerForItem:(id)item location:(CGPoint)location inTableViewCell:(id)tableViewCell tableView:(id)view returningSourceRect:(CGRect*)rect;
-(void)presentItemOnSelection:(id)selection;
-(id)itemsInMessage:(id)message;
-(id)messageForItem:(id)item;
-(void)configureCell:(id)cell withItem:(id)item searchTerm:(id)term;
-(void)prepareTableViewCellForFirstUse:(id)firstUse;
-(id)newSearchResultsController;
-(id)newFetchedResultsController;
-(void)updateSearchResultsForSearchController:(id)searchController;
-(void)didDismissSearchController:(id)controller;
-(void)willDismissSearchController:(id)controller;
-(void)didPresentSearchController:(id)controller;
-(void)willPresentSearchController:(id)controller;
-(void)reloadSearchResultItems;
-(void)searchResultsControllerDidChangeContent:(id)searchResultsController;
-(void)searchResultsControllerDidUpdateContent:(id)searchResultsController;
-(void)searchResultsController:(id)controller didDeleteSections:(id)sections;
-(void)searchResultsController:(id)controller didInsertSections:(id)sections;
-(void)searchResultsController:(id)controller didDeleteRowsAtIndexPaths:(id)indexPaths;
-(void)searchResultsController:(id)controller didInsertRowsAtIndexPaths:(id)indexPaths;
-(void)searchResultsControllerWillUpdateContent:(id)searchResultsController;
-(BOOL)searchResultsControllerShouldUpdateContent:(id)searchResultsController;
-(id)previewActionsForMessage:(id)message;
-(CGRect)sourceRectForChatPreviewFromTableViewCell:(id)tableViewCell inTableView:(id)tableView;
-(id)chatPreviewViewControllerForItem:(id)item location:(CGPoint)location inTableViewCell:(id)tableViewCell tableView:(id)view returningSourceRect:(CGRect*)rect;
-(void)previewingContext:(id)context commitViewController:(id)controller;
-(id)previewingContext:(id)context viewControllerForLocation:(CGPoint)location;
-(void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didDeselectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)savedContentSearchResultsTableViewController:(id)controller configureTableViewCell:(id)cell forItem:(id)item searchTerm:(id)term;
-(void)savedContentSearchResultsTableViewControllerConfigureTableView:(id)view;
-(void)showChatForItem:(id)item;
-(id)chatViewControllerForItem:(id)item;
-(void)deselectAllRowsForMessage:(id)message;
-(void)selectAllRowsForMessage:(id)message;
-(id)itemAtIndexPath:(id)indexPath;
-(id)indexPathForItem:(id)item;
-(void)controllerDidChangeContent:(id)controller;
-(void)controller:(id)controller didChangeObject:(id)object atIndexPath:(id)indexPath forChangeType:(unsigned)changeType newIndexPath:(id)path;
-(void)controller:(id)controller didChangeSection:(id)section atIndex:(unsigned)index forChangeType:(unsigned)changeType;
-(void)controllerWillChangeContent:(id)controller;
-(void)promptToDeleteMessages:(id)deleteMessages;
-(void)trashButtonTapped:(id)tapped;
-(void)unstarMessages:(id)messages;
-(void)unstarButtonTapped:(id)tapped;
-(void)starMessages:(id)messages;
-(void)starButtonTapped:(id)tapped;
-(void)forwardMessages:(id)messages toContactInfo:(id)contactInfo;
-(void)showShareSheetForMessages:(id)messages;
-(void)shareButtonTapped:(id)tapped;
-(void)forwardButtonTapped:(id)tapped;
-(BOOL)canForwardMessages:(id)messages;
-(id)selectedMessages;
-(void)updateToolbar;
-(void)cancelButtonTapped:(id)tapped;
-(void)selectButtonTapped:(id)tapped;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)loadIfNeeded;
-(void)reset;
-(void)setNeedsReset;
-(void)updateDateFormatters;
-(void)updateFooter;
-(void)updateInterfaceWithAnimation:(BOOL)animation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willMoveToParentViewController:(id)parentViewController;
-(void)viewDidLayoutSubviews;
-(void)relayoutAll;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)configureTableView:(id)view;
-(void)chatStorageDidLoadDatabase:(id)chatStorage;
-(void)chatStorageWillUnloadDatabase:(id)chatStorage;
-(void)chatStorageDidReplaceChatSession:(id)chatStorage;
-(void)currentLocaleDidChange:(id)currentLocale;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

