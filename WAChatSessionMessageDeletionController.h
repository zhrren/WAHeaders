/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSDate, WAChatSession, UIViewController;

__attribute__((visibility("hidden")))
@interface WAChatSessionMessageDeletionController : NSObject {
	UIViewController* _presentingVC;
	WAChatSessionMessageDeletionController* _retainedSelf;
	id _completionHandler;
	id _confirmationHandler;
	WAChatSession* _chatSession;
	NSDate* _beforeDate;
	BOOL _keepStarredMessages;
	BOOL _deleteMessagesWithMediaOnly;
}
+(void)promptUserForOptionsToDeleteChatSession:(id)deleteChatSession fromViewController:(id)viewController confirmationHandler:(id)handler completionHandler:(id)handler4;
-(void).cxx_destruct;
-(void)promptForBeforeDate;
-(void)promptToLimitToMessagesWithMedia;
-(void)proceedFinally;
-(void)promptToKeepStarredMessages;
-(id)actionSheet;
-(void)invokeCompletionHandlerWithOutcome:(unsigned)outcome;
-(void)start;
-(id)initWithChatSession:(id)chatSession presentingViewController:(id)controller confirmationHandler:(id)handler completionHandler:(id)handler4;
@end

