/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAFieldStatsEvent.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WAFieldStatsEventReviewedBan : WAFieldStatsEvent {
	NSString* _app_version;
	NSString* _ban_origin;
	NSString* _unban_origin;
	NSString* _reviewed_origin;
	NSString* _ban_reason;
	NSString* _watch_reason;
	NSString* _ip;
	double _platform;
	double _bounce_count;
	double _groups_created;
	double _groups_participating;
	double _ban_flag_fake_s40;
	double _ban_flag_pinger;
	double _ban_flag_modded;
	double _ban_flag_was_modded;
	double _ban_flag_needs_legit;
	double _asn;
	double _account_create_ts;
	double _ban_is_compliant;
	double _ban_gen;
	double _temp_ban_gen;
	double _is_unban_on_email;
}
@property(assign, nonatomic) double is_unban_on_email;
@property(assign, nonatomic) double temp_ban_gen;
@property(assign, nonatomic) double ban_gen;
@property(assign, nonatomic) double ban_is_compliant;
@property(assign, nonatomic) double account_create_ts;
@property(retain, nonatomic) NSString* ip;
@property(assign, nonatomic) double asn;
@property(assign, nonatomic) double ban_flag_needs_legit;
@property(assign, nonatomic) double ban_flag_was_modded;
@property(assign, nonatomic) double ban_flag_modded;
@property(assign, nonatomic) double ban_flag_pinger;
@property(assign, nonatomic) double ban_flag_fake_s40;
@property(retain, nonatomic) NSString* watch_reason;
@property(retain, nonatomic) NSString* ban_reason;
@property(retain, nonatomic) NSString* reviewed_origin;
@property(retain, nonatomic) NSString* unban_origin;
@property(retain, nonatomic) NSString* ban_origin;
@property(assign, nonatomic) double groups_participating;
@property(assign, nonatomic) double groups_created;
@property(assign, nonatomic) double bounce_count;
@property(retain, nonatomic) NSString* app_version;
@property(assign, nonatomic) double platform;
-(void).cxx_destruct;
-(void)submit;
-(id)init;
@end

