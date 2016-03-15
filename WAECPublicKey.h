/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface WAECPublicKey : NSObject {
	NSData* _key;
}
@property(readonly, assign, nonatomic) NSData* key;
+(id)generatePublicKeyFromPrivateKey:(id)privateKey;
-(void).cxx_destruct;
-(BOOL)validateSignature:(id)signature withMessage:(id)message;
-(id)initWithData:(id)data;
@end
