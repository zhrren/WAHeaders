/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAFieldStatsEvent.h"


__attribute__((visibility("hidden")))
@interface WAFieldStatsEventWebcChatOpen : WAFieldStatsEvent {
	double _webc_unread_count;
	double _webc_chat_open_t;
}
@property(assign, nonatomic) double webc_chat_open_t;
@property(assign, nonatomic) double webc_unread_count;
-(void)submit;
-(id)init;
@end

