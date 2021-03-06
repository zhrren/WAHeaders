/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol WAChatStorageDelegate
-(void)chatStorage:(id)storage didUpdateStarredStateOfMessages:(id)messages allStarred:(BOOL)starred notifyWebClient:(BOOL)client;
-(void)chatStorage:(id)storage didSetAllChatSessionsArchived:(BOOL)archived notifyWebClient:(BOOL)client;
-(void)chatStorage:(id)storage didUpdateArchiveStateOfChatSession:(id)chatSession notifyWebClient:(BOOL)client;
-(void)chatStorageDidDeleteAllChatSessions:(id)chatStorage;
-(void)chatStorageDidClearAllChatSessions:(id)chatStorage;
-(void)chatStorage:(id)storage didUpdateParticipantsOfChatSession:(id)chatSession;
-(void)chatStorage:(id)storage didBulkDeleteMessagesInChatSession:(id)chatSession beforeDate:(id)date includingStarredMessages:(BOOL)messages fromWebClient:(BOOL)webClient;
-(void)chatStorage:(id)storage didDeleteMessages:(id)messages inChatSession:(id)chatSession fromWebClient:(BOOL)webClient;
-(void)chatStorage:(id)storage willDeleteMessages:(id)messages inChatSession:(id)chatSession fromWebClient:(BOOL)webClient;
-(void)chatStorage:(id)storage didDeleteAllMessagesInChatSession:(id)chatSession;
-(void)chatStorage:(id)storage willDeleteChatSession:(id)session fromWebClient:(BOOL)webClient;
-(void)chatStorage:(id)storage didUpdateChatSessions:(id)sessions;
-(void)chatStorage:(id)storage didInsertChatSessions:(id)sessions;
-(void)chatStorage:(id)storage didDeleteChatSessions:(id)sessions;
-(void)chatStorage:(id)storage mediaDownloadDidFailForMessage:(id)mediaDownload withError:(id)error autodownload:(BOOL)autodownload;
-(void)chatStorage:(id)storage mediaUploadDidFailForMessage:(id)mediaUpload;
-(void)chatStorage:(id)storage mediaUploadDidFinishForMessage:(id)mediaUpload;
-(void)chatStorage:(id)storage didUpdateStatusOfMessage:(id)message from:(unsigned)from;
-(void)chatStorage:(id)storage didUpdateMessage:(id)message changedKeyPaths:(id)paths;
-(void)chatStorage:(id)storage didReceiveMessage:(id)message fromSenderName:(id)senderName;
-(void)chatStorage:(id)storage didAddMessages:(id)messages notifyWebClient:(BOOL)client;
-(void)chatStorage:(id)storage didFailWithError:(id)error;
@end

