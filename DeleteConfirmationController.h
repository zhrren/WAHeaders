/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAViewController.h"

@class UITableView, UILabel, NSString, UIView, UIButton, UIActivityIndicatorView, UIImageView, UITableViewCell;
@protocol DeleteConfirmationControllerDelegate;

__attribute__((visibility("hidden")))
@interface DeleteConfirmationController : WAViewController {
	UIView* _spinnerBackgroundView;
	UIActivityIndicatorView* _spinner;
	NSString* _feedbackText;
	id<DeleteConfirmationControllerDelegate> _delegate;
	UITableView* _tableView;
	UIView* _viewThankYou;
	UILabel* _labelThankYou;
	UIView* _viewDeleteButton;
	UIButton* _buttonDelete;
	UITableViewCell* _cellConfirmation;
	UILabel* _labelTitle;
	UILabel* _labelHelperText;
	UIImageView* _imageSadPhone;
}
@property(retain, nonatomic) UIImageView* imageSadPhone;
@property(retain, nonatomic) UILabel* labelHelperText;
@property(retain, nonatomic) UILabel* labelTitle;
@property(retain, nonatomic) UITableViewCell* cellConfirmation;
@property(retain, nonatomic) UIButton* buttonDelete;
@property(retain, nonatomic) UIView* viewDeleteButton;
@property(retain, nonatomic) UILabel* labelThankYou;
@property(retain, nonatomic) UIView* viewThankYou;
@property(retain, nonatomic) UITableView* tableView;
@property(assign, nonatomic) __weak id<DeleteConfirmationControllerDelegate> delegate;
@property(copy, nonatomic) NSString* feedbackText;
-(void).cxx_destruct;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)viewDidLoad;
-(void)hideSpinnerWithCompletionHandler:(id)completionHandler;
-(void)showSpinner;
-(void)deleteAction;
-(void)cancelAction:(id)action;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate;
@end

