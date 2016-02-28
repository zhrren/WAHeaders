/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class UITableView, UITableViewCell, UITextView, UIView;

@interface WAAllChatsArchivedView : _ABAddressBookCopyArrayOfAllGroups <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    UITableViewCell *_seeArchivedChatsCell;
    UITextView *_headerTextView;
    UIView *_topBorder;
    id <WAAllChatsArchivedViewDelegate> _delegate;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)configureHeaderTextViewWithFontSize:(float)fp8;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)fp8;

@end

