/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAFieldStatsEvent.h"

@interface WAFieldStatsEventWebcPhoneDisconnected : WAFieldStatsEvent
{
    double _webc_phone_disconnected_t;
    double _webc_phone_bbar_shown_t;
}

- (void)setWebc_phone_bbar_shown_t:(double)fp8;
- (double)webc_phone_bbar_shown_t;
- (void)setWebc_phone_disconnected_t:(double)fp8;
- (double)webc_phone_disconnected_t;
- (void)submit;
- (id)init;

@end
