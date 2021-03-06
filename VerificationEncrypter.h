/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>


__attribute__((visibility("hidden")))
@interface VerificationEncrypter : NSObject {
}
+(void)deleteRecoveryToken;
+(void)removeRecoveryTokenFile;
+(BOOL)setRecoveryToken:(id)token;
+(BOOL)setRecoveryToken:(id)token phoneNumber:(id)number;
+(id)generateRecoveryToken;
+(id)recoveryToken;
+(id)recoveryToken:(id)token;
+(id)abbreviatedPhoneNumber:(id)number;
+(id)recoveryTokenFilePath;
+(id)readRecoveryTokenFromFile:(id)file;
+(BOOL)writeRecoveryTokenToFile:(id)file ccAndPhoneNumber:(id)number;
+(id)readRecoveryTokenFromKeychain;
+(void)writeRecoveryTokenToKeychain:(id)keychain;
+(id)decryptData:(id)data saltLength:(int)length encodedSecret:(id)secret phoneNumberSecret:(id)secret4;
+(id)saltAndEncryptData:(id)data saltLength:(int)length encodedSecret:(id)secret phoneNumberSecret:(id)secret4;
+(id)key:(id)key encodedSecret:(id)secret phoneNumberSecret:(id)secret3;
@end

