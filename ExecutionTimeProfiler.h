/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSDate, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ExecutionTimeProfiler : NSObject {
	NSMutableDictionary* beginDates;
	NSMutableDictionary* endDates;
	NSDate* beginDate;
	NSDate* endDate;
}
@property(retain, nonatomic) NSDate* endDate;
@property(retain, nonatomic) NSDate* beginDate;
-(void).cxx_destruct;
-(id)result;
-(double)durationForTask:(id)task;
-(double)timeFromStart;
-(double)totalTime;
-(void)endTask:(id)task;
-(void)beginTask:(id)task;
-(void)end;
-(void)begin;
-(id)init;
@end

