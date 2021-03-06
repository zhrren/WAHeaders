/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAFieldStatsEvent.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WAFieldStatsEventPlacesApiQuery : WAFieldStatsEvent {
	NSString* _places_api_failure_description;
	NSString* _places_api_query_string;
	double _places_api_source;
	double _places_api_source_default;
	double _places_api_response;
	double _places_api_request_index;
	double _places_api_cached;
	double _places_api_places_count;
	double _places_api_response_t;
}
@property(assign, nonatomic) double places_api_response_t;
@property(assign, nonatomic) double places_api_places_count;
@property(retain, nonatomic) NSString* places_api_query_string;
@property(assign, nonatomic) double places_api_cached;
@property(assign, nonatomic) double places_api_request_index;
@property(retain, nonatomic) NSString* places_api_failure_description;
@property(assign, nonatomic) double places_api_response;
@property(assign, nonatomic) double places_api_source_default;
@property(assign, nonatomic) double places_api_source;
-(void).cxx_destruct;
-(void)submit;
-(id)init;
@end

