/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol WAVoiceCallViewControllerDelegate <NSObject>
-(void)voiceCallViewController:(id)controller didRequestToShowChatWithJID:(id)jid presentKeyboard:(BOOL)keyboard;
-(id)voiceCallViewControllerNeedsUpdatedSnapshot:(id)snapshot;
-(void)voiceCallViewControllerWillResignActive:(id)voiceCallViewController;
-(void)voiceCallViewControllerDidFinish:(id)voiceCallViewController;
-(void)voiceCallViewControllerWillFinish:(id)voiceCallViewController;
@end

