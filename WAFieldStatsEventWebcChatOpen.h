/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAFieldStatsEvent.h"

@interface WAFieldStatsEventWebcChatOpen : WAFieldStatsEvent
{
    double _webc_unread_count;
    double _webc_chat_open_t;
}

- (void)setWebc_chat_open_t:(double)fp8;
- (double)webc_chat_open_t;
- (void)setWebc_unread_count:(double)fp8;
- (double)webc_unread_count;
- (void)submit;
- (id)init;

@end
