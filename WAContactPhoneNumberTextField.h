/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAContactPropertyTextField.h"

@interface WAContactPhoneNumberTextField : WAContactPropertyTextField
{
}

+ (BOOL)isStringADecimalNumber:(id)fp8;
+ (id)stringByKeepingOnlyDecimalDigits:(id)fp8;
+ (void)initialize;
- (BOOL)textField:(id)fp8 shouldChangeCharactersInRange:(struct _NSRange)fp12 replacementString:(id)fp20;
- (struct _NSRange)expandRange:(struct _NSRange)fp8 inTextFieldToIncludeNumber:(id)fp16;
- (unsigned int)endPositionOfPrefix:(id)fp8 inFormattedString:(id)fp12;
- (void)setText:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end

