/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@interface WAContact : _ABAddressBookCopyArrayOfAllGroups
{
}

+ (id)mergedContactWithParent:(id)fp8 includeChildren:(BOOL)fp12 dedupeProperties:(BOOL)fp16;
+ (BOOL)isABPersonRecordReadony:(void *)fp8;
+ (id)allLinkedNonWhatsAppPhonesWithParent:(id)fp8 includeChildren:(BOOL)fp12;
+ (id)allLinkedWhatsAppPhonesWithParent:(id)fp8 includeChildren:(BOOL)fp12;
- (id)individualContactAsMergedContact;
- (id)mergedContactForEditing;
- (id)mergedContact;
- (id)allLinkedAddressBookIDs;
- (id)allLinkedNonWhatsAppPhones;
- (id)allLinkedWhatsAppPhones;
- (void)setFullName:(id)fp8;

@end

