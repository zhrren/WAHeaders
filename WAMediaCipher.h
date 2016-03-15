/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import </libobjc.A.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface WAMediaCipher : NSObject {
	CCCryptorRef cryptorRef;
	struct {
		unsigned ctx[96];
	} runningHmacContext;
	CC_SHA256state_st runningEncShaContext;
	CC_SHA256state_st runningPlainShaContext;
	NSData* _encDigest;
	NSData* _plainDigest;
	NSData* _cipherKey;
	NSData* _macKey;
	NSData* _refKey;
	NSData* _iv;
	NSData* _remainingChunk;
}
@property(retain, nonatomic) NSData* remainingChunk;
@property(retain, nonatomic) NSData* iv;
@property(retain, nonatomic) NSData* refKey;
@property(retain, nonatomic) NSData* macKey;
@property(retain, nonatomic) NSData* cipherKey;
@property(readonly, assign, nonatomic) NSData* plainDigest;
@property(readonly, assign, nonatomic) NSData* encDigest;
-(void).cxx_destruct;
-(id)streamDecryptFinalForBuffer:(char*)buffer length:(int)length;
-(id)streamDecryptedDataForBuffer:(char*)buffer length:(int)length;
-(BOOL)streamDecryptInit;
-(id)referenceForJid:(id)jid;
-(id)streamEncryptFinalData;
-(id)streamEncryptDataForChunk:(id)chunk;
-(BOOL)streamEncryptInit;
-(id)encryptedDataForData:(id)data;
-(BOOL)decryptFileAtURL:(id)url toURL:(id)url2;
-(void)dealloc;
-(id)initWithKey:(id)key mediaType:(unsigned)type;
@end

