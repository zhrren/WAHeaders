/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FMDatabasePool : NSObject {
	NSString* _path;
	NSObject<OS_dispatch_queue>* _lockQueue;
	NSMutableArray* _databaseInPool;
	NSMutableArray* _databaseOutPool;
	id _delegate;
	unsigned _maximumNumberOfDatabasesToCreate;
	int _openFlags;
}
@property(readonly, assign) int openFlags;
@property(assign) unsigned maximumNumberOfDatabasesToCreate;
@property(assign) id delegate;
@property(retain) NSString* path;
+(id)databasePoolWithPath:(id)path flags:(int)flags;
+(id)databasePoolWithPath:(id)path;
-(void).cxx_destruct;
-(id)inSavePoint:(id)savePoint;
-(void)inTransaction:(id)transaction;
-(void)inDeferredTransaction:(id)deferredTransaction;
-(void)beginTransaction:(BOOL)transaction withBlock:(id)block;
-(void)inDatabase:(id)database;
-(void)releaseAllDatabases;
-(unsigned)countOfOpenDatabases;
-(unsigned)countOfCheckedOutDatabases;
-(unsigned)countOfCheckedInDatabases;
-(id)db;
-(void)pushDatabaseBackInPool:(id)pool;
-(void)executeLocked:(id)locked;
-(void)dealloc;
-(id)init;
-(id)initWithPath:(id)path;
-(id)initWithPath:(id)path flags:(int)flags;
@end

