/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "NSCopying.h"
#import </libobjc.A.h>

@class GPBMessage;

@interface GPBFloatArray : NSObject <NSCopying> {
	GPBMessage* _autocreator;
	float* _values;
	unsigned _count;
	unsigned _capacity;
}
@property(readonly, assign, nonatomic) unsigned count;
+(id)arrayWithCapacity:(unsigned)capacity;
+(id)arrayWithValueArray:(id)valueArray;
+(id)arrayWithValue:(float)value;
+(id)array;
-(void)exchangeValueAtIndex:(unsigned)index withValueAtIndex:(unsigned)index2;
-(void)removeAll;
-(void)removeValueAtIndex:(unsigned)index;
-(void)addValuesFromArray:(id)array;
-(void)replaceValueAtIndex:(unsigned)index withValue:(float)value;
-(void)insertValue:(float)value atIndex:(unsigned)index;
-(void)addValues:(const float*)values count:(unsigned)count;
-(void)addValue:(float)value;
-(void)internalResizeToCapacity:(unsigned)capacity;
-(float)valueAtIndex:(unsigned)index;
-(void)enumerateValuesWithOptions:(unsigned)options usingBlock:(id)block;
-(void)enumerateValuesWithBlock:(id)block;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithCapacity:(unsigned)capacity;
-(id)initWithValues:(const float*)values count:(unsigned)count;
-(id)initWithValueArray:(id)valueArray;
-(id)init;
@end
