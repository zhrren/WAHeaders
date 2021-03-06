/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import </libobjc.A.h>

@class NSString, NSArray, NSURL, NSMutableArray;

__attribute__((visibility("hidden")))
@interface WASharedItemOutbox : NSObject <NSCoding> {
	NSString* _outboxID;
	NSURL* _fileURL;
	NSMutableArray* _items;
	BOOL _didCancelSend;
}
@property(readonly, copy, nonatomic) NSArray* items;
@property(assign, nonatomic) BOOL didCancelSend;
+(id)sharedItemOutboxAtURL:(id)url;
-(void).cxx_destruct;
-(void)dispose;
-(void)moveToTemporaryDirectory;
-(void)save;
-(void)removeItem:(id)item;
-(void)addItem:(id)item;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)init;
@end

