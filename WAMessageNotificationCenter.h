/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WANotificationWindowDelegate.h"
#import </libobjc.A.h>

@class SoundEffect, NSMutableDictionary, NSArray, NSMutableArray, CTCallCenter, WAPushSound, AVAudioPlayer, NSString, WANotificationWindow;

__attribute__((visibility("hidden")))
@interface WAMessageNotificationCenter : NSObject <WANotificationWindowDelegate> {
	CTCallCenter* _callCenter;
	SoundEffect* _incomingSoundEffect;
	SoundEffect* _outgoingSoundEffect;
	AVAudioPlayer* _incomingSoundShort;
	NSMutableDictionary* _lastIncomingSounds;
	NSMutableDictionary* _lastNotificationTimeForChat;
	NSMutableDictionary* _fetchedCustomConfigs;
	BOOL _isUsingSilentPush;
	BOOL _needsUpdateServer;
	BOOL _requestInProgress;
	NSMutableArray* _presentedInAppNotificationAlerts;
	NSMutableArray* _deferredInAppNotificationAlerts;
	WANotificationWindow* _notificationWindow;
	unsigned _timeoutCounter;
	NSMutableDictionary* _activeAlertViews;
	NSMutableDictionary* _postedLocalNotifications;
	BOOL _playOfflineMessageSound;
	BOOL _chatSoundsEnabled;
	BOOL _chatVibrateEnabled;
	BOOL _showMessagePreview;
	BOOL _personalMessageAlertsEnabled;
	BOOL _groupMessageAlertsEnabled;
	BOOL _callAlertsEnabled;
	BOOL _ignoreNotifications;
	unsigned _inAppAlertStyle;
	NSString* _personalMessageSound;
	NSString* _groupMessageSound;
	NSString* _callSound;
	NSArray* _pushSoundSets;
	NSArray* _ringtoneSets;
	WAPushSound* _defaultRingtone;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL ignoreNotifications;
@property(readonly, assign, nonatomic) WAPushSound* defaultRingtone;
@property(readonly, assign, nonatomic) NSArray* ringtoneSets;
@property(readonly, assign, nonatomic) NSArray* pushSoundSets;
@property(assign, nonatomic) BOOL callAlertsEnabled;
@property(readonly, assign, nonatomic) NSString* localizedCallSound;
@property(copy, nonatomic) NSString* callSound;
@property(assign, nonatomic) BOOL groupMessageAlertsEnabled;
@property(readonly, assign, nonatomic) NSString* localizedGroupMessageSound;
@property(copy, nonatomic) NSString* groupMessageSound;
@property(assign, nonatomic) BOOL personalMessageAlertsEnabled;
@property(readonly, assign, nonatomic) NSString* localizedPersonalMessageSound;
@property(copy, nonatomic) NSString* personalMessageSound;
@property(assign, nonatomic) BOOL showMessagePreview;
@property(assign, nonatomic) unsigned inAppAlertStyle;
@property(assign, nonatomic) BOOL chatVibrateEnabled;
@property(assign, nonatomic) BOOL chatSoundsEnabled;
@property(assign) BOOL playOfflineMessageSound;
@property(copy, nonatomic) NSString* voipToken;
@property(copy, nonatomic) NSString* apnsToken;
+(id)titleForWAAlertStyle:(unsigned)waalertStyle;
+(void)promptUserForToUnmuteFromViewController:(id)viewController completion:(id)completion;
+(void)promptUserForMuteEndDateFromViewController:(id)viewController completion:(id)completion;
-(void).cxx_destruct;
-(BOOL)shouldSuppressSoundForMessage:(id)message;
-(void)saveNotificationTimeForMessage:(id)message;
-(void)presentLocalNotificationForMessage:(id)message fromUser:(id)user withSoundEffect:(BOOL)soundEffect retryAfterDelay:(BOOL)delay;
-(void)presentLocalNotificationIfNeededForMessage:(id)message fromUser:(id)user withSoundEffect:(BOOL)soundEffect;
-(void)didDismissAlertView:(id)view;
-(void)showAlertView:(id)view;
-(void)launchChatFromInAppAlert:(id)appAlert forJID:(id)jid;
-(void)showInAppNotificationAlertForMessage:(id)message;
-(void)notificationWindowDidCancel:(id)notificationWindow;
-(void)notificationWindowTapped:(id)tapped;
-(void)showInAppNotificationBannerForMessage:(id)message;
-(void)showInAppNotificationForMessage:(id)message;
-(void)processDeferredNotificationsByDiscardingNotifications:(BOOL)notifications;
-(void)showInAppNotificationForIncomingMessage:(id)incomingMessage withSoundEffect:(BOOL)soundEffect;
-(BOOL)isChatSessionMuted:(id)muted;
-(void)presentNotificationForMessage:(id)message fromSenderName:(id)senderName withSoundEffect:(BOOL)soundEffect;
-(void)presentNotificationForMessage:(id)message fromSenderName:(id)senderName;
-(void)clearAllNotificationTimeouts;
-(void)playOutgoingSoundEffect;
-(void)resetIncomingMessageSoundSquelchFor:(id)aFor;
-(void)playIncomingSoundEffectShort:(id)aShort;
-(void)playIncomingSoundEffect;
-(void)playOutgoingSoundEffectIfAllowed;
-(void)playIncomingSoundEffectForWAMessage:(id)wamessage;
-(BOOL)hasValidVOIPToken;
-(BOOL)hasValidAPNSToken;
-(void)setCallSound:(id)sound forJIDs:(id)jids;
-(id)localizedCallSoundForJID:(id)jid;
-(id)callSoundForJID:(id)jid;
-(void)setPushNotificationSound:(id)sound forJIDs:(id)jids;
-(id)localizedPushNotificationSoundForJID:(id)jid;
-(id)pushNotificationSoundForJID:(id)jid;
-(id)defaultPushSoundForJID:(id)jid;
-(void)setAlertsSetting:(short)setting forJIDs:(id)jids;
-(id)localizedAlertsSettingForJID:(id)jid;
-(short)alertsSettingForJID:(id)jid;
-(void)setMuteDate:(id)date forJID:(id)jid;
-(id)localizedMuteDateForJID:(id)jid;
-(id)muteDateForJID:(id)jid;
-(BOOL)isChatWithJIDMuted:(id)jidmuted;
-(void)updateServerIfNecessary;
-(void)setNeedsUpdateServer;
-(void)chatStorageWillUnloadDatabase:(id)chatStorage;
-(id)addNewConfigForJID:(id)jid;
-(id)configForJID:(id)jid;
-(id)allCustomNotificationConfigs;
-(void)fetchAllCustomNotificationConfigsIfNecessary;
-(void)loadNotificationSounds;
-(void)resetToDefaultsAndUpdateServer:(BOOL)defaultsAndUpdateServer;
-(void)migrateSettings;
-(void)loadGlobalSettings;
-(void)initializeDefaults;
-(void)applicationDidBecomeActive:(id)application;
-(void)dealloc;
-(id)init;
@end

