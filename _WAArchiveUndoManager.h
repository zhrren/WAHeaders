/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSUndoManager.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _WAArchiveUndoManager : NSUndoManager {
	NSString* _jid;
}
@property(copy, nonatomic) NSString* jid;
-(void).cxx_destruct;
-(void)removeAllActions;
-(void)removeAllActionsWithTarget:(id)target;
-(void)registerUndoWithTarget:(id)target selector:(SEL)selector object:(id)object;
@end

