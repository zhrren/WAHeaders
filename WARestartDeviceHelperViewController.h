/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UIView;

@interface WARestartDeviceHelperViewController : _ABAddressBookCopyArrayOfAllGroups
{
    NSString *_explanation;
    UIView *_contentView;
    UIView *_phoneImageContainer;
    UIImageView *_imageViewPhone;
    UIImageView *_imageViewRestartArrow;
    NSLayoutConstraint *_topMarginConstraint;
    UILabel *_labelTitle;
    UILabel *_labelDescription;
    UILabel *_labelActionDescription;
    UIButton *_buttonClose;
}

+ (id)controllerWithTitle:(id)fp8 explanation:(id)fp12;
- (void)setButtonClose:(id)fp8;
- (id)buttonClose;
- (void)setLabelActionDescription:(id)fp8;
- (id)labelActionDescription;
- (void)setLabelDescription:(id)fp8;
- (id)labelDescription;
- (void)setLabelTitle:(id)fp8;
- (id)labelTitle;
- (void)setTopMarginConstraint:(id)fp8;
- (id)topMarginConstraint;
- (void)setImageViewRestartArrow:(id)fp8;
- (id)imageViewRestartArrow;
- (void)setImageViewPhone:(id)fp8;
- (id)imageViewPhone;
- (void)setPhoneImageContainer:(id)fp8;
- (id)phoneImageContainer;
- (void)setContentView:(id)fp8;
- (id)contentView;
- (void)setExplanation:(id)fp8;
- (id)explanation;
- (void).cxx_destruct;
- (void)configureRestartImages;
- (void)closeAction:(id)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (int)preferredStatusBarStyle;
- (void)viewDidLoad;

@end
