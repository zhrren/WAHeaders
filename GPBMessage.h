/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "NSSecureCoding.h"
#import "NSCopying.h"
#import </libobjc.A.h>

@class NSMutableDictionary, GPBFieldDescriptor, GPBExtensionDescriptor, GPBUnknownFieldSet;
@protocol OS_dispatch_semaphore;

@interface GPBMessage : NSObject <NSSecureCoding, NSCopying> {
	GPBUnknownFieldSet* unknownFields_;
	NSMutableDictionary* extensionMap_;
	NSMutableDictionary* autocreatedExtensionMap_;
	GPBMessage* autocreator_;
	GPBFieldDescriptor* autocreatorField_;
	GPBExtensionDescriptor* autocreatorExtension_;
	GPBMessage_Storage* messageStorage_;
	NSObject<OS_dispatch_semaphore>* readOnlySemaphore_;
}
@property(readonly, assign, nonatomic, getter=isInitialized) BOOL initialized;
@property(copy, nonatomic) GPBUnknownFieldSet* unknownFields;
+(BOOL)accessInstanceVariablesDirectly;
+(BOOL)supportsSecureCoding;
+(BOOL)resolveClassMethod:(SEL)method;
+(BOOL)resolveInstanceMethod:(SEL)method;
+(id)parseDelimitedFromCodedInputStream:(id)codedInputStream extensionRegistry:(id)registry error:(id*)error;
+(id)parseFromCodedInputStream:(id)codedInputStream extensionRegistry:(id)registry error:(id*)error;
+(id)parseFromData:(id)data extensionRegistry:(id)registry error:(id*)error;
+(id)parseFromData:(id)data error:(id*)error;
+(id)message;
+(id)descriptor;
+(id)alloc;
+(id)allocWithZone:(NSZone*)zone;
+(void)initialize;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(unsigned long)serializedSize;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)mergeFrom:(id)from;
-(void)mergeFromCodedInputStream:(id)codedInputStream extensionRegistry:(id)registry;
-(void)addUnknownMapEntry:(int)entry value:(id)value;
-(BOOL)parseUnknownField:(id)field extensionRegistry:(id)registry tag:(unsigned)tag;
-(void)parseMessageSet:(id)set extensionRegistry:(id)registry;
-(void)mergeDelimitedFromCodedInputStream:(id)codedInputStream extensionRegistry:(id)registry;
-(void)mergeFromData:(id)data extensionRegistry:(id)registry;
-(void)clearExtension:(id)extension;
-(void)setExtension:(id)extension index:(unsigned)index value:(id)value;
-(void)addExtension:(id)extension value:(id)value;
-(void)setExtension:(id)extension value:(id)value;
-(id)sortedExtensionsInUse;
-(void)writeExtensionsToCodedOutputStream:(id)codedOutputStream range:(GPBExtensionRange)range;
-(id)extensionsCurrentlySet;
-(BOOL)hasExtension:(id)extension;
-(id)getExistingExtension:(id)extension;
-(id)getExtension:(id)extension;
-(void)writeField:(id)field toCodedOutputStream:(id)codedOutputStream;
-(void)writeDelimitedToCodedOutputStream:(id)codedOutputStream;
-(void)writeDelimitedToOutputStream:(id)outputStream;
-(void)writeToCodedOutputStream:(id)codedOutputStream;
-(void)writeToOutputStream:(id)outputStream;
-(id)delimitedData;
-(id)data;
-(id)descriptor;
-(void)internalClear:(BOOL)clear;
-(void)clear;
-(id)copyWithZone:(NSZone*)zone;
-(void)copyFieldsInto:(id)into zone:(NSZone*)zone descriptor:(id)descriptor;
-(void)dealloc;
-(id)initWithCodedInputStream:(id)codedInputStream extensionRegistry:(id)registry error:(id*)error;
-(id)initWithData:(id)data extensionRegistry:(id)registry error:(id*)error;
-(id)initWithData:(id)data error:(id*)error;
-(id)init;
@end

