/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WALinkLabelDelegate.h"
#import "WAStaticTableViewController.h"

@class NSString, _WAAccountSecurityHeaderView, WATableSection;

__attribute__((visibility("hidden")))
@interface WAAccountSecurityViewController : WAStaticTableViewController <WALinkLabelDelegate> {
	WATableSection* _securityIndicatorsSection;
	_WAAccountSecurityHeaderView* _headerView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)handleOpenURL:(id)url fromLinkLabel:(id)linkLabel;
-(void)switchSecurityIndicatorsChanged:(id)changed;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)wa_fontSizeDidChange;
-(void)adjustHeaderViewInsetsForInterfaceOrientation:(int)interfaceOrientation;
-(void)viewDidLayoutSubviews;
-(void)setupTableView;
-(id)initWithStyle:(int)style;
-(id)init;
@end

