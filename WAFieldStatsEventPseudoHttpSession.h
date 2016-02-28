/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAFieldStatsEvent.h"

@interface WAFieldStatsEventPseudoHttpSession : WAFieldStatsEvent
{
    double _pseudo_http_total_bytes_sent;
    double _pseudo_http_total_bytes_received;
    double _pseudo_http_header_bytes_sent;
    double _pseudo_http_header_bytes_received;
    double _pseudo_http_send_overhead_t;
    double _pseudo_http_receive_overhead_t;
}

- (void)setPseudo_http_receive_overhead_t:(double)fp8;
- (double)pseudo_http_receive_overhead_t;
- (void)setPseudo_http_send_overhead_t:(double)fp8;
- (double)pseudo_http_send_overhead_t;
- (void)setPseudo_http_header_bytes_received:(double)fp8;
- (double)pseudo_http_header_bytes_received;
- (void)setPseudo_http_header_bytes_sent:(double)fp8;
- (double)pseudo_http_header_bytes_sent;
- (void)setPseudo_http_total_bytes_received:(double)fp8;
- (double)pseudo_http_total_bytes_received;
- (void)setPseudo_http_total_bytes_sent:(double)fp8;
- (double)pseudo_http_total_bytes_sent;
- (void)submit;
- (id)init;

@end

