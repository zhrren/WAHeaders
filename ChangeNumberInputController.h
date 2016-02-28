/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAViewController.h"

#import "UITextFieldDelegate-Protocol.h"
#import "WAPhoneNumberTextFieldDelegate-Protocol.h"

@class CountryInfo, NSString, UIImageView, UILabel, UITableView, UITextField, UIView, WAOverlayView, WAPhoneNumberTextField;

@interface ChangeNumberInputController : WAViewController <UITextFieldDelegate, WAPhoneNumberTextFieldDelegate>
{
    CountryInfo *_selectedCountry1;
    CountryInfo *_selectedCountry2;
    NSString *_oldPhoneNumber;
    NSString *_newPhoneNumber;
    WAOverlayView *_overlayView;
    BOOL _countryCodeWarningShown;
    float _keyboardHeight;
    UITableView *_tableViewInput;
    UIView *_viewInput1;
    UIView *_viewInputFieldsContainer1;
    UILabel *_labelPhoneInput1;
    UIView *_viewCCodeContainer1;
    UILabel *_labelPlusSign1;
    UILabel *_labelCCode1;
    UITextField *_textFieldCode1;
    UIImageView *_imageCodeBg1;
    UIView *_viewPhoneNumberContainer1;
    WAPhoneNumberTextField *_textFieldPhone1;
    UIImageView *_imagePhoneBg1;
    UIView *_viewInput2;
    UIView *_viewInputFieldsContainer2;
    UILabel *_labelPhoneInput2;
    UIView *_viewCCodeContainer2;
    UILabel *_labelPlusSign2;
    UILabel *_labelCCode2;
    UITextField *_textFieldCode2;
    UIImageView *_imageCodeBg2;
    UIView *_viewPhoneNumberContainer2;
    WAPhoneNumberTextField *_textFieldPhone2;
    UIImageView *_imagePhoneBg2;
    id <ChangeNumberInputControllerDelegate> _delegate;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setImagePhoneBg2:(id)fp8;
- (id)imagePhoneBg2;
- (void)setTextFieldPhone2:(id)fp8;
- (id)textFieldPhone2;
- (void)setViewPhoneNumberContainer2:(id)fp8;
- (id)viewPhoneNumberContainer2;
- (void)setImageCodeBg2:(id)fp8;
- (id)imageCodeBg2;
- (void)setTextFieldCode2:(id)fp8;
- (id)textFieldCode2;
- (void)setLabelCCode2:(id)fp8;
- (id)labelCCode2;
- (void)setLabelPlusSign2:(id)fp8;
- (id)labelPlusSign2;
- (void)setViewCCodeContainer2:(id)fp8;
- (id)viewCCodeContainer2;
- (void)setLabelPhoneInput2:(id)fp8;
- (id)labelPhoneInput2;
- (void)setViewInputFieldsContainer2:(id)fp8;
- (id)viewInputFieldsContainer2;
- (void)setViewInput2:(id)fp8;
- (id)viewInput2;
- (void)setImagePhoneBg1:(id)fp8;
- (id)imagePhoneBg1;
- (void)setTextFieldPhone1:(id)fp8;
- (id)textFieldPhone1;
- (void)setViewPhoneNumberContainer1:(id)fp8;
- (id)viewPhoneNumberContainer1;
- (void)setImageCodeBg1:(id)fp8;
- (id)imageCodeBg1;
- (void)setTextFieldCode1:(id)fp8;
- (id)textFieldCode1;
- (void)setLabelCCode1:(id)fp8;
- (id)labelCCode1;
- (void)setLabelPlusSign1:(id)fp8;
- (id)labelPlusSign1;
- (void)setViewCCodeContainer1:(id)fp8;
- (id)viewCCodeContainer1;
- (void)setLabelPhoneInput1:(id)fp8;
- (id)labelPhoneInput1;
- (void)setViewInputFieldsContainer1:(id)fp8;
- (id)viewInputFieldsContainer1;
- (void)setViewInput1:(id)fp8;
- (id)viewInput1;
- (void)setTableViewInput:(id)fp8;
- (id)tableViewInput;
- (void).cxx_destruct;
- (void)deviceCheckFailedWithError:(id)fp8;
- (void)deviceCheckFinishedWithResult:(id)fp8;
- (void)phoneNumberTextFieldDidChange:(id)fp8;
- (void)phoneNumberTextFieldDidBeginEditing:(id)fp8;
- (BOOL)textField:(id)fp8 shouldChangeCharactersInRange:(struct _NSRange)fp12 replacementString:(id)fp20;
- (void)keyboardWillShow:(id)fp8;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (void)code2ChangedAction:(id)fp8;
- (void)code1ChangedAction:(id)fp8;
- (void)doneAction:(id)fp8;
- (void)cancelAction:(id)fp8;
- (BOOL)needToShowPhoneNumberFormatWarning;
- (void)proceedToAuthCodeRequest;
- (void)showAppStoreAlert:(id)fp8;
- (void)showContactSupportAlert:(id)fp8 withContext:(id)fp12;
- (void)performSameDeviceCheck;
- (void)validateOldPhoneNumber;
- (void)resizeInputViews;
- (void)formatCode2Field;
- (void)formatCode1Field;
- (void)validateUserInput;
- (void)showOverlay:(id)fp8;
- (void)dealloc;
- (id)initWithDelegate:(id)fp8;

@end
