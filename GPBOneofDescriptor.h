/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import </libobjc.A.h>

@class NSString, NSArray;

@interface GPBOneofDescriptor : NSObject {
	GPBMessageOneofDescription* oneofDescription_;
	NSArray* fields_;
	SEL caseSel_;
}
@property(readonly, assign, nonatomic) NSArray* fields;
@property(readonly, assign, nonatomic) NSString* name;
-(id)fieldWithName:(id)name;
-(id)fieldWithNumber:(unsigned)number;
-(void)dealloc;
-(id)initWithOneofDescription:(GPBMessageOneofDescription*)oneofDescription fields:(id)fields;
@end
