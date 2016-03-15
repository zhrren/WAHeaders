/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSDate, WAChatSession;

__attribute__((visibility("hidden")))
@interface WAMessageBulkDeletionOptions : NSObject {
	BOOL _deleteMessagesWithMediaOnly;
	BOOL _keepStarredMessages;
	BOOL _fromWebClient;
	NSDate* _beforeDate;
	WAChatSession* _chatSession;
	int _batchSize;
}
@property(assign, nonatomic) int batchSize;
@property(assign, nonatomic) BOOL fromWebClient;
@property(assign, nonatomic) BOOL keepStarredMessages;
@property(assign, nonatomic) BOOL deleteMessagesWithMediaOnly;
@property(retain, nonatomic) WAChatSession* chatSession;
@property(copy, nonatomic) NSDate* beforeDate;
-(void).cxx_destruct;
-(id)init;
@end
