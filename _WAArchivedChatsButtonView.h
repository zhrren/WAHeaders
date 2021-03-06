/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <UIKit/UITableView.h>
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UITableViewCell;

__attribute__((visibility("hidden")))
@interface _WAArchivedChatsButtonView : UITableView <UITableViewDataSource, UITableViewDelegate> {
	UITableViewCell* _allArchivedChatsCell;
	id _target;
	SEL _action;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) SEL action;
@property(assign, nonatomic) __weak id target;
+(float)preferredHeight;
-(void).cxx_destruct;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)updateArchivedChatsCell;
-(void)tintColorDidChange;
-(void)applicationWillEnterForeground:(id)application;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame style:(int)style;
-(id)init;
@end

