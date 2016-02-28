/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAViewController.h"

@class NSLayoutConstraint, NSString, UIButton, UILabel;

@interface WACallingNotAvailableViewController : WAViewController
{
    NSString *_peerName;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIButton *_bottomButton;
    UIButton *_closeButton;
    NSLayoutConstraint *_topSpacerConstraint;
}

- (void)setTopSpacerConstraint:(id)fp8;
- (id)topSpacerConstraint;
- (void)setCloseButton:(id)fp8;
- (id)closeButton;
- (void)setBottomButton:(id)fp8;
- (id)bottomButton;
- (void)setBodyLabel:(id)fp8;
- (id)bodyLabel;
- (void)setTitleLabel:(id)fp8;
- (id)titleLabel;
- (void)setPeerName:(id)fp8;
- (id)peerName;
- (void).cxx_destruct;
- (void)closeButtonTapped:(id)fp8;
- (void)bottomButtonTapped:(id)fp8;
- (void)wa_applicationDidEnterBackground;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (int)preferredStatusBarStyle;
- (unsigned int)supportedInterfaceOrientations;

@end
