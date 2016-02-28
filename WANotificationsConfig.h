/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class AVAudioPlayer, CTCallCenter, NSArray, NSMutableDictionary, NSString, SoundEffect, WAPushSound;

@interface WANotificationsConfig : _ABAddressBookCopyArrayOfAllGroups
{
    CTCallCenter *_callCenter;
    SoundEffect *_incomingSoundEffect;
    SoundEffect *_outgoingSoundEffect;
    AVAudioPlayer *_incomingSoundShort;
    NSMutableDictionary *_lastIncomingSounds;
    NSMutableDictionary *_fetchedCustomConfigs;
    BOOL _needsUpdateServer;
    BOOL _requestInProgress;
    BOOL _playOfflineMessageSound;
    BOOL _chatSoundsEnabled;
    BOOL _chatVibrateEnabled;
    BOOL _showMessagePreview;
    BOOL _personalMessageAlertsEnabled;
    BOOL _groupMessageAlertsEnabled;
    BOOL _callAlertsEnabled;
    unsigned int _inAppAlertStyle;
    NSString *_personalMessageSound;
    NSString *_groupMessageSound;
    NSString *_callSound;
    NSArray *_pushSoundSets;
    NSArray *_ringtoneSets;
    WAPushSound *_defaultRingtone;
}

+ (id)titleForWAAlertStyle:(unsigned int)fp8;
+ (void)promptUserForToUnmuteFromViewController:(id)fp8 completion:(id)fp(null);
+ (void)promptUserForMuteEndDateFromViewController:(id)fp8 completion:(id)fp(null);
- (id)defaultRingtone;
- (id)ringtoneSets;
- (id)pushSoundSets;
- (BOOL)callAlertsEnabled;
- (id)callSound;
- (BOOL)groupMessageAlertsEnabled;
- (id)groupMessageSound;
- (BOOL)personalMessageAlertsEnabled;
- (id)personalMessageSound;
- (BOOL)showMessagePreview;
- (unsigned int)inAppAlertStyle;
- (BOOL)chatVibrateEnabled;
- (BOOL)chatSoundsEnabled;
- (void)setPlayOfflineMessageSound:(BOOL)fp8;
- (BOOL)playOfflineMessageSound;
- (void).cxx_destruct;
- (void)setCallAlertsEnabled:(BOOL)fp8;
- (void)setCallSound:(id)fp8;
- (id)localizedCallSound;
- (void)setGroupMessageAlertsEnabled:(BOOL)fp8;
- (void)setGroupMessageSound:(id)fp8;
- (id)localizedGroupMessageSound;
- (void)setPersonalMessageAlertsEnabled:(BOOL)fp8;
- (void)setPersonalMessageSound:(id)fp8;
- (id)localizedPersonalMessageSound;
- (void)setShowMessagePreview:(BOOL)fp8;
- (void)playOutgoingSoundEffect;
- (void)resetIncomingMessageSoundSquelchFor:(id)fp8;
- (void)playIncomingSoundEffectShort:(id)fp8;
- (void)playIncomingSoundEffect;
- (void)playOutgoingSoundEffectIfAllowed;
- (void)playIncomingSoundEffectForWAMessage:(id)fp8;
- (void)setInAppAlertStyle:(unsigned int)fp8;
- (void)setChatVibrateEnabled:(BOOL)fp8;
- (void)setChatSoundsEnabled:(BOOL)fp8;
- (void)setVoipToken:(id)fp8;
- (id)voipToken;
- (void)setApnsToken:(id)fp8;
- (id)apnsToken;
- (BOOL)hasValidVOIPToken;
- (BOOL)hasValidAPNSToken;
- (void)setCallSound:(id)fp8 forJIDs:(id)fp12;
- (id)localizedCallSoundForJID:(id)fp8;
- (id)callSoundForJID:(id)fp8;
- (void)setPushNotificationSound:(id)fp8 forJIDs:(id)fp12;
- (id)localizedPushNotificationSoundForJID:(id)fp8;
- (id)pushNotificationSoundForJID:(id)fp8;
- (id)defaultPushSoundForJID:(id)fp8;
- (void)setAlertsSetting:(short)fp8 forJIDs:(id)fp12;
- (id)localizedAlertsSettingForJID:(id)fp8;
- (short)alertsSettingForJID:(id)fp8;
- (void)setMuteDate:(id)fp8 forJID:(id)fp12;
- (id)localizedMuteDateForJID:(id)fp8;
- (id)muteDateForJID:(id)fp8;
- (void)updateServerIfNecessary;
- (void)setNeedsUpdateServer;
- (void)chatStorageWillUnloadDatabase:(id)fp8;
- (id)addNewConfigForJID:(id)fp8;
- (id)configForJID:(id)fp8;
- (id)allCustomNotificationConfigs;
- (void)fetchAllCustomNotificationConfigsIfNecessary;
- (void)loadNotificationSounds;
- (void)resetToDefaultsAndUpdateServer:(BOOL)fp8;
- (void)migrateSettings;
- (void)loadGlobalSettings;
- (void)initializeDefaults;
- (id)init;

@end

