/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "NSCopying.h"
#import </libobjc.A.h>


@interface GPBUnknownFieldSet : NSObject <NSCopying> {
	CFDictionaryRef fields_;
}
+(BOOL)isFieldTag:(int)tag;
-(void)getTags:(int*)tags;
-(void)mergeFromCodedInputStream:(id)codedInputStream;
-(void)addUnknownMapEntry:(int)entry value:(id)value;
-(void)mergeMessageSetMessage:(int)message data:(id)data;
-(BOOL)mergeFieldFrom:(int)from input:(id)input;
-(void)mergeVarintField:(int)field value:(int)value;
-(void)mergeFromData:(id)data;
-(void)mergeUnknownFields:(id)fields;
-(id)mutableFieldForNumber:(int)number create:(BOOL)create;
-(void)addField:(id)field;
-(id)data;
-(unsigned long)serializedSizeAsMessageSet;
-(void)writeAsMessageSetTo:(id)to;
-(unsigned long)serializedSize;
-(id)description;
-(void)writeToCodedOutputStream:(id)codedOutputStream;
-(id)sortedFields;
-(unsigned)countOfFields;
-(id)getField:(int)field;
-(BOOL)hasField:(int)field;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
@end
