/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAFieldStatsEvent.h"

@interface WAFieldStatsEventLogin : WAFieldStatsEvent
{
    double _login_result;
    double _retry_count;
    double _login_t;
}

- (void)setLogin_t:(double)fp8;
- (double)login_t;
- (void)setRetry_count:(double)fp8;
- (double)retry_count;
- (void)setLogin_result:(double)fp8;
- (double)login_result;
- (void)submit;
- (id)init;

@end
