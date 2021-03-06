/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class WAECPrivateKey, WAECPublicKey;

__attribute__((visibility("hidden")))
@interface WAECKeyPair : NSObject {
	WAECPublicKey* _publicKey;
	WAECPrivateKey* _privateKey;
}
@property(readonly, assign, nonatomic) WAECPrivateKey* privateKey;
@property(readonly, assign, nonatomic) WAECPublicKey* publicKey;
+(id)generateKeyPair;
-(void).cxx_destruct;
-(id)initWithPublicKey:(id)publicKey privateKey:(id)key;
@end

