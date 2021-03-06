/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSSecureCoding.h"
#import </libobjc.A.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WAInetAddress : NSObject <NSSecureCoding> {
	unsigned char _family;
	NSString* _ip;
}
@property(readonly, assign, nonatomic) unsigned char family;
@property(readonly, copy, nonatomic) NSString* ip;
+(BOOL)supportsSecureCoding;
-(void).cxx_destruct;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)socketAddressForPort:(unsigned short)port;
-(id)initWithAddress:(id)address family:(unsigned char)family;
@end

