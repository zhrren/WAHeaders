/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "GPBMessage.h"

@class NSMutableArray, GPBEnumOptions, NSString;

@interface GPBEnumDescriptorProto : GPBMessage {
}
@property(retain, nonatomic) GPBEnumOptions* options;
@property(assign, nonatomic) BOOL hasOptions;
@property(readonly, assign, nonatomic) unsigned valueArray_Count;
@property(retain, nonatomic) NSMutableArray* valueArray;
@property(copy, nonatomic) NSString* name;
@property(assign, nonatomic) BOOL hasName;
+(id)descriptor;
@end

