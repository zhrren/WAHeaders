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

@interface GPBStringBoolDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {
	GPBMessage* _autocreator;
	NSMutableDictionary* _dictionary;
}
@property(readonly, assign, nonatomic) unsigned count;
+(id)dictionaryWithCapacity:(unsigned)capacity;
+(id)dictionaryWithDictionary:(id)dictionary;
+(id)dictionaryWithValues:(const BOOL*)values forKeys:(id*)keys count:(unsigned)count;
+(id)dictionaryWithValue:(BOOL)value forKey:(id)key;
+(id)dictionary;
-(void)removeAll;
-(void)removeValueForKey:(id)key;
-(void)setValue:(BOOL)value forKey:(id)key;
-(void)addEntriesFromDictionary:(id)dictionary;
-(BOOL)valueForKey:(id)key value:(BOOL*)value;
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
-(id)initWithValues:(const BOOL*)values forKeys:(id*)keys count:(unsigned)count;
-(id)init;
@end
