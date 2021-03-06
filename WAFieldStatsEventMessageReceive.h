/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAFieldStatsEvent.h"


__attribute__((visibility("hidden")))
@interface WAFieldStatsEventMessageReceive : WAFieldStatsEvent {
	double _message_type;
	double _message_media_type;
	double _num_of_web_urls_in_text_message;
	double _message_is_international;
	double _message_is_offline;
	double _message_receive_t0;
	double _message_receive_t1;
}
@property(assign, nonatomic) double message_receive_t1;
@property(assign, nonatomic) double message_receive_t0;
@property(assign, nonatomic) double message_is_offline;
@property(assign, nonatomic) double message_is_international;
@property(assign, nonatomic) double num_of_web_urls_in_text_message;
@property(assign, nonatomic) double message_media_type;
@property(assign, nonatomic) double message_type;
-(void)submit;
-(id)init;
@end

