/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import </libobjc.A.h>

@class UIView, UITableViewCell, NSString, UITableView, UILabel, UIWebView;
@protocol WAEmptyChatListControllerDelegate;

__attribute__((visibility("hidden")))
@interface WAEmptyChatListController : NSObject <UITableViewDataSource, UITableViewDelegate> {
	UITableViewCell* _tellAFriendCell;
	id<WAEmptyChatListControllerDelegate> _delegate;
	UITableView* _tableView;
	UIView* _viewHelperText;
	UIWebView* _labelHelperTop;
	UILabel* _labelHelperBottom;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UILabel* labelHelperBottom;
@property(retain, nonatomic) UIWebView* labelHelperTop;
@property(retain, nonatomic) UIView* viewHelperText;
@property(readonly, assign, nonatomic) UITableView* tableView;
@property(assign, nonatomic) __weak id<WAEmptyChatListControllerDelegate> delegate;
-(void).cxx_destruct;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)reloadTableView;
-(id)topHelperHTMLStringWithFont:(id)font;
-(void)layoutContent;
-(void)awakeFromNib;
@end

