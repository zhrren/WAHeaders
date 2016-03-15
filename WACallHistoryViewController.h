/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "WATableViewController.h"
#import "WhatsApp-Structs.h"

@class UISegmentedControl, UIView, UIBarButtonItem, NSArray, UITextView, NSCharacterSet, NSString;

__attribute__((visibility("hidden")))
@interface WACallHistoryViewController : WATableViewController <UISearchDisplayDelegate, UISearchBarDelegate> {
	UISegmentedControl* _callFilterSegmentedControl;
	BOOL _showMissedCallsOnly;
	UIBarButtonItem* _clearAllButton;
	BOOL _editingSingleRow;
	NSArray* _searchResults;
	NSCharacterSet* _symbolsInPhoneNumberSet;
	NSCharacterSet* _nonNumbersSet;
	UIView* _emptyListView;
	UITextView* _emptyListViewTextView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)tabBarItem;
-(void).cxx_destruct;
-(BOOL)searchDisplayController:(id)controller shouldReloadTableForSearchString:(id)searchString;
-(void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(void)showContactInfoScreenForAggregateCallEvent:(id)aggregateCallEvent;
-(void)tableView:(id)view accessoryButtonTappedForRowWithIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(id)aggregateCallEventAtIndexPath:(id)indexPath;
-(void)callFilterDidChange:(id)callFilter;
-(void)wa_fontSizeDidChange;
-(void)reload;
-(void)callLoggerDidUpdateEvents:(id)callLogger;
-(void)clearAll:(id)all;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)editButtonTapped:(id)tapped;
-(void)reloadEmptyListView;
-(id)tableOverlayView;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)view;
-(void)hideSearchBarIfNeeded;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(id)init;
@end

