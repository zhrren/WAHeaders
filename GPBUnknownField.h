/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCopying.h"
#import "WhatsApp-Structs.h"
#import </libobjc.A.h>

@class GPBUInt32Array, GPBUInt64Array, NSArray, NSMutableArray;

@interface GPBUnknownField : NSObject <NSCopying> {
	int number_;
	GPBUInt64Array* mutableVarintList_;
	GPBUInt32Array* mutableFixed32List_;
	GPBUInt64Array* mutableFixed64List_;
	NSMutableArray* mutableLengthDelimitedList_;
	NSMutableArray* mutableGroupList_;
}
@property(readonly, assign, nonatomic) NSArray* groupList;
@property(readonly, assign, nonatomic) NSArray* lengthDelimitedList;
@property(readonly, assign, nonatomic) GPBUInt64Array* fixed64List;
@property(readonly, assign, nonatomic) GPBUInt32Array* fixed32List;
@property(readonly, assign, nonatomic) GPBUInt64Array* varintList;
@property(readonly, assign, nonatomic) int number;
-(void)addGroup:(id)group;
-(void)addLengthDelimited:(id)delimited;
-(void)addFixed64:(unsigned long long)a64;
-(void)addFixed32:(unsigned)a32;
-(void)addVarint:(unsigned long long)varint;
-(void)mergeFromField:(id)field;
-(id)description;
-(unsigned long)serializedSizeAsMessageSetExtension;
-(void)writeAsMessageSetExtensionToOutput:(id)output;
-(unsigned long)serializedSize;
-(void)writeToOutput:(id)output;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithNumber:(int)number;
@end
