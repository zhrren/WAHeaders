/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "GPBMessage.h"

@class GPBMethodOptions, NSString;

@interface GPBMethodDescriptorProto : GPBMessage {
}
@property(assign, nonatomic) BOOL serverStreaming;
@property(assign, nonatomic) BOOL hasServerStreaming;
@property(assign, nonatomic) BOOL clientStreaming;
@property(assign, nonatomic) BOOL hasClientStreaming;
@property(retain, nonatomic) GPBMethodOptions* options;
@property(assign, nonatomic) BOOL hasOptions;
@property(copy, nonatomic) NSString* outputType;
@property(assign, nonatomic) BOOL hasOutputType;
@property(copy, nonatomic) NSString* inputType;
@property(assign, nonatomic) BOOL hasInputType;
@property(copy, nonatomic) NSString* name;
@property(assign, nonatomic) BOOL hasName;
+(id)descriptor;
@end
