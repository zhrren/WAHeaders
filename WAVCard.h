/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSString;

@interface WAVCard : _ABAddressBookCopyArrayOfAllGroups
{
    NSString *_contactName;
    NSString *_vCardString;
}

+ (id)mergedContactFromVCardString:(id)fp8;
+ (id)labelFromFieldDescriptions:(id)fp8;
+ (BOOL)isFieldNameForIMServiceValid:(id)fp8;
+ (BOOL)canShareInstantMessagingService:(id)fp8;
- (void)setVCardString:(id)fp8;
- (id)vCardString;
- (void)setContactName:(id)fp8;
- (id)contactName;
- (void).cxx_destruct;

@end

