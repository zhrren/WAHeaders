/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WATableViewController.h"

#import "SinglePersonPickerDelegate-Protocol.h"

@class NSMutableArray, UITableViewCell;

@interface WABlacklistViewController : WATableViewController <SinglePersonPickerDelegate>
{
    NSMutableArray *_blockedContacts;
    UITableViewCell *_addNewCell;
    BOOL _ignoreBlockedContactListNotifications;
}

+ (id)controller;
- (void).cxx_destruct;
- (id)excludedJIDsForSinglePersonPicker:(id)fp8;
- (void)singlePersonPicker:(id)fp8 didSelectContactInfo:(id)fp12;
- (void)singlePersonPickerDidCancel:(id)fp8;
- (void)addPerson;
- (id)tableView:(id)fp8 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 titleForFooterInSection:(int)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 willSelectRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 commitEditingStyle:(int)fp12 forRowAtIndexPath:(id)fp16;
- (BOOL)tableView:(id)fp8 canEditRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)blockedContactsListUpdated:(id)fp8;
- (void)removeBlacklistItem:(id)fp8;
- (void)addBlacklistItem:(id)fp8;
- (void)showUnableToMakeChangesError;
- (BOOL)canMakeChanges;
- (void)updateInterface;
- (void)reloadBlacklistItems;
- (void)xmppConnectionStateDidChange:(id)fp8;
- (void)wa_tintColorDidChange;
- (void)wa_fontSizeDidChange;
- (void)setEditing:(BOOL)fp8 animated:(BOOL)fp12;
- (void)viewDidLoad;
- (id)initWithStyle:(int)fp8;

@end
