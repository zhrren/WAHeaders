/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WATableViewController.h"

@class WAMergedContact, NSString;

__attribute__((visibility("hidden")))
@interface WANotificationSettingsViewController : WATableViewController {
	NSString* _jid;
	WAMergedContact* _mergedContact;
}
@property(retain, nonatomic) WAMergedContact* mergedContact;
@property(copy, nonatomic) NSString* jid;
+(id)controller;
-(void).cxx_destruct;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)showSoundPickerControllerWithTag:(int)tag;
-(void)setCallSound:(id)sound;
-(void)setNotificationSound:(id)sound;
-(id)allJIDsForCurrentContact;
-(void)wa_fontSizeDidChange;
-(void)viewDidLoad;
-(void)dealloc;
@end

