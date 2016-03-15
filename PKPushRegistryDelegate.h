/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol PKPushRegistryDelegate <NSObject>
-(void)pushRegistry:(id)registry didReceiveIncomingPushWithPayload:(id)payload forType:(id)type;
-(void)pushRegistry:(id)registry didUpdatePushCredentials:(id)credentials forType:(id)type;
@optional
-(void)pushRegistry:(id)registry didInvalidatePushTokenForType:(id)type;
@end

