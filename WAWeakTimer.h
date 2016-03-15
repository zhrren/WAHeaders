/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class WAForwardingTimer;

__attribute__((visibility("hidden")))
@interface WAWeakTimer : NSObject {
	WAForwardingTimer* _timer;
	id _action;
}
@property(copy, nonatomic) id action;
@property(retain, nonatomic) WAForwardingTimer* timer;
-(void).cxx_destruct;
-(void)invalidate;
-(void)fireTimer:(id)timer;
-(void)dealloc;
-(id)initWithTimeInterval:(double)timeInterval repeats:(BOOL)repeats action:(id)action;
@end

