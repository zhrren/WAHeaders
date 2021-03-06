/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAChatSessionsViewController.h"

@class NSString, WAContact;

__attribute__((visibility("hidden")))
@interface WAGroupsInCommonViewController : WAChatSessionsViewController {
	WAContact* _contact;
	NSString* _jid;
}
@property(readonly, copy, nonatomic) NSString* jid;
@property(readonly, assign, nonatomic) WAContact* contact;
+(id)predicateForFetchRequestWithJID:(id)jid;
+(unsigned)numberOfGroupsInCommonWithJID:(id)jid;
+(id)predicateForFetchRequestWithContact:(id)contact;
+(unsigned)numberOfGroupsInCommonWithContact:(id)contact;
-(void).cxx_destruct;
-(BOOL)archiveActionRemovesCell:(id)cell;
-(void)configureCell:(id)cell forChatSession:(id)chatSession message:(id)message;
-(void)setUpNoContentView:(id)view;
-(id)predicateForFetchRequest;
-(void)commonInit;
-(id)initWithJID:(id)jid;
-(id)initWithContact:(id)contact;
@end

