/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSArray, NSString;

@interface WAListRepresentation : _ABAddressBookCopyArrayOfAllGroups
{
    NSString *_listJID;
    NSString *_name;
    NSArray *_recipientJIDs;
}

- (void)setRecipientJIDs:(id)fp8;
- (id)recipientJIDs;
- (void)setName:(id)fp8;
- (id)name;
- (void)setListJID:(id)fp8;
- (id)listJID;
- (void).cxx_destruct;
- (id)description;

@end
