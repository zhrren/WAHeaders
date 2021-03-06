/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "WAForwardPickerDataSource.h"


__attribute__((visibility("hidden")))
@interface WAForwardPickerContactsDataSource : WAForwardPickerDataSource {
	BOOL _needsRefreshOnContactsSync;
}
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)sectionIndexTitlesForTableView:(id)tableView;
-(int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)loadSections;
-(UIEdgeInsets)separatorInset;
-(BOOL)showsEmptyListView;
-(void)syncManagerDidFinishSync:(id)syncManager;
-(id)title;
-(void)dealloc;
-(id)init;
@end

