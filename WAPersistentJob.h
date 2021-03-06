/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAJobDelegate.h"
#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSArray, WAJob;
@protocol WAPersistentJobDelegate;

__attribute__((visibility("hidden")))
@interface WAPersistentJob : NSManagedObject <WAJobDelegate> {
	BOOL _blocked;
	id<WAPersistentJobDelegate> _delegate;
	WAJob* _job;
	unsigned _jobToken;
}
@property(readonly, assign, nonatomic) NSString* descriptiveName;
@property(readonly, assign, nonatomic) BOOL valid;
@property(readonly, assign, nonatomic) unsigned maxRetryCount;
@property(readonly, assign, nonatomic) NSString* groupId;
@property(readonly, assign, nonatomic) NSArray* requirements;
@property(assign, nonatomic) unsigned jobToken;
@property(retain, nonatomic) WAJob* job;
@property(assign, nonatomic) __weak id<WAPersistentJobDelegate> delegate;
@property(assign, nonatomic) BOOL blocked;
@property(retain, nonatomic) NSData* jobData;
@property(assign, nonatomic) unsigned retryCount;
@property(assign, nonatomic) unsigned persistentId;
-(void).cxx_destruct;
-(void)didUnblock:(id)unblock withResult:(unsigned)result;
-(void)didCancelJob;
-(unsigned)execute;
-(void)awakeFromFetch;
-(void)awakeFromInsert;
-(void)reloadJobForRetryIfNecessary;
@end

