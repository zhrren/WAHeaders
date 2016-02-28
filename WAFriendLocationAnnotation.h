/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "MKAnnotation-Protocol.h"

@class CLLocation, NSString;

@interface WAFriendLocationAnnotation : _ABAddressBookCopyArrayOfAllGroups <MKAnnotation>
{
    NSString *_fullName;
    int lastUpdateMinutes;
    CLLocation *_friendLocation;
    NSString *_jid;
    NSString *_contactName;
    NSString *_subtitle;
}

- (void)setSubtitle:(id)fp8;
- (id)subtitle;
- (void)setContactName:(id)fp8;
- (id)contactName;
- (void)setJid:(id)fp8;
- (id)jid;
- (void)setFriendLocation:(id)fp8;
- (id)friendLocation;
- (void).cxx_destruct;
- (id)title;
- (CDAnonymousStruct15)coordinate;
- (void)updateSubtitle;
- (id)initForJid:(id)fp8 location:(id)fp12;

@end
