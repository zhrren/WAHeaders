/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAFieldStatsEvent.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WAFieldStatsEventCdbRegeneration : WAFieldStatsEvent {
	NSString* _s40_cdb_name;
	double _s40_cdb_file_size;
	double _s40_cdb_journal_file_size;
	double _s40_cdb_regenerate_t;
}
@property(assign, nonatomic) double s40_cdb_regenerate_t;
@property(assign, nonatomic) double s40_cdb_journal_file_size;
@property(assign, nonatomic) double s40_cdb_file_size;
@property(retain, nonatomic) NSString* s40_cdb_name;
-(void).cxx_destruct;
-(void)submit;
-(id)init;
@end

