/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "_XMPPRequestWebClientLogin.h"


__attribute__((visibility("hidden")))
@interface XMPPRequestWebClientAcceptPersistentLogin : _XMPPRequestWebClientLogin {
	BOOL _isResume;
}
-(id)syncElementWithWebReference:(id)webReference;
-(id)initWithWebReference:(id)webReference clientToken:(id)token isResume:(BOOL)resume completion:(id)completion;
@end

