/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAViewController.h"

@class UILabel, NSString, UIButton, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface WACallingNotAvailableViewController : WAViewController {
	NSString* _peerName;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UIButton* _bottomButton;
	UIButton* _closeButton;
	NSLayoutConstraint* _topSpacerConstraint;
}
@property(assign, nonatomic) __weak NSLayoutConstraint* topSpacerConstraint;
@property(assign, nonatomic) __weak UIButton* closeButton;
@property(assign, nonatomic) __weak UIButton* bottomButton;
@property(assign, nonatomic) __weak UILabel* bodyLabel;
@property(assign, nonatomic) __weak UILabel* titleLabel;
@property(copy, nonatomic) NSString* peerName;
-(void).cxx_destruct;
-(void)closeButtonTapped:(id)tapped;
-(void)bottomButtonTapped:(id)tapped;
-(void)wa_applicationDidEnterBackground;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(int)preferredStatusBarStyle;
-(unsigned)supportedInterfaceOrientations;
@end

