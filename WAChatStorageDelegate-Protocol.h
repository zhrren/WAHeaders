/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

@protocol WAChatStorageDelegate
- (void)chatStorage:(id)fp8 didSetAllChatSessionsArchived:(BOOL)fp12 notifyWebClient:(BOOL)fp16;
- (void)chatStorage:(id)fp8 didUpdateArchiveStateOfChatSession:(id)fp12 notifyWebClient:(BOOL)fp16;
- (void)chatStorage:(id)fp8 didGenerateNotificationMessage:(id)fp12 fromParticipant:(id)fp16;
- (void)chatStorageDidDeleteAllChatSessions:(id)fp8;
- (void)chatStorageDidClearAllChatSessions:(id)fp8;
- (void)chatStorage:(id)fp8 didUpdateParticipantsOfChatSession:(id)fp12;
- (void)chatStorage:(id)fp8 didDeleteMessages:(id)fp12 inChatSession:(id)fp16;
- (void)chatStorage:(id)fp8 willDeleteMessages:(id)fp12 inChatSession:(id)fp16;
- (void)chatStorage:(id)fp8 didDeleteAllMessagesInChatSession:(id)fp12;
- (void)chatStorage:(id)fp8 willDeleteChatSession:(id)fp12 fromWebClient:(BOOL)fp16;
- (void)chatStorage:(id)fp8 didUpdateChatSessions:(id)fp12;
- (void)chatStorage:(id)fp8 didInsertChatSessions:(id)fp12;
- (void)chatStorage:(id)fp8 didDeleteChatSessions:(id)fp12;
- (void)chatStorage:(id)fp8 mediaDownloadDidFailForMessage:(id)fp12 withError:(id)fp16 autodownload:(BOOL)fp20;
- (void)chatStorage:(id)fp8 mediaUploadDidFailForMessage:(id)fp12;
- (void)chatStorage:(id)fp8 mediaUploadDidFinishForMessage:(id)fp12;
- (void)chatStorage:(id)fp8 didUpdateStatusOfMessage:(id)fp12 from:(unsigned int)fp16;
- (void)chatStorage:(id)fp8 didUpdateMessage:(id)fp12 changedKeyPaths:(id)fp16;
- (void)chatStorage:(id)fp8 didReceiveMessage:(id)fp12;
- (void)chatStorage:(id)fp8 didAddMessages:(id)fp12 notifyWebClient:(BOOL)fp16;
- (void)chatStorage:(id)fp8 didFailWithError:(id)fp12;
@end

