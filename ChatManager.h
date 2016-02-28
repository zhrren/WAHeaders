/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "WAChatStorageDelegate-Protocol.h"
#import "WAContactsStorageDelegate-Protocol.h"
#import "WASyncManagerDelegate-Protocol.h"
#import "WAWebClientDelegate-Protocol.h"
#import "XMPPConnectionDelegate-Protocol.h"

@class CLLocation, NSDate, NSLock, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, WABlockBasedAlertView, WAChatDatabaseStatsManager, WASyncManager, WAWebClient;

@interface ChatManager : _ABAddressBookCopyArrayOfAllGroups <WAWebClientDelegate, WASyncManagerDelegate, WAChatStorageDelegate, WAContactsStorageDelegate, XMPPConnectionDelegate>
{
    NSMutableDictionary *_lastNotificationTimeForChat;
    WABlockBasedAlertView *_networkUnavailableAlertView;
    NSMutableDictionary *_outgoingChatStates;
    NSObject<OS_dispatch_queue> *_addressBookQueue;
    BOOL _needsReloadAddressBook;
    BOOL _needsRefreshChats;
    BOOL _isContactsSyncScheduled;
    BOOL _changeNumberIQRequired;
    BOOL _changeNumberIQInProgress;
    BOOL _usingSilentPush;
    WAWebClient *_webClient;
    NSLock *_timelockParametesLock;
    NSMutableOrderedSet *_outgoingMessagesToMerge;
    NSMutableSet *_pendingOfflineContactUpdates;
    BOOL _verificationInProgress;
    BOOL _popupMenuVisible;
    BOOL _timelocked;
    BOOL _addressBookReloadingInProgress;
    void *_sharedAddressBook;
    NSString *_registrationURL;
    NSString *_codeRequestURL;
    NSString *_sameDeviceCheckURL;
    NSString *_phoneNumber;
    NSString *_countryCode;
    NSString *_currentStatus;
    WAChatDatabaseStatsManager *_statsManager;
    WASyncManager *_syncManager;
    NSMutableArray *_statusList;
    NSMutableSet *_navigationBarHintHistory;
    NSMutableSet *_placeCache;
    NSDate *_gOverQueryLimitDate;
    CLLocation *_lastKnownLocation;
    NSDate *_timelockStartDate;
    NSDate *_timelockedUntil;
    NSDate *_timelockRetryDate;
    int _timelockReasonCode;
    NSDate *_connectionDisconnectDate;
    NSString *_statusPendingUpdate;
    double _addressBookReloadingStartTime;
}

+ (id)sharedManager;
- (id)statusPendingUpdate;
- (double)addressBookReloadingStartTime;
- (BOOL)addressBookReloadingInProgress;
- (void)setUsingSilentPush:(BOOL)fp8;
- (BOOL)usingSilentPush;
- (id)connectionDisconnectDate;
- (void)setTimelockReasonCode:(int)fp8;
- (int)timelockReasonCode;
- (void)setTimelockRetryDate:(id)fp8;
- (void)setTimelockedUntil:(id)fp8;
- (id)timelockedUntil;
- (void)setTimelockStartDate:(id)fp8;
- (id)timelockStartDate;
- (void)setTimelocked:(BOOL)fp8;
- (void)setLastKnownLocation:(id)fp8;
- (id)lastKnownLocation;
- (void)setGOverQueryLimitDate:(id)fp8;
- (id)gOverQueryLimitDate;
- (id)placeCache;
- (void)setPopupMenuVisible:(BOOL)fp8;
- (BOOL)popupMenuVisible;
- (void)setVerificationInProgress:(BOOL)fp8;
- (BOOL)verificationInProgress;
- (id)navigationBarHintHistory;
- (id)statusList;
- (id)syncManager;
- (id)statsManager;
- (void)setCurrentStatus:(id)fp8;
- (id)currentStatus;
- (id)countryCode;
- (id)phoneNumber;
- (void).cxx_destruct;
- (id)allWhatsAppablePhonesInWebClient:(id)fp8;
- (id)allBroadcastListsInWebClient:(id)fp8;
- (id)allGroupChatsInWebClient:(id)fp8;
- (id)allChatSessionsInWebClient:(id)fp8;
- (void)webClient:(id)fp8 didSetBlockedState:(BOOL)fp12 ofUserWithJID:(id)fp16 reason:(id)fp20 requestInfo:(id)fp24 completion:(id)fp(null);
- (void)webClient:(id)fp8 didRequestResendMessage:(id)fp12;
- (void)webClient:(id)fp8 didCreateGroupWithSubject:(id)fp12 participants:(id)fp16 requestInfo:(id)fp20 completion:(id)fp(null);
- (void)webClient:(id)fp8 didChangeSubjectOfGroupWithJID:(id)fp12 to:(id)fp16 requestInfo:(id)fp20 completion:(id)fp(null);
- (void)webClient:(id)fp8 didLeaveGroupWithJID:(id)fp12 requestInfo:(id)fp16 completion:(id)fp(null);
- (void)webClient:(id)fp8 didPromoteParticipantWithJID:(id)fp12 inChatWithJID:(id)fp16 requestInfo:(id)fp20 completion:(id)fp(null);
- (void)webClient:(id)fp8 didAddParticipants:(id)fp12 inChatWithJID:(id)fp16 requestInfo:(id)fp20 completion:(id)fp(null);
- (void)webClient:(id)fp8 didRemoveParticipants:(id)fp12 inChatWithJID:(id)fp16 requestInfo:(id)fp20 completion:(id)fp(null);
- (void)webClient:(id)fp8 didRequestMediaUploadForMessageID:(id)fp12 inChatWithJID:(id)fp16 requestID:(id)fp20;
- (void)webClient:(id)fp8 didDeletePictureForChatWithJID:(id)fp12 requestInfo:(id)fp16 completion:(id)fp(null);
- (void)webClient:(id)fp8 didSetPicture:(id)fp12 thumbnail:(id)fp16 forChatWithJID:(id)fp20 requestInfo:(id)fp24 completion:(id)fp(null);
- (unsigned int)webClient:(id)fp8 didSetMuteDate:(id)fp12 fromMuteDate:(id)fp16 ofChatWithJID:(id)fp20;
- (unsigned int)webClient:(id)fp8 didSetArchivedState:(BOOL)fp12 ofChatWithJID:(id)fp16 messageID:(id)fp20;
- (unsigned int)webClient:(id)fp8 didDeleteMessageIDs:(id)fp12 inChatWithJID:(id)fp16;
- (unsigned int)webClient:(id)fp8 didClearChatWithJID:(id)fp12 messageID:(id)fp16;
- (unsigned int)webClient:(id)fp8 didDeleteChatWithJID:(id)fp12 messageID:(id)fp16;
- (void)webClient:(id)fp8 didPlayIncomingMessageWithStanzaID:(id)fp12 participant:(id)fp16 inChatWithJID:(id)fp20;
- (void)webClient:(id)fp8 didUpdateStatus:(id)fp12 requestInfo:(id)fp16 completion:(id)fp(null);
- (unsigned int)webClient:(id)fp8 didReadUntilMessageID:(id)fp12 inChatWithJID:(id)fp16 readCount:(int)fp20;
- (void)webClient:(id)fp8 didRelayMessageStanza:(id)fp12;
- (id)webClient:(id)fp8 chatSessionForJID:(id)fp12;
- (id)webClient:(id)fp8 existingOutgoingMessageWithStanzaID:(id)fp12 inJID:(id)fp16;
- (void)webClient:(id)fp8 didChangeOutgoingChatStateToJID:(id)fp12;
- (void)webClient:(id)fp8 didSubscribeToJID:(id)fp12;
- (id)webClient:(id)fp8 outgoingMessagesAndPTTWithOrAfterMessageID:(id)fp12 inChatSession:(id)fp16;
- (id)recentlyRelevantMessagesInChatsForWebClient:(id)fp8;
- (id)webClient:(id)fp8 memberJIDsInBroadcastList:(id)fp12;
- (id)webClient:(id)fp8 messagesInChatSession:(id)fp12 afterMessageID:(id)fp16 count:(unsigned int)fp20 countExceeded:(out char *)fp24;
- (id)webClient:(id)fp8 JIDToChatSessionMapWithJIDs:(id)fp12;
- (id)webClient:(id)fp8 messagesInJID:(id)fp12 beforeMessageID:(id)fp16 count:(unsigned int)fp20;
- (void)removeWebClientSessionWithData:(id)fp8;
- (void)beginNewWebClientSessionWithQRCode:(id)fp8 completion:(id)fp(null);
- (id)allSavedWebClientSessionDataObjects;
- (BOOL)hasActiveWebClientSession;
- (BOOL)isWebClientAvailable;
- (BOOL)isWebClientSupported;
- (void)callWillEnd:(id)fp8;
- (void)callDidBecomeActive:(id)fp8;
- (void)updateStatus:(id)fp8 webClientRequestID:(id)fp12 completion:(id)fp(null);
- (void)updateStatus:(id)fp8;
- (void)reconnectAndLoadChatDatabaseWithCompletionHandler:(id)fp(null);
- (void)disconnectAndUnloadChatDatabaseWithCompletionHandler:(id)fp(null);
- (id)addContactFromABRecord:(void *)fp8 addressBook:(void *)fp12 whatsAppID:(id)fp16;
- (id)reloadDataFromABRecord:(void *)fp8 whatsAppID:(id)fp12;
- (void)reloadUnknownChatsWithWAContact:(id)fp8;
- (void)menuControllerDidHideMenu:(id)fp8;
- (void)menuControllerDidShowMenu:(id)fp8;
- (void)sendLocalNotificationForMessage:(id)fp8 fromUser:(id)fp12 numberOfAttempts:(int)fp16;
- (void)sendLocalNotificationForMessage:(id)fp8 fromUser:(id)fp12;
- (BOOL)messageShouldBeMuted:(id)fp8;
- (void)saveNotificationTimeForMessage:(id)fp8;
- (void)changeNumberFailedWithError:(id)fp8;
- (void)changeNumberFinishedWithAccountInfo:(id)fp8;
- (void)requestChangeNumberIfNecessary;
- (void)xmppConnection:(id)fp8 didReceiveCallOfferReceipt:(id)fp12;
- (void)xmppConnectionDidChangeNetworkStateDuringCall:(id)fp8;
- (void)xmppConnection:(id)fp8 didReceiveCallAck:(id)fp12;
- (void)xmppConnection:(id)fp8 didReceiveIncomingCallStanza:(id)fp12;
- (void)xmppConnectionDidReceiveOfflineMarker:(id)fp8;
- (void)xmppConnection:(id)fp8 callStanzaDidTimeOut:(id)fp12;
- (void)xmppConnection:(id)fp8 receivedUpdatedContactCapabilities:(id)fp12;
- (void)xmppConnection:(id)fp8 didReceiveMessages:(id)fp12 completion:(id)fp(null);
- (void)xmppConnection:(id)fp8 didReceiveOfflineReceiptWithStanzaIDs:(id)fp12 fromJID:(id)fp16 participantJID:(id)fp20;
- (void)xmppConnection:(id)fp8 didReceiveServerRejectRetryForReceipt:(id)fp12 registrationId:(int)fp16 fromJID:(id)fp20 participanr:(id)fp24;
- (void)xmppConnection:(id)fp8 didReceiveErrorReceiptForStanzaID:(id)fp12 fromJID:(id)fp16 participantJID:(id)fp20 type:(id)fp24;
- (void)xmppConnection:(id)fp8 didReceiveRetryReceiptForStanzaID:(id)fp12 fromJID:(id)fp16 participantJID:(id)fp20 registrationId:(int)fp24 retryCount:(int)fp28;
- (void)xmppConnection:(id)fp8 didRequestDownloadOfMediaInMessage:(id)fp12;
- (void)xmppConnection:(id)fp8 didReceiveServerErrorForOutgoingMessagesWithStanzaIDs:(id)fp12 fromJID:(id)fp16 participantJID:(id)fp20;
- (void)xmppConnection:(id)fp8 didReceiveServerErrorAckForIncomingMessageWithStanzaID:(id)fp12 fromJID:(id)fp16 participantJID:(id)fp20;
- (void)xmppConnection:(id)fp8 accountChangedWithAccountInfo:(id)fp12 receitInfo:(id)fp16 offlineStorage:(BOOL)fp20;
- (void)xmppConnection:(id)fp8 serverTimeShiftChanged:(double)fp12;
- (void)xmppConnection:(id)fp8 contactsSyncRequest:(id)fp12 timestamp:(id)fp16;
- (void)xmppConnection:(id)fp8 contactUpdated:(id)fp12 offlineStorage:(BOOL)fp16;
- (void)xmppConnection:(id)fp8 contactRemoved:(id)fp12;
- (void)xmppConnection:(id)fp8 contactAddedWithHash:(id)fp12;
- (void)xmppConnection:(id)fp8 statusChanged:(id)fp12;
- (void)xmppConnectionStopGroupLocationSharing:(id)fp8;
- (BOOL)xmppConnection:(id)fp8 startLocationSharingForGroup:(id)fp12 duration:(int)fp16;
- (void)xmppConnection:(id)fp8 dirtyFlagsReceived:(id)fp12 timestamp:(id)fp16;
- (void)xmppConnection:(id)fp8 profilePictureUploadRequestFor:(id)fp12 timestamp:(id)fp16;
- (void)xmppConnection:(id)fp8 profilePictureChangedFor:(id)fp12 identifier:(id)fp16 author:(id)fp20 name:(id)fp24 timestamp:(id)fp28;
- (void)xmppConnection:(id)fp8 groupSubjectChanged:(id)fp12 notification:(id)fp16;
- (void)xmppConnection:(id)fp8 groupLockStateChanged:(BOOL)fp12 notification:(id)fp16;
- (void)xmppConnection:(id)fp8 groupDeletedNotification:(id)fp12;
- (void)xmppConnection:(id)fp8 participantsDemoted:(id)fp12 notification:(id)fp16;
- (void)xmppConnection:(id)fp8 participantsPromoted:(id)fp12 notification:(id)fp16;
- (void)xmppConnection:(id)fp8 userModified:(id)fp12 toJID:(id)fp16 inGroupWithJID:(id)fp20 timestamp:(id)fp24;
- (void)xmppConnection:(id)fp8 groupCreated:(id)fp12 notification:(id)fp16;
- (void)xmppConnection:(id)fp8 participantsRemoved:(id)fp12 groupSubject:(id)fp16 notification:(id)fp20;
- (void)xmppConnection:(id)fp8 participantsAdded:(id)fp12 notification:(id)fp16;
- (void)xmppConnection:(id)fp8 statusChanged:(unsigned int)fp12 forIncomingMessageWithStanzaID:(id)fp16 fromJID:(id)fp20 participantJID:(id)fp24;
- (void)xmppConnection:(id)fp8 statusChanged:(unsigned int)fp12 forOutgoingMessagesWithStanzaIDs:(id)fp16 fromJID:(id)fp20 participantJID:(id)fp24 userData:(id)fp28;
- (void)xmppConnection:(id)fp8 chatStateChanged:(unsigned int)fp12 forJID:(id)fp16 participantJID:(id)fp20;
- (void)xmppConnection:(id)fp8 presenceChanged:(unsigned int)fp12 forJID:(id)fp16;
- (void)xmppConnection:(id)fp8 presenceChanged:(unsigned int)fp12;
- (void)xmppConnectionDidDisconnect:(id)fp8;
- (void)xmppConnectionDidNotAuthenticate:(id)fp8 lockDuration:(double)fp12 retryAfter:(double)fp20 reasonCode:(int)fp28;
- (void)xmppConnectionDidAuthenticate:(id)fp8;
- (void)xmppConnectionDidConnect:(id)fp8;
- (void)xmppConnection:(id)fp8 stateChanged:(unsigned int)fp12;
- (void)xmppConnection:(id)fp8 networkStatusChanged:(unsigned int)fp12;
- (void)networkStatusChanged:(unsigned int)fp8;
- (void)showNetworkUnavailableAlert;
- (void)syncManager:(id)fp8 didFinishSyncWithResult:(int)fp12 failureReason:(int)fp16;
- (void)contactsStorage:(id)fp8 didAddOrUpdateContacts:(id)fp12 didRemoveJIDs:(id)fp16 removeMissingJIDs:(BOOL)fp20;
- (void)contactsStorageDidFailToGenerateFavorites:(id)fp8;
- (void)contactsStorageDidGenerateFavorites:(id)fp8;
- (void)contactsStorageDidUpdateFavorites:(id)fp8;
- (void)contactsStorageDidUpdateStatus:(id)fp8;
- (void)contactsStorageDidUpdateContacts:(id)fp8;
- (void)chatStorage:(id)fp8 didSetAllChatSessionsArchived:(BOOL)fp12 notifyWebClient:(BOOL)fp16;
- (void)chatStorage:(id)fp8 didUpdateArchiveStateOfChatSession:(id)fp12 notifyWebClient:(BOOL)fp16;
- (void)chatStorage:(id)fp8 didGenerateNotificationMessage:(id)fp12 fromParticipant:(id)fp16;
- (void)chatStorage:(id)fp8 didUpdateParticipantsOfChatSession:(id)fp12;
- (void)chatStorageDidDeleteAllChatSessions:(id)fp8;
- (void)chatStorageDidClearAllChatSessions:(id)fp8;
- (void)chatStorage:(id)fp8 didDeleteMessages:(id)fp12 inChatSession:(id)fp16;
- (void)chatStorage:(id)fp8 willDeleteMessages:(id)fp12 inChatSession:(id)fp16;
- (void)chatStorage:(id)fp8 didDeleteAllMessagesInChatSession:(id)fp12;
- (void)chatStorage:(id)fp8 willDeleteChatSession:(id)fp12 fromWebClient:(BOOL)fp16;
- (void)chatStorage:(id)fp8 didUpdateChatSessions:(id)fp12;
- (void)chatStorage:(id)fp8 didDeleteChatSessions:(id)fp12;
- (void)chatStorage:(id)fp8 didInsertChatSessions:(id)fp12;
- (void)chatStorage:(id)fp8 mediaDownloadDidFailForMessage:(id)fp12 withError:(id)fp16 autodownload:(BOOL)fp20;
- (void)chatStorage:(id)fp8 mediaUploadDidFailForMessage:(id)fp12;
- (void)chatStorage:(id)fp8 mediaUploadDidFinishForMessage:(id)fp12;
- (void)didUpdateMessage:(id)fp8;
- (void)chatStorage:(id)fp8 didUpdateMessage:(id)fp12 changedKeyPaths:(id)fp16;
- (void)chatStorage:(id)fp8 didUpdateStatusOfMessage:(id)fp12 from:(unsigned int)fp16;
- (void)chatStorage:(id)fp8 didReceiveMessage:(id)fp12;
- (void)chatStorage:(id)fp8 didAddMessages:(id)fp12 notifyWebClient:(BOOL)fp16;
- (void)chatStorage:(id)fp8 didFailWithError:(id)fp12;
- (id)outgoingMessagesInSharedItemOutboxes;
- (id)timelockRetryDate;
- (BOOL)isTimelocked;
- (void)resetTimelockRetryDate;
- (void)checkTimelockExpiration;
- (void)loadTimelockParameters;
- (void)saveTimelockParameters;
- (void)setTimelockedUntil:(id)fp8 retryDate:(id)fp12 withReasonCode:(int)fp16;
- (void)resetTimelock;
- (id)localizedChatActivityStringForJID:(id)fp8;
- (id)localizedChatActivityStringForContactWithJID:(id)fp8;
- (id)localizedChatActivityStringForGroupWithJID:(id)fp8;
- (void)updateChatStateIfNeededForJID:(id)fp8;
- (void)changeOutgoingChatState:(unsigned int)fp8 forJID:(id)fp12;
- (unsigned int)outgoingChatStateForJID:(id)fp8;
- (void)setJID:(id)fp8 mutedUntil:(id)fp12 notifyWebClient:(BOOL)fp16;
- (void)setJID:(id)fp8 mutedUntil:(id)fp12 notifyWebClient:(BOOL)fp16 updateAllContactPhones:(BOOL)fp20;
- (void)changeNameOfList:(id)fp8 to:(id)fp12;
- (void)sendReadReceiptsForUnreadMessagesFromIndex:(unsigned int)fp8 inChatSession:(id)fp12;
- (void)markMessagesAsReadFromIndex:(unsigned int)fp8 readCount:(int)fp12 inChatSession:(id)fp16 onWebClient:(BOOL)fp20 allowBadgeCountDecrements:(BOOL)fp24;
- (void)markChatSession:(id)fp8 read:(BOOL)fp12 onWebClient:(BOOL)fp16 allowBadgeCountDecrements:(BOOL)fp20;
- (void)prepareWAChatSession:(id)fp8 subscribeToGroups:(BOOL)fp12;
- (void)failedUploadNotifyForMessage:(id)fp8;
- (void)requestFreshServerProps;
- (void)saveStatusList;
- (void)deleteAllStatusMessages;
- (void)resetStatusMessages;
- (void)loadStatusMessages;
- (id)statusListFilePath;
- (id)getOrGenerateRecoveryToken:(id)fp8;
- (void)postPhoneNumberChangedNotification;
- (void)registerUsingAuthCode:(id)fp8 withCompletion:(id)fp(null);
- (void)requestAuthCodeUsingMethod:(id)fp8 withCompletion:(id)fp(null);
- (void)getNewPasswordFailedWithError:(id)fp8;
- (void)getNewPasswordFinishedWithResult:(id)fp8;
- (void)performSameDeviceCheckForPhone:(id)fp8 countryCode:(id)fp12 withCompletion:(id)fp(null);
- (void)performSameDeviceCheckForPhone:(id)fp8 countryCode:(id)fp12 rcToken:(id)fp16 withCompletion:(id)fp(null);
- (void)processVerificationServerResponse:(id)fp8 error:(id)fp12 completion:(id)fp(null);
- (void)resetAuthInfo;
- (void)initializeChat;
- (void)refreshChats;
- (id)refreshChatSessionsForUnknownContacts:(id)fp8;
- (id)allWhatsAppIDsInChatSessions:(id)fp8;
- (id)refreshChatSessionsForKnownContacts:(id)fp8;
- (id)refreshChatSessionsAfterAddressBookReloadWithContext:(id)fp8;
- (id)allABIDsInChatSessions:(id)fp8;
- (BOOL)findContactInContext:(id)fp8 forChatSession:(id)fp12;
- (void)reset;
- (void)reloadFavorites;
- (void)enableContactsSync;
- (void)reloadAddressBook;
- (void)reloadAddressBookIfNeeded;
- (void)setNeedsReloadAddressBook;
- (id)addressBookMutationLock;
- (id)storage;
- (id)connection;
- (void)setUserInteractionEnabled;
- (id)mapsURLsForAddress:(id)fp8;
- (id)mapsURLsForCoordinate:(CDAnonymousStruct15)fp8 placeName:(id)fp24;
- (id)routeURLsForSourceLocation:(id)fp8 destLocation:(id)fp12;
- (void *)sharedAddressBook;
- (id)sameDeviceCheckURL;
- (id)codeRequestURL;
- (id)registrationURL;
- (BOOL)allowServicePurchase;
- (id)localizedServicePrice;
- (id)serviceExpirationDate;
- (unsigned int)accountType;
- (unsigned int)serviceType;
- (id)fullPhoneNumber:(BOOL)fp8;
- (id)fullPhoneNumber;
- (void)setCountryCode:(id)fp8 phoneNumber:(id)fp12;
- (void)dealloc;
- (id)init;

@end
