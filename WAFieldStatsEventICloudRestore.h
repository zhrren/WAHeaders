/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAFieldStatsEvent.h"


__attribute__((visibility("hidden")))
@interface WAFieldStatsEventICloudRestore : WAFieldStatsEvent {
	double _icloud_restore_result;
	double _icloud_restore_start_reason;
	double _icloud_restore_integrity_check_result;
	double _icloud_download_t;
	double _icloud_extract_t;
	double _icloud_size;
}
@property(assign, nonatomic) double icloud_size;
@property(assign, nonatomic) double icloud_extract_t;
@property(assign, nonatomic) double icloud_download_t;
@property(assign, nonatomic) double icloud_restore_integrity_check_result;
@property(assign, nonatomic) double icloud_restore_start_reason;
@property(assign, nonatomic) double icloud_restore_result;
-(void)submit;
-(id)init;
@end

