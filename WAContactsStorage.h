/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSArray, NSCharacterSet, NSIndexSet, NSLock, NSManagedObjectContext, NSManagedObjectModel, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSPersistentStoreCoordinator, NSString, UILocalizedIndexedCollation;

@interface WAContactsStorage : _ABAddressBookCopyArrayOfAllGroups
{
    NSString *_eTag;
    BOOL _needsRefreshContacts;
    BOOL _needsRefreshStatus;
    BOOL _contactsAvailable;
    BOOL _emailsLoading;
    BOOL _reverseNameSearch;
    NSArray *_contactEmails;
    NSMutableDictionary *_existResults;
    NSMutableSet *_deletedWhatsAppIDs;
    NSMutableSet *_existingWhatsAppIDs;
    NSManagedObjectContext *_syncResponseMOC;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSLock *_pscLock;
    NSManagedObjectModel *_managedObjectModel;
    UILocalizedIndexedCollation *_collation;
    NSArray *_sectionTitles;
    NSArray *_sectionIndexTitles;
    NSIndexSet *_ignoredIndexTitles;
    struct _NSRange _oldLatinIndexRange;
    struct _NSRange _newLatinIndexRange;
    struct _NSRange _oldLatinSectionRange;
    struct _NSRange _newLatinSectionRange;
    NSCharacterSet *_nonAlphanumericCharacterSet;
    NSObject<OS_dispatch_queue> *_contactsSerialQueue;
    id <WAContactsStorageDelegate> _delegate;
    NSLock *_addressBookMutationLock;
    int _approxCountOfContactsBeingUpdated;
}

+ (BOOL)isAddressBookAuthStatusKnown;
+ (BOOL)isAddressBookAllowed;
- (id)collation;
- (void)setApproxCountOfContactsBeingUpdated:(int)fp8;
- (int)approxCountOfContactsBeingUpdated;
- (id)addressBookMutationLock;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (id)statusForWhatsAppID:(id)fp8;
- (id)statusForWhatsAppID:(id)fp8 inContext:(id)fp12;
- (id)phoneWithObjectID:(id)fp8 inContext:(id)fp12;
- (id)phoneWithObjectID:(id)fp8;
- (id)phonesWithStatus:(BOOL)fp8;
- (id)findContactWithABID:(int)fp8 registeredInContext:(id)fp12;
- (id)contactWithABID:(int)fp8 inContext:(id)fp12 parentOnly:(BOOL)fp16;
- (id)parentContactWithABID:(int)fp8 inContext:(id)fp12;
- (id)parentContactWithABID:(int)fp8;
- (id)addressBookContainsJID:(id)fp8;
- (int)sectionForSectionIndexTitle:(id)fp8 atIndex:(int)fp12;
- (unsigned int)sectionForObjectName:(id)fp8;
- (id)sectionIndexTitles;
- (id)sectionTitles;
- (void)prepareSectionData;
- (void)performSeriallyOnQueue:(id)fp8 block:(id)fp(null);
- (void)setMetadata:(id)fp8 forKey:(id)fp12;
- (id)metadataForKey:(id)fp8;
- (id)newManagedObjectContext;
- (id)managedObjectContext;
- (id)persistentStoreCoordinator;
- (id)persistentStoreURL;
- (id)persistentStorePath;
- (id)nonAlphanumericCharacterSet;
- (BOOL)reverseNameSearch;
- (BOOL)contactsAvailable;
- (id)init;
- (void)refreshETag;
- (id)eTag;
- (void)setExistStatus:(id)fp8 forJID:(id)fp12;
- (id)existStatusForJID:(id)fp8;
- (void)refreshExistStatusForJID:(id)fp8;
- (void)statusFetchFailerWithError:(id)fp8;
- (void)statusFetchFinishedWithResults:(id)fp8;
- (void)requestStatusMessagesForJIDs:(id)fp8;
- (void)requestStatusMessagesForAllContactsIfNeeded;
- (void)deleteStatusForJID:(id)fp8;
- (void)setStatusText:(id)fp8 timestamp:(id)fp12 forJID:(id)fp16;
- (void)loadContactEmails;
- (id)emailsForAllContacts;
- (id)contactEmails;
- (id)statusesForWhatsAppID:(id)fp8 inContext:(id)fp12;
- (id)statusMessagesForWhatsAppIDs:(id)fp8 inContext:(id)fp12;
- (id)statusWithObjectID:(id)fp8 inContext:(id)fp12;
- (id)statusWithObjectID:(id)fp8;
- (id)phonesOfAllNonWhatsAppableContacts;
- (id)phonesOfAllWhatsAppableContacts;
- (id)phoneNumbers:(BOOL)fp8;
- (unsigned int)numberOfPhones;
- (id)contactsInSectionWithID:(id)fp8;
- (id)contactsIDsInSectionWithID:(id)fp8;
- (id)sectionWithObjectID:(id)fp8;
- (id)sections;
- (id)allContactsForWhatsAppID:(id)fp8 inContext:(id)fp12;
- (id)bestContactForWhatsAppID:(id)fp8 inContext:(id)fp12;
- (id)bestContactForJID:(id)fp8;
- (id)bestContactFromContacts:(id)fp8;
- (id)allContactsWithWhatsAppIDs:(id)fp8 inContext:(id)fp12;
- (id)contactsWithABIDs:(id)fp8 withPrefetchedRelationships:(id)fp12 inContext:(id)fp16;
- (id)contactWithObjectID:(id)fp8;
- (unsigned int)numberOfContacts;
- (void)receivedUpdatedContactCapabilities:(id)fp8;
- (BOOL)updateContactCapabilities:(id)fp8;
- (void)requestFeatureCapabilitiesForJIDs:(id)fp8;
- (id)capabilitiesForJid:(id)fp8;
- (id)capabilitiesForJid:(id)fp8 inContext:(id)fp12;
- (int)capabilityStatusFromFeatureCapability:(int)fp8;
- (int)capabilityOfJid:(id)fp8 capability:(unsigned int)fp12;
- (void)processSyncError:(id)fp8;
- (void)processSyncResults:(id)fp8 syncMode:(unsigned int)fp12 syncContext:(unsigned int)fp16;
- (void)syncResponseMOCDidSave:(id)fp8;
- (id)allPhonesMatchingNumbers:(id)fp8 inContext:(id)fp12;
- (BOOL)phoneNumber:(id)fp8 isFavoriteForContactABID:(int)fp12;
- (void)addPhoneToFavorites:(id)fp8;
- (void)deleteFavorites:(id)fp8;
- (id)addContactFromABRecord:(void *)fp8 addressBook:(void *)fp12 whatsAppID:(id)fp16;
- (id)reloadDataFromABRecord:(void *)fp8 whatsAppID:(id)fp12;
- (void)addressBookReloadMOCDidSave:(id)fp8;
- (id)mergeContacts:(id)fp8;
- (void)establishParentChildRelationshipsWithContacts:(id)fp8;
- (void)reloadContactsFromAddressBook;
- (id)jidsDeletedDuringABReload;
- (void)updateContact:(id)fp8 withRecord:(void *)fp12;
- (void)reloadPhonesForContact:(id)fp8 fromABRecord:(void *)fp12;
- (void)deletePhone:(id)fp8;
- (id)addPhone:(id)fp8 label:(id)fp12 toContact:(id)fp16;
- (id)addStatus:(id)fp8 toPhone:(id)fp12 whatsAppID:(id)fp16 statusDate:(id)fp20;
- (id)sectionWithTitle:(id)fp8 inContext:(id)fp12;
- (id)addSectionWithTitle:(id)fp8 inContext:(id)fp12;
- (void)deleteDatabase;
- (void)reset;
- (void)notifyUpdatedStatusIfNecessary;
- (void)notifyUpdatedContactsIfNecessary;
- (void)unregisterFromManagedObjectContextDidSaveNotification:(id)fp8;
- (void)workerMOCDidSave:(id)fp8;
- (BOOL)saveManagedObjectContextAndMergeChanges:(id)fp8;
- (void)saveContext:(id)fp8;

@end
