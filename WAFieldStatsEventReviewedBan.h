/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAFieldStatsEvent.h"

@class NSString;

@interface WAFieldStatsEventReviewedBan : WAFieldStatsEvent
{
    NSString *_app_version;
    NSString *_ban_origin;
    NSString *_unban_origin;
    NSString *_reviewed_origin;
    NSString *_ban_reason;
    NSString *_watch_reason;
    NSString *_ip;
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

- (void)setIs_unban_on_email:(double)fp8;
- (double)is_unban_on_email;
- (void)setTemp_ban_gen:(double)fp8;
- (double)temp_ban_gen;
- (void)setBan_gen:(double)fp8;
- (double)ban_gen;
- (void)setBan_is_compliant:(double)fp8;
- (double)ban_is_compliant;
- (void)setAccount_create_ts:(double)fp8;
- (double)account_create_ts;
- (void)setIp:(id)fp8;
- (id)ip;
- (void)setAsn:(double)fp8;
- (double)asn;
- (void)setBan_flag_needs_legit:(double)fp8;
- (double)ban_flag_needs_legit;
- (void)setBan_flag_was_modded:(double)fp8;
- (double)ban_flag_was_modded;
- (void)setBan_flag_modded:(double)fp8;
- (double)ban_flag_modded;
- (void)setBan_flag_pinger:(double)fp8;
- (double)ban_flag_pinger;
- (void)setBan_flag_fake_s40:(double)fp8;
- (double)ban_flag_fake_s40;
- (void)setWatch_reason:(id)fp8;
- (id)watch_reason;
- (void)setBan_reason:(id)fp8;
- (id)ban_reason;
- (void)setReviewed_origin:(id)fp8;
- (id)reviewed_origin;
- (void)setUnban_origin:(id)fp8;
- (id)unban_origin;
- (void)setBan_origin:(id)fp8;
- (id)ban_origin;
- (void)setGroups_participating:(double)fp8;
- (double)groups_participating;
- (void)setGroups_created:(double)fp8;
- (double)groups_created;
- (void)setBounce_count:(double)fp8;
- (double)bounce_count;
- (void)setApp_version:(id)fp8;
- (id)app_version;
- (void)setPlatform:(double)fp8;
- (double)platform;
- (void).cxx_destruct;
- (void)submit;
- (id)init;

@end

