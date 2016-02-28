/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WATableViewController.h"

#import "ABPeoplePickerNavigationControllerDelegate-Protocol.h"
#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSArray, NSFetchedResultsController, NSMutableArray, NSTimer, UIBarButtonItem, UIImageView, UILabel, UIProgressView, UIRefreshControl, UITableView, UITableViewCell, UIView, WADropDownAlertView;

@interface FavoritesViewController : WATableViewController <UINavigationControllerDelegate, ABPeoplePickerNavigationControllerDelegate, NSFetchedResultsControllerDelegate>
{
    UIRefreshControl *_refreshControl;
    UIView *_bgView;
    UIBarButtonItem *_barButtonAdd;
    UIBarButtonItem *_barButtonDeleteAll;
    NSArray *_searchResults;
    unsigned int _numberOfGeneratedFavoritesToNotifyUser;
    UITableViewCell *_inviteCell;
    UITableViewCell *_favoritesCountCell;
    NSFetchedResultsController *_fetchedResultsController;
    NSMutableArray *_insertedFavorites;
    BOOL _ignoreChangeNotifications;
    BOOL _animateChanges;
    BOOL _needsInitialLayout;
    BOOL _refreshingFavoritesInProgress;
    NSTimer *_progressBarTimer;
    double _estimatedLoadTime;
    long _addressBookContactCount;
    WADropDownAlertView *_retryLaterAlertView;
    UITableView *_tableViewFavorites;
    UITableView *_tableViewButtons;
    UIImageView *_imageNoFavorites;
    UIView *_viewNoFavorites;
    UIView *_progressViewContainer;
    UILabel *_progressViewLabel;
    UIProgressView *_progressView;
}

- (void)setProgressView:(id)fp8;
- (id)progressView;
- (void)setProgressViewLabel:(id)fp8;
- (id)progressViewLabel;
- (void)setProgressViewContainer:(id)fp8;
- (id)progressViewContainer;
- (void)setViewNoFavorites:(id)fp8;
- (id)viewNoFavorites;
- (void)setImageNoFavorites:(id)fp8;
- (id)imageNoFavorites;
- (void)setTableViewButtons:(id)fp8;
- (id)tableViewButtons;
- (void)setTableViewFavorites:(id)fp8;
- (id)tableViewFavorites;
- (void).cxx_destruct;
- (void)wa_applicationDidEnterBackground;
- (void)searchDisplayControllerDidEndSearch:(id)fp8;
- (void)searchDisplayControllerWillBeginSearch:(id)fp8;
- (BOOL)searchDisplayController:(id)fp8 shouldReloadTableForSearchString:(id)fp12;
- (void)scrollViewDidEndDecelerating:(id)fp8;
- (void)scrollViewDidScrollToTop:(id)fp8;
- (void)scrollViewDidEndDragging:(id)fp8 willDecelerate:(BOOL)fp12;
- (void)scrollViewWillBeginDragging:(id)fp8;
- (void)tableView:(id)fp8 commitEditingStyle:(int)fp12 forRowAtIndexPath:(id)fp16;
- (void)tableView:(id)fp8 moveRowAtIndexPath:(id)fp12 toIndexPath:(id)fp16;
- (id)tableView:(id)fp8 targetIndexPathForMoveFromRowAtIndexPath:(id)fp12 toProposedIndexPath:(id)fp16;
- (BOOL)tableView:(id)fp8 canEditRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 willSelectRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 accessoryButtonTappedForRowWithIndexPath:(id)fp12;
- (int)tableView:(id)fp8 editingStyleForRowAtIndexPath:(id)fp12;
- (void)configureCell:(id)fp8 withFavorite:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)controllerDidChangeContent:(id)fp8;
- (void)controller:(id)fp8 didChangeObject:(id)fp12 atIndexPath:(id)fp16 forChangeType:(unsigned int)fp20 newIndexPath:(id)fp24;
- (void)controller:(id)fp8 didChangeSection:(id)fp12 atIndex:(unsigned int)fp16 forChangeType:(unsigned int)fp20;
- (void)controllerWillChangeContent:(id)fp8;
- (unsigned int)favoritesCount;
- (void)faultInAllFavorites;
- (void)prefetchContactAndStatusRelationshipsForPhones:(id)fp8;
- (void)loadInitialFavorites;
- (void)contactsStorageWillReloadAddressBook:(id)fp8;
- (void)didReceiveMemoryWarning;
- (void)peoplePickerNavigationControllerDidCancel:(id)fp8;
- (void)peoplePickerNavigationController:(id)fp8 didSelectPerson:(void *)fp12 property:(int)fp16 identifier:(int)fp20;
- (BOOL)peoplePickerNavigationController:(id)fp8 shouldContinueAfterSelectingPerson:(void *)fp12 property:(int)fp16 identifier:(int)fp20;
- (BOOL)peoplePickerNavigationController:(id)fp8 shouldContinueAfterSelectingPerson:(void *)fp12;
- (void)continueAfterSelectingPerson:(void *)fp8 property:(int)fp12 identifier:(int)fp16;
- (void)wa_fontSizeDidChange;
- (void)wa_tintColorDidChange;
- (void)willAnimateRotationToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (void)syncManagerDidFinishSync:(id)fp8;
- (void)updateProgressBar:(id)fp8;
- (void)updateProgressBar;
- (void)stopUpdatingProgressBarIfNeeded;
- (void)startUpdatingProgressBarIfNeeded;
- (void)showProgressViewIfNeeded;
- (BOOL)isProgressViewHidden;
- (void)cleanUpAfterLoadingFavorites;
- (void)hideRefreshFailedError;
- (void)showRefreshFailedError;
- (void)contactsStorageDidFailToGenerateFavorites:(id)fp8;
- (void)contactsStorageDidGenerateFavorites:(id)fp8;
- (void)stopLoading;
- (void)refreshFavorites;
- (void)refreshControlAction:(id)fp8;
- (void)deleteAllAction:(id)fp8;
- (void)addNewFavoriteAction:(id)fp8;
- (void)setEditing:(BOOL)fp8 animated:(BOOL)fp12;
- (void)inviteContacts;
- (void)leaveSearchMode;
- (void)searchWithCriteria:(id)fp8;
- (void)reloadFavoriteCountLabel;
- (void)notifyUserAfterGeneratingFavorites:(int)fp8;
- (void)saveTableScrollPosition;
- (void)restoreTableScrollPosition;
- (void)relayoutEmptyTableView;
- (void)updateInterfaceAnimated:(BOOL)fp8;
- (id)init;

@end
