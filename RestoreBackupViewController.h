/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAChatDatabaseMigrationViewControllerDelegate.h"
#import "WARepairDatabaseViewControllerDelegate.h"
#import "WhatsApp-Structs.h"
#import "WAWarningViewController.h"

@class UILabel, UIActivityIndicatorView, NSString, NSDate, UIViewController, NSNumber, UIView, WAPreviousBackup, UIBarButtonItem, WACloudStatus, WABackupInfoTableCell, WAFieldStatsEventICloudRestore, WACloudBackupManager;
@protocol RestoreBackupViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface RestoreBackupViewController : WAWarningViewController <WAChatDatabaseMigrationViewControllerDelegate, WARepairDatabaseViewControllerDelegate> {
	UIBarButtonItem* _barButtonNext;
	BOOL _nextButtonOverride;
	WAFieldStatsEventICloudRestore* _event;
	NSDate* _eventStartTime;
	BOOL _needsIntegrityCheck;
	WACloudBackupManager* _manager;
	WAPreviousBackup* _previousBackup;
	WACloudStatus* _cloudStatus;
	id _cloudStatusListener;
	BOOL _registered;
	UIViewController* _previousController;
	BOOL _allowsUserToSkipRestore;
	BOOL _didFinishEntireRestore;
	BOOL _restoring;
	id<RestoreBackupViewControllerDelegate> _delegate;
	WABackupInfoTableCell* _cellBackupInfo;
	UIView* _viewNoiCloud;
	UILabel* _labelNoiCloud;
	UIView* _viewTableFooter;
	UILabel* _labelProgressInfo;
	UILabel* _labelFooterText;
	UIActivityIndicatorView* _activityIndicator;
	NSDate* _loggedPreviousBackupDate;
	NSNumber* _numberOfMessagesRestored;
	unsigned _currentBackupVersion;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) NSNumber* laterMediaRestoreSize;
@property(assign, nonatomic) unsigned currentBackupVersion;
@property(assign, nonatomic, getter=isRestoring) BOOL restoring;
@property(retain, nonatomic) NSNumber* numberOfMessagesRestored;
@property(retain, nonatomic) NSDate* loggedPreviousBackupDate;
@property(retain, nonatomic) UIActivityIndicatorView* activityIndicator;
@property(retain, nonatomic) UILabel* labelFooterText;
@property(retain, nonatomic) UILabel* labelProgressInfo;
@property(retain, nonatomic) UIView* viewTableFooter;
@property(retain, nonatomic) UILabel* labelNoiCloud;
@property(retain, nonatomic) UIView* viewNoiCloud;
@property(retain, nonatomic) WABackupInfoTableCell* cellBackupInfo;
@property(assign, nonatomic) __weak id<RestoreBackupViewControllerDelegate> delegate;
@property(assign, nonatomic) BOOL didFinishEntireRestore;
@property(assign, nonatomic) BOOL allowsUserToSkipRestore;
-(void).cxx_destruct;
-(void)repairDatabaseViewControllerDidFail:(id)repairDatabaseViewController;
-(void)repairDatabaseViewControllerDidSucceed:(id)repairDatabaseViewController;
-(void)chatDatabaseMigrationViewController:(id)controller didCompleteSuccessfully:(BOOL)successfully;
-(void)showRepairController;
-(void)showMigrationController;
-(void)prepareToShowController;
-(void)runIntegrityCheck:(id)check;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)reloadNoICloudHelperText;
-(void)wa_fontSizeDidChange;
-(void)wa_tintColorDidChange;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidLayoutSubviews;
-(void)startRestoreIfRequested;
-(void)applicationDidBecomeActive:(id)application;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)nextAction:(id)action;
-(void)unregisterForRestoreNotifications;
-(void)registerForRestoreNotifications;
-(void)reloadStore;
-(void)submitFieldStatsEvent;
-(void)countNumberOfMessagesRestored;
-(void)integrityCheck:(id)check;
-(void)updateUserDefaults;
-(void)finish;
-(void)restorePhaseChanged:(id)changed;
-(void)restoreFromBackupIfAvailable;
-(void)startRestoreSequence:(BOOL)sequence;
-(void)updateNextButtonEnabled;
-(void)overrideNextButton;
-(void)updateBackupDetails;
-(void)previousBackupChanged:(id)changed;
-(void)cloudStatusUpdated;
-(void)layoutFooterView;
-(void)showProgress:(BOOL)progress showFooter:(BOOL)footer;
-(id)footerTextForDownloadProgress;
-(void)updateProgressText;
-(void)stopAnimatingGears;
-(void)startAnimatingGears;
-(void)skipFieldStatsEvent;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate;
@end

