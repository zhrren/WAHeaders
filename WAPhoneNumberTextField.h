/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSString, UIFont, WAPhoneNumberTextFieldHelper;

@interface WAPhoneNumberTextField : _ABAddressBookCopyArrayOfAllGroups
{
    WAPhoneNumberTextFieldHelper *_textFieldHelper;
    NSString *_countryCode;
    UIFont *_phoneNumberFont;
    id <WAPhoneNumberTextFieldDelegate> _textFieldDelegate;
}

- (void)setTextFieldDelegate:(id)fp8;
- (id)textFieldDelegate;
- (id)phoneNumberFont;
- (id)countryCode;
- (void).cxx_destruct;
- (void)reformatTextField;
- (void)setPhoneNumberFont:(id)fp8;
- (void)setText:(id)fp8;
- (void)setCountryCode:(id)fp8;
- (void)awakeFromNib;

@end

