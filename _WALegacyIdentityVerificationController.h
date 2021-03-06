/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAViewController.h"
#import "WAForwardPickerViewControllerDelegate.h"

@class NSString, UIView, WAE2eFingerprint, UIImageView, _WAVerificationCodeView;

@interface _WALegacyIdentityVerificationController : WAViewController <WAForwardPickerViewControllerDelegate> {
	UIView* _qrCodeContainer;
	UIImageView* _qrCodeImageView;
	UIView* _verificationCodeContainer;
	_WAVerificationCodeView* _verificationCodeView;
	NSString* _jid;
	NSString* _verificationCode;
	WAE2eFingerprint* _fingerprint;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) WAE2eFingerprint* fingerprint;
@property(copy, nonatomic) NSString* verificationCode;
@property(copy, nonatomic) NSString* jid;
-(void).cxx_destruct;
-(id)forwardPicker:(id)picker confirmationButtonTitleForContactInfo:(id)contactInfo;
-(id)forwardPicker:(id)picker confirmationTextForContactInfo:(id)contactInfo;
-(BOOL)forwardPicker:(id)picker shouldProceedWithContactInfo:(id)contactInfo;
-(void)forwardPickerDidCancel:(id)forwardPicker;
-(void)forwardPicker:(id)picker didSelectContactInfo:(id)info;
-(void)shareCodeAction:(id)action;
-(id)formattedVerificationCodeSplittingLines:(BOOL)lines;
-(void)layoutVerificationCodeText;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

