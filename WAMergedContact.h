/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString, UIImage, WAContactMultiValueProperty, WAContactProperty;

@interface WAMergedContact : _ABAddressBookCopyArrayOfAllGroups <NSCopying>
{
    BOOL _keepExistingAddressBookData;
    BOOL _readonly;
    BOOL _imageModified;
    unsigned int _numberOfMergedContacts;
    UIImage *_image;
    NSString *_prefix;
    NSString *_firstName;
    NSString *_phoneticFirstName;
    NSString *_middleName;
    NSString *_phoneticMiddleName;
    NSString *_lastName;
    NSString *_phoneticLastName;
    NSString *_suffix;
    NSString *_nickname;
    NSString *_jobTitle;
    NSString *_department;
    NSString *_organization;
    unsigned int _nameFormat;
    NSArray *_whatsAppPhones;
    WAContactMultiValueProperty *_phones;
    WAContactMultiValueProperty *_emails;
    WAContactMultiValueProperty *_webURLs;
    WAContactMultiValueProperty *_addresses;
    WAContactProperty *_birthday;
    WAContactMultiValueProperty *_dates;
    WAContactMultiValueProperty *_imAccounts;
    WAContactMultiValueProperty *_socialProfiles;
    WAContactMultiValueProperty *_notes;
    int _defaultPersonID;
}

+ (void)initialize;
- (void)setImageModified:(BOOL)fp8;
- (BOOL)imageModified;
- (void)setDefaultPersonID:(int)fp8;
- (int)defaultPersonID;
- (void)setNotes:(id)fp8;
- (id)notes;
- (void)setSocialProfiles:(id)fp8;
- (id)socialProfiles;
- (void)setImAccounts:(id)fp8;
- (id)imAccounts;
- (void)setDates:(id)fp8;
- (id)dates;
- (void)setBirthday:(id)fp8;
- (id)birthday;
- (void)setAddresses:(id)fp8;
- (id)addresses;
- (void)setWebURLs:(id)fp8;
- (id)webURLs;
- (void)setEmails:(id)fp8;
- (id)emails;
- (void)setPhones:(id)fp8;
- (id)phones;
- (void)setWhatsAppPhones:(id)fp8;
- (id)whatsAppPhones;
- (void)setNameFormat:(unsigned int)fp8;
- (unsigned int)nameFormat;
- (void)setOrganization:(id)fp8;
- (id)organization;
- (void)setDepartment:(id)fp8;
- (id)department;
- (void)setJobTitle:(id)fp8;
- (id)jobTitle;
- (void)setNickname:(id)fp8;
- (id)nickname;
- (void)setSuffix:(id)fp8;
- (id)suffix;
- (void)setPhoneticLastName:(id)fp8;
- (id)phoneticLastName;
- (void)setLastName:(id)fp8;
- (id)lastName;
- (void)setPhoneticMiddleName:(id)fp8;
- (id)phoneticMiddleName;
- (void)setMiddleName:(id)fp8;
- (id)middleName;
- (void)setPhoneticFirstName:(id)fp8;
- (id)phoneticFirstName;
- (void)setFirstName:(id)fp8;
- (id)firstName;
- (void)setPrefix:(id)fp8;
- (id)prefix;
- (id)image;
- (void)setNumberOfMergedContacts:(unsigned int)fp8;
- (unsigned int)numberOfMergedContacts;
- (void)setReadonly:(BOOL)fp8;
- (BOOL)isReadonly;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (BOOL)isEqualToMergedContact:(id)fp8;
- (BOOL)isEqual:(id)fp8;
- (BOOL)deleteContactFromAddressBook:(void *)fp8;
- (BOOL)saveChangesToAddressBook:(void *)fp8;
- (void)populateAddressBookPersonRecord:(void *)fp8;
- (void)updatePersonRecord:(void *)fp8 withDataFromMultiValueProperty:(id)fp12;
- (void)updatePersonRecordsInAddressBook:(void *)fp8 withDataFromMultiValueProperty:(id)fp12;
- (id)propertyMapFromContactMultiValueProperty:(id)fp8;
- (void)updatePersonRecord:(void *)fp8 withStringValue:(id)fp12 forProperty:(int)fp16;
- (void)mergeInSingleValueFieldsFromRecord:(void *)fp8;
- (void)setImage:(id)fp8;
- (BOOL)hasWhatsAppAblePhoneNumbers;
- (BOOL)isOrganizationContact;
- (id)compositeName;

@end
