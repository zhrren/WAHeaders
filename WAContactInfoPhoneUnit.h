/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAContactInfoUnit.h"

@class NSManagedObjectID, NSString;

@interface WAContactInfoPhoneUnit : WAContactInfoUnit
{
    NSString *_jid;
    NSManagedObjectID *_waStatusID;
}

+ (id)contactInfoPhoneUnitForWAPhone:(id)fp8;
- (void)setWaStatusID:(id)fp8;
- (id)waStatusID;
- (void)setJid:(id)fp8;
- (id)jid;
- (void).cxx_destruct;
- (id)waStatus;
- (id)valueText;
- (id)initWithContactProperty:(id)fp8;
- (id)initWithWAPhone:(id)fp8;

@end

