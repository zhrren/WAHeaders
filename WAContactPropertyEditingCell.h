/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAContactPropertyCell.h"

#import "WAContactPropertyTextFieldDelegate-Protocol.h"

@class WAContactPropertyTextField;

@interface WAContactPropertyEditingCell : WAContactPropertyCell <WAContactPropertyTextFieldDelegate>
{
    WAContactPropertyTextField *_textField;
}

- (void)setTextField:(id)fp8;
- (id)textField;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)isFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)contactPropertyTextFieldValueChanged:(id)fp8;
- (BOOL)contactPropertyTextFieldShouldReturn:(id)fp8;
- (void)contactPropertyTextFieldDidEndEditing:(id)fp8;
- (BOOL)contactPropertyTextFieldShouldEndEditing:(id)fp8;
- (void)contactPropertyTextFieldDidBeginEditing:(id)fp8;
- (BOOL)contactPropertyTextFieldShouldBeginEditing:(id)fp8;
- (void)reconfigure;
- (void)layoutSubviews;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end
