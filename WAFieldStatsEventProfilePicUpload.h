/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAFieldStatsEvent.h"

@interface WAFieldStatsEventProfilePicUpload : WAFieldStatsEvent
{
    double _profile_pic_upload_result;
    double _retry_count;
    double _profile_pic_upload_t;
    double _profile_pic_size;
}

- (void)setProfile_pic_size:(double)fp8;
- (double)profile_pic_size;
- (void)setProfile_pic_upload_t:(double)fp8;
- (double)profile_pic_upload_t;
- (void)setRetry_count:(double)fp8;
- (double)retry_count;
- (void)setProfile_pic_upload_result:(double)fp8;
- (double)profile_pic_upload_result;
- (void)submit;
- (id)init;

@end

