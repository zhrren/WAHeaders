/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAFieldStatsEvent.h"

@interface WAFieldStatsEventNetworkChange : WAFieldStatsEvent
{
    double _network_radio_type;
    double _network_is_wifi;
    double _network_is_roaming;
}

- (void)setNetwork_is_roaming:(double)fp8;
- (double)network_is_roaming;
- (void)setNetwork_is_wifi:(double)fp8;
- (double)network_is_wifi;
- (void)setNetwork_radio_type:(double)fp8;
- (double)network_radio_type;
- (void)submit;
- (id)init;

@end
