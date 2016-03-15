/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAUpgradeCallback.h"
#import </libobjc.A.h>

@class NSString, NSMutableArray;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface WATaskManager : NSObject <WAUpgradeCallback> {
	BOOL _isRunning;
	NSMutableArray* _tasks;
	unsigned _counter;
	NSObject<OS_dispatch_group>* _dispatchGroup;
	unsigned _quietTimeCounter;
	BOOL _interfaceIsIdle;
	BOOL _isBatteryLow;
	BOOL _isInLowPowerMode;
	BOOL _isInBackground;
	BOOL _paused;
	double _minimumIntervalBetweenTasks;
	double _minimumDelayBeforeIdle;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic, getter=isPaused) BOOL paused;
@property(assign, nonatomic) double minimumDelayBeforeIdle;
@property(assign, nonatomic) double minimumIntervalBetweenTasks;
+(void)wa_didUpgradeFrom:(id)from to:(id)to;
+(id)defaultManager;
-(void).cxx_destruct;
-(void)applicationDidEnterBackground:(id)application;
-(void)applicationWillEnterForeground:(id)application;
-(void)setBackgroundState:(BOOL)state;
-(void)lowPowerModeDidChange:(id)lowPowerMode;
-(void)batteryLevelDidChange:(id)batteryLevel;
-(void)batteryStateDidChange:(id)batteryState;
-(void)updateLowPowerMode;
-(void)updateIsBatteryLow;
-(void)performOneTask;
-(void)restartQueueIfNeeded;
-(void)scheduleTask:(id)task;
-(void)endQuietTime;
-(void)beginQuietTimeWithCompletionHandler:(id)completionHandler;
-(void)beginQuietTime;
-(void)endQuietTimeAfterDelay;
-(void)reportEvent:(id)event;
-(void)dealloc;
-(id)init;
@end

