/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSDictionary, NSString;

@interface WAPhoneNumberMap : _ABAddressBookCopyArrayOfAllGroups
{
    NSString *_path;
    NSDictionary *_prefixMap;
    unsigned int _maxPrefixLength;
    unsigned int _minPrefixLength;
    NSString *_countryCode;
    NSString *_locale;
}

- (id)locale;
- (id)countryCode;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(id)fp8;
- (void)loadIfNeeded;
- (id)locationForPhoneNumber:(id)fp8;
- (id)initWithPath:(id)fp8;

@end
