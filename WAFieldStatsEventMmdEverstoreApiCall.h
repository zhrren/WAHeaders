/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAFieldStatsEvent.h"

@class NSString;

@interface WAFieldStatsEventMmdEverstoreApiCall : WAFieldStatsEvent
{
    NSString *_mmd_everstore_operation;
    NSString *_mmd_everstore_handle;
    NSString *_server_name;
    NSString *_server_location;
    NSString *_mmd_everstore_origin_host;
    NSString *_mmd_everstore_origin_hit;
    NSString *_mmd_everstore_edge_host;
    NSString *_mmd_everstore_edge_hit;
    NSString *_mmd_everstore_fb_debug;
    double _mmd_everstore_operation_is_successful;
    double _retry_count;
    double _mmd_everstore_curl_exit_code;
    double _http_status_code;
    double _mmd_everstore_api_call_t;
    double _mmd_everstore_object_size;
}

- (void)setMmd_everstore_object_size:(double)fp8;
- (double)mmd_everstore_object_size;
- (void)setMmd_everstore_api_call_t:(double)fp8;
- (double)mmd_everstore_api_call_t;
- (void)setMmd_everstore_fb_debug:(id)fp8;
- (id)mmd_everstore_fb_debug;
- (void)setMmd_everstore_edge_hit:(id)fp8;
- (id)mmd_everstore_edge_hit;
- (void)setMmd_everstore_edge_host:(id)fp8;
- (id)mmd_everstore_edge_host;
- (void)setMmd_everstore_origin_hit:(id)fp8;
- (id)mmd_everstore_origin_hit;
- (void)setMmd_everstore_origin_host:(id)fp8;
- (id)mmd_everstore_origin_host;
- (void)setServer_location:(id)fp8;
- (id)server_location;
- (void)setServer_name:(id)fp8;
- (id)server_name;
- (void)setHttp_status_code:(double)fp8;
- (double)http_status_code;
- (void)setMmd_everstore_curl_exit_code:(double)fp8;
- (double)mmd_everstore_curl_exit_code;
- (void)setMmd_everstore_handle:(id)fp8;
- (id)mmd_everstore_handle;
- (void)setRetry_count:(double)fp8;
- (double)retry_count;
- (void)setMmd_everstore_operation_is_successful:(double)fp8;
- (double)mmd_everstore_operation_is_successful;
- (void)setMmd_everstore_operation:(id)fp8;
- (id)mmd_everstore_operation;
- (void).cxx_destruct;
- (void)submit;
- (id)init;

@end

