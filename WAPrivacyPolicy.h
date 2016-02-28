/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@interface WAPrivacyPolicy : _ABAddressBookCopyArrayOfAllGroups
{
    unsigned int _privacySetting[3];
    int _pendingRequestId[3];
    BOOL _needRefetch;
}

+ (id)stringForSetting:(unsigned int)fp8;
+ (void)resetPolicy;
+ (id)sharedPolicy;
- (void)setPrivacy:(unsigned int)fp8 forCategory:(unsigned int)fp12;
- (unsigned int)settingForCategory:(unsigned int)fp8;
- (void)loadPrivacySettingsIfNeeded;
- (void)ignoreResultsOfPendingRequests;
- (void)resetValues;
- (id)init;

@end

