/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAViewController.h"

@class NSTimer, WAChatStorage, UILabel, UIProgressView, UIView, UIButton, NSNumber, WACircularProgressView;
@protocol WAChatDatabaseMigrationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WAChatDatabaseMigrationViewController : WAViewController {
	NSTimer* _progressTimer;
	double _estimatedMigrationTime;
	unsigned long long _databaseSize;
	double _migrationStartTime;
	NSNumber* _migrationStatus;
	BOOL _excessiveMigrationTimeLogUploaded;
	WAChatStorage* _chatStorage;
	id<WAChatDatabaseMigrationViewControllerDelegate> _delegate;
	UIView* _viewMigrationProgress;
	UILabel* _labelMigrationProgress;
	UIProgressView* _progressView;
	WACircularProgressView* _circularProgressView;
	UILabel* _labelProgress;
	UIView* _viewNoSpace;
	UILabel* _labelNoSpace;
	UIButton* _buttonTryAgain;
}
@property(retain, nonatomic) UIButton* buttonTryAgain;
@property(retain, nonatomic) UILabel* labelNoSpace;
@property(retain, nonatomic) UIView* viewNoSpace;
@property(retain, nonatomic) UILabel* labelProgress;
@property(retain, nonatomic) WACircularProgressView* circularProgressView;
@property(retain, nonatomic) UIProgressView* progressView;
@property(retain, nonatomic) UILabel* labelMigrationProgress;
@property(retain, nonatomic) UIView* viewMigrationProgress;
@property(assign, nonatomic) __weak id<WAChatDatabaseMigrationViewControllerDelegate> delegate;
@property(retain, nonatomic) WAChatStorage* chatStorage;
+(void)showInWindow:(id)window withDelegate:(id)delegate;
+(id)controller;
-(void).cxx_destruct;
-(void)tryAgain:(id)again;
-(void)updateProgress:(id)progress;
-(void)didFinishMigrationWithStatus:(BOOL)status;
-(void)reallyPerformMigration;
-(void)performMigration;
-(BOOL)hasSufficientDiskSpaceForMigration;
-(long long)requiredDiskSpace;
-(int)preferredStatusBarStyle;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLayoutSubviews;
-(void)layoutSubviews;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

