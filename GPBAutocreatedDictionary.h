/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <Foundation/NSMutableDictionary.h>

@class GPBMessage;

@interface GPBAutocreatedDictionary : NSMutableDictionary {
	GPBMessage* _autocreator;
	NSMutableDictionary* _dictionary;
}
-(void)enumerateKeysAndObjectsWithOptions:(unsigned)options usingBlock:(id)block;
-(void)enumerateKeysAndObjectsUsingBlock:(id)block;
-(void)setObject:(id)object forKeyedSubscript:(id)keyedSubscript;
-(id)objectForKeyedSubscript:(id)keyedSubscript;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)copyWithZone:(NSZone*)zone;
-(void)removeObjectForKey:(id)key;
-(void)setObject:(id)object forKey:(id)key;
-(id)keyEnumerator;
-(id)objectForKey:(id)key;
-(unsigned)count;
-(id)initWithObjects:(const id*)objects forKeys:(const id*)keys count:(unsigned)count;
-(void)dealloc;
@end
