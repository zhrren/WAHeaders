/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAJobRequirementProvider.h"


__attribute__((visibility("hidden")))
@interface WAChatConnectionRequirementProvider : WAJobRequirementProvider {
}
+(id)createRequirement;
-(void)dealloc;
-(void)xmppConnectionStateDidChange:(id)xmppConnectionState;
-(void)didAddToDelegate:(id)delegate;
-(BOOL)requirementMet:(id)met;
-(id)init;
@end
