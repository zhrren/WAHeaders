/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class CSSearchableIndex;

__attribute__((visibility("hidden")))
@interface WAContactSpotlightIndexer : NSObject {
	CSSearchableIndex* _searchIndex;
}
@property(retain, nonatomic) CSSearchableIndex* searchIndex;
+(id)searchIDForJID:(id)jid;
+(id)searchableItemForPhone:(id)phone;
-(void).cxx_destruct;
-(void)resetStatusOfAllContactsInContext:(id)context;
-(void)reindexSpotlightIDs:(id)ids inContext:(id)context;
-(void)unindexAllContacts;
-(void)unindexContactsWithJIDs:(id)jids completion:(id)completion;
-(void)unindexContactWithJID:(id)jid;
-(int)indexContactsOfCount:(unsigned)count inContext:(id)context;
-(id)init;
@end

