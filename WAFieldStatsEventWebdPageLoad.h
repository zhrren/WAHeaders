/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAFieldStatsEvent.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WAFieldStatsEventWebdPageLoad : WAFieldStatsEvent {
	NSString* _webclient_version;
	double _webd_page_fresh;
	double _webd_page_load_t;
}
@property(assign, nonatomic) double webd_page_load_t;
@property(retain, nonatomic) NSString* webclient_version;
@property(assign, nonatomic) double webd_page_fresh;
-(void).cxx_destruct;
-(void)submit;
-(id)init;
@end

