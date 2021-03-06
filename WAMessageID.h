/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WAMessageID : NSObject {
	BOOL _isFromMe;
	NSString* _stanzaID;
	NSString* _participant;
}
@property(readonly, assign, nonatomic) BOOL isFromMe;
@property(readonly, copy, nonatomic) NSString* participant;
@property(readonly, copy, nonatomic) NSString* stanzaID;
-(void).cxx_destruct;
-(id)uniqueKeyWithChatJID:(id)chatJID;
-(BOOL)hasSameIdentityAsMessage:(id)message;
-(id)initWithStanzaID:(id)stanzaID participant:(id)participant isFromMe:(BOOL)me;
@end

