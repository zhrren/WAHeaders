/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import </libobjc.A.h>
#import "XMPPStreamDelegate.h"

@class NSString, WAFieldStatsEventChatConnectionProbe, NSDictionary, XMPPStream, WABatchDispatcher, NSMutableSet, NSMutableDictionary, XMPPConnectionConfiguration, WATimer, NSMutableArray;
@protocol OS_dispatch_source, XMPPConnectionDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface XMPPConnection : NSObject <XMPPStreamDelegate> {
	WATimer* _updatePresenceTimer;
	NSMutableSet* _deferredSubscribes;
	NSMutableDictionary* _clientData;
	unsigned _lastSentPresence;
	NSMutableDictionary* _timers;
	NSMutableDictionary* _unsentMessages;
	NSMutableDictionary* _unsentCallStanzas;
	NSMutableArray* _pendingRequests;
	BOOL _firstOfflineMessageReceived;
	NSMutableArray* _recentlySentAcks;
	NSMutableArray* _acks;
	NSMutableDictionary* _sentReadReceipts;
	NSMutableArray* _readReceiptsToProcess;
	NSObject<OS_dispatch_source>* _delayedProcessTimer;
	double _connectionAttemptStartTime;
	double _connectionStartTime;
	WABatchDispatcher* _incomingMessageStanzaDispatcher;
	NSObject<OS_dispatch_source>* _checkConnectionTimer;
	NSObject<OS_dispatch_source>* _checkFieldStatsTimer;
	int _connectionHandlersLock;
	NSMutableArray* _connectionHandlers;
	int _stateLock;
	NSDictionary* _stateChangeCallbacks;
	unsigned _state;
	unsigned _networkStatus;
	int _networkStatusLock;
	NSString* _radioAccessTechnology;
	XMPPConnectionConfiguration* _config;
	BOOL _isHoldingConnectionLock;
	int _backgroundConnectionAttempts;
	int _foregroundConnectionAttempts;
	BOOL _voipNetworkDidChange;
	BOOL _checkConnectionScheduledOnStateChange;
	NSMutableArray* _connectionConditionals;
	BOOL _isConnectionCheckingInProgress;
	BOOL _isDisconnectRequested;
	int _suppressReconnectCounter;
	NSMutableArray* _internalDisconnectCallbacks;
	SCNetworkReachabilityRef _reachabilityRef;
	XXStruct_4pnlqD _reachabilityContext;
	BOOL _isCheckingInternetConnection;
	NSString* _lastConnectionErrorMessage;
	unsigned _xmppAuthNetworkStatus;
	WAFieldStatsEventChatConnectionProbe* _connectionProbe;
	BOOL _active;
	int _lastOfflineQueueCount;
	NSString* _serverPropsVersion;
	id<XMPPConnectionDelegate> _delegate;
	XMPPStream* _stream;
	NSObject<OS_dispatch_queue>* _xmppQueue;
	double _voipPushDelayWithSkew;
	double _serverTimeShift;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) unsigned short currentPort;
@property(readonly, assign, nonatomic) NSString* currentHost;
@property(readonly, assign, nonatomic) NSString* currentIP;
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue>* xmppQueue;
@property(readonly, assign, nonatomic) XMPPStream* stream;
@property(assign, nonatomic) __weak id<XMPPConnectionDelegate> delegate;
@property(retain) NSString* serverPropsVersion;
@property(assign) double serverTimeShift;
@property(readonly, copy, nonatomic) NSString* genericNetworkErrorMessage;
@property(readonly, copy, nonatomic) NSString* networkStatusErrorMessage;
@property(assign) double voipPushDelayWithSkew;
@property(assign) int lastOfflineQueueCount;
@property(readonly, assign) unsigned serverConnectionStatus;
@property(readonly, assign) unsigned networkStatus;
@property(readonly, assign, getter=isConnected) BOOL connected;
@property(readonly, assign) unsigned state;
@property(assign, nonatomic, getter=isActive) BOOL active;
+(id)stateToString:(unsigned)string;
-(void).cxx_destruct;
-(id)createPresence:(unsigned)presence withNickname:(id)nickname;
-(id)convertOutgoingEmojiString:(id)string;
-(void)checkInternetConnection;
-(void)radioAccessTechnologyDidChange:(id)radioAccessTechnology;
-(void)reachabilityDidChangeWithFlags:(unsigned)reachability;
-(void)logReachabilityFlags:(unsigned)flags;
-(BOOL)shouldBindToCellular:(BOOL)cellular;
-(void)connectIfPossible;
-(void)checkConnection;
-(BOOL)isSocketHealthy;
-(void)forceLeaveFetchOfflineStateIfNeeded;
-(void)connect;
-(void)resetConnectionAttempts;
-(void)reallyConnect;
-(void)checkFieldStats;
-(void)uploadFieldStats;
-(void)closeStream;
-(BOOL)xmppStream:(id)stream didReceiveLoginResponseStanza:(id)stanza;
-(void)xmppStream:(id)stream initialConfigurationAsync:(id)async;
-(void)xmppStreamDidClose:(id)xmppStream;
-(void)xmppStream:(id)stream didReceiveCustomStanza:(id)stanza;
-(void)xmppStream:(id)stream didReceiveNotification:(id)notification;
-(void)xmppStream:(id)stream didReceiveChatState:(id)state;
-(void)xmppStream:(id)stream didReceiveAck:(id)ack;
-(void)xmppStream:(id)stream didReceiveReceipt:(id)receipt;
-(void)xmppStream:(id)stream didReceivePresence:(id)presence;
-(void)xmppStream:(id)stream didReceiveMessages:(id)messages;
-(void)xmppStream:(id)stream didReceiveIQ:(id)iq;
-(void)xmppStreamDidNotAuthenticate:(id)xmppStream lockDuration:(double)duration retryAfter:(double)after reasonCode:(int)code;
-(void)xmppStreamDidAuthenticate:(id)xmppStream attributes:(id)attributes serverTimeShift:(double)shift;
-(void)xmppStreamDidOpen:(id)xmppStream;
-(void)xmppStreamDidConnect:(id)xmppStream;
-(void)sendAckForNotification:(id)notification;
-(void)sendIQResponse:(id)response;
-(void)reloadPassword;
-(void)ackMediaForURLString:(id)urlstring sourceIsSelf:(BOOL)aSelf completion:(id)completion;
-(void)requestEncUploadUrlForHash:(id)hash filetype:(unsigned)filetype mediaIndex:(int)index totalMediaCount:(int)count completion:(id)completion;
-(void)internalRequestEncUploadUrlForHash:(id)hash filetype:(unsigned)filetype mediaIndex:(int)index totalMediaCount:(int)count completion:(id)completion;
-(void)requestUploadUrlForFileHash:(id)fileHash origHash:(id)hash filetype:(unsigned)filetype filesize:(unsigned long long)filesize mediaIndex:(int)index totalMediaCount:(int)count completion:(id)completion;
-(void)internalRequestUploadUrlForFileHash:(id)fileHash origHash:(id)hash filetype:(unsigned)filetype filesize:(unsigned long long)filesize mediaIndex:(int)index totalMediaCount:(int)count completion:(id)completion;
-(void)ping;
-(void)sendSharedItem:(id)item;
-(void)sendMessageStanza:(id)stanza;
-(void)endMessageTimeout:(id)timeout;
-(void)startMessageTimeout:(id)timeout;
-(void)markMessagesAsUnsent;
-(void)setNetworkStatus:(unsigned)status;
-(void)handleRemotePushWithPayload:(id)payload;
-(void)drop;
-(void)disconnectIfStuckInConnecting;
-(void)disconnect;
-(void)performBlock:(id)block onQueue:(id)queue onConnectionState:(unsigned)state;
-(void)setState:(unsigned)state;
-(void)logConnectionAttemptErrorMessageIfNeeded:(id)needed;
-(void)checkIfConnectionIsAllowedWithCompletionHandler:(id)completionHandler;
-(void)registerConnectionConditional:(id)conditional onQueue:(id)queue;
-(void)setXmppUser:(id)user;
-(void)cancelAllRequests;
-(void)resendAllPendingRequests;
-(void)enqueueRequest:(id)request;
-(BOOL)isRequestPending:(id)pending;
-(void)notifyConnectionHandlersOfOfflineMarker;
-(void)removeConnectionHandler:(id)handler;
-(void)addConnectionHandler:(id)handler;
-(void)systemTimeChanged:(id)changed;
-(void)performBlockOnXMPPQueue:(id)queue;
-(void)dealloc;
-(id)initWithConfiguration:(id)configuration;
-(void)processIncomingCustomStanza:(id)stanza;
-(void)delayedReceiptsUpdate;
-(void)processIncomingAck:(id)ack;
-(void)processIncomingNotification:(id)notification;
-(void)processIncomingChatState:(id)state;
-(void)processIncomingPresence:(id)presence;
-(void)setUpIncomingMessageDispatcherIfNeeded;
-(void)processIncomingMessages:(id)messages;
-(BOOL)isMessageStanzaRecentlyAcked:(id)acked;
-(void)processIncomingIQ:(id)iq;
-(void)performOnStreamOpen;
-(void)sendCallReceiptOrAck:(id)ack;
-(void)sendCallStanza:(id)stanza;
-(void)endCallStanzaTimeout:(id)timeout;
-(void)startCallStanzaTimeout:(id)timeout;
-(void)removeCallWatchdogs;
-(void)sendServerErrorReceiptForMessage:(id)message;
-(void)sendRetryReceiptForMessageId:(id)messageId toJID:(id)jid participant:(id)participant retryCount:(int)count timeAttribute:(id)attribute;
-(void)sendRetryReceiptForMessage:(id)message retryCount:(int)count;
-(void)sendUnknownTagsReceiptForMessage:(id)message unknownTags:(id)tags;
-(void)sendReadReceiptsForChatMessages:(id)chatMessages;
-(void)sendPlayedReceiptForMessage:(id)message;
-(void)sendDeliveryReceiptsForMessageStanzas:(id)messageStanzas;
-(void)sendDeliveryReceiptsForChatMessages:(id)chatMessages;
-(id)processIncomingMessageStanzas:(id)stanzas;
-(void)sendMessage:(id)message forParticipant:(id)participant;
-(void)resendUnsentCallStanzas;
-(void)resendUnsentMessages;
-(void)respondToServerErrorReceiptByResendingMessage:(id)serverErrorReceiptByResendingMessage toParticipant:(id)participant;
-(BOOL)hasPendingRequestsForGroupWithJID:(id)jid participantJID:(id)jid2;
-(void)changeStatus:(unsigned)status forIncomingMessageWithStanzaID:(id)stanzaID fromJID:(id)jid participantJID:(id)jid4;
-(void)cleanDirtyBits:(id)bits completion:(id)completion;
-(void)reportVoipPushDelay:(double)delay;
-(void)sendGlobalPushConfig:(id)config customSettings:(id)settings completion:(id)completion;
-(void)requestCapabilityForJIDs:(id)jids completion:(id)completion;
-(void)resetPresenceStateOnStreamClose;
-(void)updatePresence;
-(void)sendPushName:(id)name;
-(void)sendPresenceWithNickname:(id)nickname;
-(void)resetCachedLastSeen;
-(id)lastSeenTimestampForJID:(id)jid;
-(unsigned)latestChatStateForGroupWithJID:(id)jid returningParticipantJID:(out id*)jid2;
-(unsigned)chatStateForContactWithJID:(id)jid;
-(void)checkIncomingChatStateForJID:(id)jid participantJID:(id)jid2;
-(void)setIncomingChatState:(unsigned)state forJID:(id)jid participantJID:(id)jid3;
-(void)updateLastSentChatState:(unsigned)state forJID:(id)jid;
-(void)reportChatState:(unsigned)state forJID:(id)jid;
-(void)presenceSubscribeToJIDIfNecessary:(id)jidifNecessary;
-(void)resetAllChatStatesAndClearSubscriptions:(BOOL)subscriptions;
-(void)removeClientDataForJID:(id)jid;
-(id)addClientDataForJID:(id)jid;
-(id)clientDataForJID:(id)jid;
-(BOOL)isOnline:(id)online;
-(void)sendRecoveryToken:(id)token completion:(id)completion;
-(void)queryServerPropertiesWithCompletion:(id)completion;
-(void)requestBroadcastListsWithCompletion:(id)completion;
-(void)deleteBroadcastListFromServer:(id)server completion:(id)completion;
-(void)syncPhoneNumbers:(id)numbers deletedJIDs:(id)jids mode:(unsigned)mode context:(unsigned)context timeout:(double)timeout completion:(id)completion;
-(void)requestSyncWithContext:(id)context;
-(void)stopLocationSharingForGroupWithJID:(id)jid;
-(void)requestLocationSharingForGroupWithJID:(id)jid reportParticipants:(BOOL)participants completion:(id)completion;
-(void)setLocationSharingEndTime:(id)time forGroupWithJID:(id)jid completion:(id)completion;
-(void)reportLocation:(id)location;
-(void)requestParticipatingGroupsWithCompletion:(id)completion;
-(void)deleteGroupWithJID:(id)jid completion:(id)completion;
-(void)leaveGroupWithJID:(id)jid webClientRequestID:(id)anId completion:(id)completion;
-(void)requestInfoForGroupWithJID:(id)jid completion:(id)completion;
-(void)demoteParticipants:(id)participants inGroupWithJID:(id)jid completion:(id)completion;
-(void)promoteParticipants:(id)participants inGroupWithJID:(id)jid webClientRequestID:(id)anId completion:(id)completion;
-(void)addParticipants:(id)participants toGroupWithJID:(id)jid webClientRequestID:(id)anId completion:(id)completion;
-(void)removeParticipants:(id)participants fromGroupWithJID:(id)jid webClientRequestID:(id)anId completion:(id)completion;
-(void)setSubject:(id)subject forGroupWithJID:(id)jid webClientRequestID:(id)anId completion:(id)completion;
-(void)createGroupWithSubject:(id)subject participantJIDs:(id)jids key:(id)key locked:(BOOL)locked webClientRequestID:(id)anId completion:(id)completion;
-(void)getProfilePictureForJID:(id)jid type:(unsigned)type identifier:(id)identifier completion:(id)completion;
-(void)setProfilePictureForJID:(id)jid pictureData:(id)data previewData:(id)data3 webClientRequestID:(id)anId completion:(id)completion;
-(void)getStatusForJIDs:(id)jids completion:(id)completion;
-(void)setStatus:(id)status fromWebClientRequestID:(id)webClientRequestID completion:(id)completion;
-(void)setPrivacySettings:(id)settings completion:(id)completion;
-(void)queryPrivacySettingsWithCompletion:(id)completion;
-(void)changeNumberWithUsername:(id)username password:(id)password completion:(id)completion;
-(void)normalizePhoneNumber:(id)number countryCode:(id)code completion:(id)completion;
-(void)deleteAccountWithFeedback:(id)feedback completion:(id)completion;
-(void)reportSpamMessagesInChatSession:(id)chatSession;
-(void)sendBlockedContactsList:(id)list webClientRequestID:(id)anId completion:(id)completion;
-(void)getBlockedContactsListWithCompletion:(id)completion;
@end

