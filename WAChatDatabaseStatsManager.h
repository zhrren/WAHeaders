/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class WAChatStorage, NSManagedObjectModel, NSPersistentStoreCoordinator, NSManagedObjectContext, NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface WAChatDatabaseStatsManager : NSObject {
	WAChatStorage* _chatStorage;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _managedObjectContext;
	NSURL* _persistentStoreURL;
	BOOL _isLoading;
	float _loadingProgress;
	NSArray* _allChatJIDs;
}
@property(retain, nonatomic) NSArray* allChatJIDs;
@property(readonly, assign, nonatomic) float loadingProgress;
@property(readonly, assign, nonatomic) BOOL isLoading;
-(void).cxx_destruct;
-(void)refreshStatsRecurring:(BOOL)recurring;
-(void)saveContext;
-(void)insertStatsToDB:(id)db;
-(id)queryStatsForJID:(id)jid isRecurring:(BOOL)recurring;
-(void)deleteAllNonrecurringStats;
-(void)deleteDB;
-(void)makeNewDB;
-(id)fetchedResultsControllerForSort:(int)sort;
-(id)managedObjectContext;
-(id)persistentStoreCoordinator;
-(id)managedObjectModel;
-(id)persistentStoreURL;
-(id)persistentStorePath;
-(id)initWithStorage:(id)storage;
@end

