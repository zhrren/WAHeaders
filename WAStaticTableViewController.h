/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WATableViewController.h"

@class NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface WAStaticTableViewController : WATableViewController {
	NSMutableArray* _sections;
}
@property(retain, nonatomic) NSArray* sections;
-(void).cxx_destruct;
-(void)deselectActiveCell;
-(void)wa_fontSizeDidChange;
-(void)reload;
-(void)willDisplayHeaderView:(id)view forSection:(int)section;
-(void)tableView:(id)view willDisplayHeaderView:(id)view2 forSection:(int)section;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForFooterInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)rowAtIndexPath:(id)indexPath;
-(void)deleteSection:(id)section withRowAnimation:(int)rowAnimation;
-(id)addSection;
-(void)setupTableView;
-(void)viewDidLoad;
-(id)initWithStyle:(int)style;
@end

