/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "NSCopying.h"
#import </libobjc.A.h>
#import "GPBDictionaryInternalsProtocol.h"

@class NSMutableDictionary, GPBMessage;

@interface GPBUInt64Int32Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {
	GPBMessage* _autocreator;
	NSMutableDictionary* _dictionary;
}
@property(readonly, assign, nonatomic) unsigned count;
+(id)dictionaryWithCapacity:(unsigned)capacity;
+(id)dictionaryWithDictionary:(id)dictionary;
+(id)dictionaryWithValues:(const int*)values forKeys:(const unsigned long long*)keys count:(unsigned)count;
+(id)dictionaryWithValue:(int)value forKey:(unsigned long long)key;
+(id)dictionary;
-(void)removeAll;
-(void)removeValueForKey:(unsigned long long)key;
-(void)setValue:(int)value forKey:(unsigned long long)key;
-(void)addEntriesFromDictionary:(id)dictionary;
-(BOOL)valueForKey:(unsigned long long)key value:(int*)value;
-(void)enumerateForTextFormat:(id)textFormat;
-(void)setGPBGenericValue:(XXUnion_vOMGVC*)value forGPBGenericValueKey:(XXUnion_vOMGVC*)gpbgenericValueKey;
-(void)writeToCodedOutputStream:(id)codedOutputStream asField:(id)field;
-(unsigned long)computeSerializedSizeAsField:(id)field;
-(void)enumerateKeysAndValuesUsingBlock:(id)block;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithCapacity:(unsigned)capacity;
-(id)initWithDictionary:(id)dictionary;
-(id)initWithValues:(const int*)values forKeys:(const unsigned long long*)keys count:(unsigned)count;
-(id)init;
@end

