/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAUpgradeCallback.h"
#import </libobjc.A.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WASharedAppData : NSObject <WAUpgradeCallback> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(void)sendDataToServer:(id)server;
+(void)handleClientConnection:(int)connection;
+(BOOL)startIPCServer;
+(id)IPCSocketPath;
+(void)unlockConnection;
+(void)lockConnection;
+(BOOL)tryConnectionLock;
+(void)unmigrateData;
+(void)migrateUserPreferences;
+(void)migrateData;
+(BOOL)isDataInAppGroup;
+(void)showAlertText:(id)text fromViewController:(id)viewController;
+(void)setPhoneNumber:(id)number;
+(id)phoneNumber;
+(void)setCountryCode:(id)code;
+(id)countryCode;
+(void)removePasswordFile;
+(BOOL)setPassword:(id)password;
+(id)password;
+(id)passwordFilePathInMainContainer;
+(id)passwordFilePathInAppGroup;
+(id)passwordFilePath;
+(id)normalizedNumberFromJID:(id)jid;
+(id)normalizedNumber;
+(void)setUserJID:(id)jid;
+(id)userJID;
+(void)showCriticallyLowStorageAlert;
+(void)showLocalNotificationForJailbrokenPhoneAndTerminate;
+(void)setStatusBarStyle:(int)style animated:(BOOL)animated;
+(void)setStatusBarHidden:(BOOL)hidden withAnimation:(int)animation;
+(void)endIgnoringInteractionEventsInExtension;
+(void)beginIgnoringInteractionEventsInExtension;
+(void)endIgnoringInteractionEvents;
+(void)beginIgnoringInteractionEvents;
+(void)endBackgroundTask:(unsigned)task;
+(unsigned)beginBackgroundTaskWithName:(id)name forced:(BOOL)forced expirationHandler:(id)handler;
+(unsigned)beginBackgroundTaskWithName:(id)name expirationHandler:(id)handler;
+(void)internalEndBackgroundTask:(unsigned)task;
+(unsigned)internalBeginBackgroundTaskWithExpirationHandler:(id)expirationHandler;
+(void)prepareToSuspend;
+(void)setDidResumeHandler:(id)resumeHandler;
+(void)setWillSuspendHandler:(id)suspendHandler;
+(void)resetSuspendingIfNeeded;
+(void)checkApplicationBackgroundState;
+(void)setUpMainBackgroundTaskIfNeeded;
+(void)applicationWillEnterForeground:(id)application;
+(void)applicationDidEnterBackground:(id)application;
+(id)sharedApplication;
+(BOOL)isRestoreInProgress;
+(BOOL)isBackupInProgress;
+(id)launchTime;
+(double)backgroundTimeRemaining;
+(int)applicationState;
+(BOOL)isVOIPCallActive;
+(BOOL)hasVOIPCallStarted;
+(BOOL)isWebClientAvailable;
+(BOOL)isUserAvailable;
+(id)URLSessionManager;
+(void*)sharedAddressBook;
+(id)profilePictureManager;
+(id)xmppConnection;
+(id)messageNotificationCenter;
+(id)contactsStorage;
+(id)chatStorage;
+(id)jobsDatabaseURLInMainContainer;
+(id)jobsDatabaseURLInAppGroup;
+(id)jobsDatabaseURL;
+(id)axolotlDatabaseURLInMainContainer;
+(id)axolotlDatabaseURLInAppGroup;
+(id)axolotlDatabaseURL;
+(id)sharedLogsDirectoryURL;
+(id)profilePicturesStorageDirectoryInMainContainer;
+(id)profilePicturesStorageDirectoryInAppGroup;
+(id)contactsDatabaseURLInMainContainer;
+(id)contactsDatabaseURLInAppGroup;
+(id)contactsDatabaseURL;
+(id)chatSearchDatabaseURLInMainContainer;
+(id)chatSearchDatabaseURLInAppGroup;
+(id)chatSearchDatabaseURL;
+(id)chatDatabaseURLInMainContainer;
+(id)chatDatabaseURLInAppGroup;
+(id)chatDatabaseURL;
+(id)sharedItemOutboxesURL;
+(id)userDefaults;
+(id)appGroupURL;
+(void)registerExtensionContainerView:(id)view;
+(BOOL)isRunningAsExtension;
+(BOOL)isChatDatabaseAccessible;
+(void)wa_didUpgradeFrom:(id)from to:(id)to;
+(void)prepareConnectionLock;
+(void)registerConnectionConditionals;
+(void)prepareBackgroundTaskManagement;
+(BOOL)prepareAppContainer;
+(void)setFBUUIDIfNeeded;
+(BOOL)internalPrepare;
+(BOOL)prepare;
@end

