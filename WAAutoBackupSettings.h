/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSUserDefaults;

@interface WAAutoBackupSettings : _ABAddressBookCopyArrayOfAllGroups
{
    id _autoBackupDate;
    unsigned int _frequency;
    NSUserDefaults *_defaults;
}

+ (id)expirationForDate:(id)fp8 withMultiple:(int)fp12 ofInterval:(unsigned int)fp16;
+ (int)integerForFrequency:(unsigned int)fp8;
+ (double)timeIntervalForFrequency:(unsigned int)fp8;
+ (unsigned int)parseFrequencyFromInteger:(int)fp8;
+ (id)descriptionForFrequency:(unsigned int)fp8;
+ (id)localizedDescriptionForFrequency:(unsigned int)fp8;
- (id)defaults;
- (void).cxx_destruct;
- (BOOL)hasMultiple:(int)fp8 ofCurrentAutoBackupIntervalElapsedSinceDate:(id)fp12;
- (id)expirationForDate:(id)fp8 withMultiple:(int)fp12;
- (BOOL)shouldPerformAutoBackupNow;
- (id)autoBackupDate;
- (void)setAutoBackupDate:(id)fp8;
- (void)updateAutoBackupDate;
- (void)resetAutoBackupDate;
- (BOOL)enabled;
- (void)setFrequency:(unsigned int)fp8;
- (unsigned int)frequency;
- (id)initWithUserDefaults:(id)fp8;
- (id)init;

@end

