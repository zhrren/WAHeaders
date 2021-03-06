/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class CSSearchableIndex;

__attribute__((visibility("hidden")))
@interface WAMessageSpotlightIndexer : NSObject {
	CSSearchableIndex* _searchIndex;
}
@property(retain, nonatomic) CSSearchableIndex* searchIndex;
-(void).cxx_destruct;
-(id)searchIDForUniqueKey:(id)uniqueKey;
-(id)searchableItemForMessage:(id)message;
-(void)resetStatusOfMessagesInChatSession:(id)chatSession inContext:(id)context;
-(void)resetStatusOfAllMessagesInContext:(id)context;
-(void)reindexSpotlightIDs:(id)ids inContext:(id)context;
-(void)unindexAllMessages;
-(void)unindexMessagesWithJID:(id)jid;
-(void)unindexMessageWithUniqueKey:(id)uniqueKey;
-(int)indexMessagesOfCount:(unsigned)count inContext:(id)context;
-(id)init;
@end

