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

@class GPBMessage;

@interface GPBBoolInt32Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {
	GPBMessage* _autocreator;
	int _values[2];
	BOOL _valueSet[2];
}
@property(readonly, assign, nonatomic) unsigned count;
+(id)dictionaryWithCapacity:(unsigned)capacity;
+(id)dictionaryWithDictionary:(id)dictionary;
+(id)dictionaryWithValues:(const int*)values forKeys:(const BOOL*)keys count:(unsigned)count;
+(id)dictionaryWithValue:(int)value forKey:(BOOL)key;
+(id)dictionary;
-(void)removeAll;
-(void)removeValueForKey:(BOOL)key;
-(void)setValue:(int)value forKey:(BOOL)key;
-(void)addEntriesFromDictionary:(id)dictionary;
-(void)writeToCodedOutputStream:(id)codedOutputStream asField:(id)field;
-(unsigned long)computeSerializedSizeAsField:(id)field;
-(void)enumerateKeysAndValuesUsingBlock:(id)block;
-(void)enumerateForTextFormat:(id)textFormat;
-(void)setGPBGenericValue:(XXUnion_vOMGVC*)value forGPBGenericValueKey:(XXUnion_vOMGVC*)gpbgenericValueKey;
-(BOOL)valueForKey:(BOOL)key value:(int*)value;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithCapacity:(unsigned)capacity;
-(id)initWithDictionary:(id)dictionary;
-(id)initWithValues:(const int*)values forKeys:(const BOOL*)keys count:(unsigned)count;
-(id)init;
@end

