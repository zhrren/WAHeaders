/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _XMPPConnectionCallback : NSObject {
	NSObject<OS_dispatch_queue>* _queue;
	id _callback;
}
-(void).cxx_destruct;
-(void)notifyWithDispatchGroup:(id)dispatchGroup;
-(id)initWithQueue:(id)queue block:(id)block;
@end

