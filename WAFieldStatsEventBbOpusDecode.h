/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAFieldStatsEvent.h"

@interface WAFieldStatsEventBbOpusDecode : WAFieldStatsEvent
{
    double _bb_opus_decode_reason;
    double _bb_opus_decode_successful;
    double _bb_opus_decode_rate;
    double _bb_opus_decode_rate_too_slow;
}

- (void)setBb_opus_decode_rate_too_slow:(double)fp8;
- (double)bb_opus_decode_rate_too_slow;
- (void)setBb_opus_decode_rate:(double)fp8;
- (double)bb_opus_decode_rate;
- (void)setBb_opus_decode_successful:(double)fp8;
- (double)bb_opus_decode_successful;
- (void)setBb_opus_decode_reason:(double)fp8;
- (double)bb_opus_decode_reason;
- (void)submit;
- (id)init;

@end
