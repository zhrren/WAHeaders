/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MFMailComposeViewControllerDelegate.h"
#import "WATableViewController.h"
#import "VerificationLinkHandling.h"
#import "WhatsApp-Structs.h"
#import "WACountryPickerControllerDelegate.h"
#import "WAPhoneNumberTextFieldDelegate.h"

@class CountryInfo, UIView, WAPhoneNumberTextField, WAOverlayView, UIImageView, NSString, UILabel, UITextField;
@protocol PhoneInputViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PhoneInputViewController : WATableViewController <WACountryPickerControllerDelegate, MFMailComposeViewControllerDelegate, WAPhoneNumberTextFieldDelegate, VerificationLinkHandling> {
	CountryInfo* _selectedCountry;
	NSString* _phoneNumber;
	id _phoneConfirmAlert;
	WAOverlayView* _overlayView;
	BOOL _registrationUI;
	id<PhoneInputViewControllerDelegate> _delegate;
	NSString* _verificationCodeFromURL;
	UIView* _headerView;
	UILabel* _labelHeaderText;
	UIView* _footerView;
	UILabel* _labelFooterText;
	UIView* _viewInputFieldsContainer;
	UIView* _viewCCodeContainer;
	UILabel* _labelPlusSign;
	UILabel* _labelCCode;
	UITextField* _textFieldCode;
	UIImageView* _imageCodeBg;
	UIView* _viewPhoneNumberContainer;
	WAPhoneNumberTextField* _phoneNumberTextField;
	UIImageView* _imagePhoneBg;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIImageView* imagePhoneBg;
@property(retain, nonatomic) WAPhoneNumberTextField* phoneNumberTextField;
@property(retain, nonatomic) UIView* viewPhoneNumberContainer;
@property(retain, nonatomic) UIImageView* imageCodeBg;
@property(retain, nonatomic) UITextField* textFieldCode;
@property(retain, nonatomic) UILabel* labelCCode;
@property(retain, nonatomic) UILabel* labelPlusSign;
@property(retain, nonatomic) UIView* viewCCodeContainer;
@property(retain, nonatomic) UIView* viewInputFieldsContainer;
@property(retain, nonatomic) UILabel* labelFooterText;
@property(retain, nonatomic) UIView* footerView;
@property(retain, nonatomic) UILabel* labelHeaderText;
@property(retain, nonatomic) UIView* headerView;
@property(assign, nonatomic) BOOL registrationUI;
@property(copy, nonatomic) NSString* verificationCodeFromURL;
@property(assign, nonatomic) __weak id<PhoneInputViewControllerDelegate> delegate;
-(void).cxx_destruct;
-(void)deviceCheckFailedWithError:(id)error;
-(void)deviceCheckFinishedWithResult:(id)result;
-(void)launchedFromVerificationURLWithCode:(id)code;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)countryPicker:(id)picker didSelectCountry:(id)country;
-(BOOL)phoneNumberTextFieldShouldReturn:(id)phoneNumberTextField;
-(void)phoneNumberTextFieldDidChange:(id)phoneNumberTextField;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(void)resetPhoneNumber;
-(void)cancelAction:(id)action;
-(void)doneAction:(id)action;
-(void)codeChangedAction:(id)action;
-(void)wa_tintColorDidChange;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)adjustHeaderTextFontSizeToFit;
-(void)updateHeaderTextForRegistration;
-(void)wa_applicationWillEnterForeground;
-(void)confirmNewChat;
-(void)showIncorrectPhoneNumberLengthAlert:(BOOL)alert;
-(void)showAppStoreAlert:(id)alert;
-(void)showContactSupportAlert:(id)alert withContext:(id)context;
-(void)requestAuthCode;
-(void)performSameDeviceCheck;
-(void)resizeHelperTextLabels;
-(void)formatCodeField;
-(void)formatTitle;
-(void)validateUserInput;
-(void)showOverlay:(id)overlay;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate;
@end

