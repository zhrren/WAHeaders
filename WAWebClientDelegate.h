/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol WAWebClientDelegate <NSObject>
-(id)allWhatsAppablePhonesInWebClient:(id)webClient;
-(id)allBroadcastListsInWebClient:(id)webClient;
-(id)allGroupChatsInWebClient:(id)webClient;
-(id)allChatSessionsInWebClient:(id)webClient;
-(void)webClient:(id)client didSetBlockedState:(BOOL)state ofUserWithJID:(id)jid reason:(id)reason requestInfo:(id)info completion:(id)completion;
-(void)webClient:(id)client didCreateGroupWithSubject:(id)subject participants:(id)participants requestInfo:(id)info completion:(id)completion;
-(void)webClient:(id)client didChangeSubjectOfGroupWithJID:(id)jid to:(id)to requestInfo:(id)info completion:(id)completion;
-(void)webClient:(id)client didLeaveGroupWithJID:(id)jid requestInfo:(id)info completion:(id)completion;
-(void)webClient:(id)client didPromoteParticipantWithJID:(id)jid inChatWithJID:(id)jid3 requestInfo:(id)info completion:(id)completion;
-(void)webClient:(id)client didAddParticipants:(id)participants inChatWithJID:(id)jid requestInfo:(id)info completion:(id)completion;
-(void)webClient:(id)client didRemoveParticipants:(id)participants inChatWithJID:(id)jid requestInfo:(id)info completion:(id)completion;
-(void)webClient:(id)client didRequestMediaUploadForMessageID:(id)messageID inChatWithJID:(id)jid requestID:(id)anId;
-(void)webClient:(id)client didDeletePictureForChatWithJID:(id)jid requestInfo:(id)info completion:(id)completion;
-(void)webClient:(id)client didSetPicture:(id)picture thumbnail:(id)thumbnail forChatWithJID:(id)jid requestInfo:(id)info completion:(id)completion;
-(unsigned)webClient:(id)client didSetStarredState:(BOOL)state ofMessageIDs:(id)messageIDs inChatWithJID:(id)jid;
-(unsigned)webClient:(id)client didSetMuteDate:(id)date fromMuteDate:(id)muteDate ofChatWithJID:(id)jid;
-(unsigned)webClient:(id)client didSetArchivedState:(BOOL)state ofChatWithJID:(id)jid messageID:(id)anId;
-(unsigned)webClient:(id)client didDeleteMessageIDs:(id)ids inChatWithJID:(id)jid;
-(unsigned)webClient:(id)client didClearChatWithJID:(id)jid messageID:(id)anId;
-(unsigned)webClient:(id)client didDeleteChatWithJID:(id)jid messageID:(id)anId;
-(void)webClient:(id)client didPlayIncomingMessageWithStanzaID:(id)stanzaID participant:(id)participant inChatWithJID:(id)jid;
-(void)webClient:(id)client didUpdateStatus:(id)status requestInfo:(id)info completion:(id)completion;
-(unsigned)webClient:(id)client didReadUntilMessageID:(id)anId inChatWithJID:(id)jid readCount:(int)count;
-(void)webClient:(id)client didRequestResendMessage:(id)message;
-(void)webClient:(id)client didRelayMessageStanza:(id)stanza;
-(id)webClient:(id)client chatSessionForJID:(id)jid;
-(id)webClient:(id)client existingOutgoingMessageWithStanzaID:(id)stanzaID inJID:(id)jid;
-(void)webClient:(id)client didChangeOutgoingChatStateToJID:(id)jid;
-(void)webClient:(id)client didSubscribeToJID:(id)jid;
-(id)webClient:(id)client outgoingMessagesAndPTTWithOrAfterMessageID:(id)orAfterMessageID inChatSession:(id)chatSession;
-(id)recentlyRelevantMessagesInChatsForWebClient:(id)webClient;
-(id)webClient:(id)client memberJIDsInBroadcastList:(id)broadcastList;
-(id)webClient:(id)client messagesInChatSession:(id)chatSession afterMessageID:(id)anId count:(unsigned)count countExceeded:(out BOOL*)exceeded;
-(id)webClient:(id)client JIDToChatSessionMapWithJIDs:(id)jids;
-(id)webClient:(id)client messagesInJID:(id)jid beforeMessageID:(id)anId count:(unsigned)count;
@end
