/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAForwardPickerDataSource.h"

@interface WAForwardPickerContactsDataSource : WAForwardPickerDataSource
{
    BOOL _needsRefreshOnContactsSync;
}

- (float)tableView:(id)fp8 heightForHeaderInSection:(int)fp12;
- (id)sectionIndexTitlesForTableView:(id)fp8;
- (int)tableView:(id)fp8 sectionForSectionIndexTitle:(id)fp12 atIndex:(int)fp16;
- (id)tableView:(id)fp8 titleForHeaderInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (id)loadSections;
- (struct UIEdgeInsets)separatorInset;
- (BOOL)showsEmptyListView;
- (void)syncManagerDidFinishSync:(id)fp8;
- (id)title;
- (void)dealloc;
- (id)init;

@end
