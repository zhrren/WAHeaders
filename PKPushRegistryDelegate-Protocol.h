/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol PKPushRegistryDelegate <NSObject>
- (void)pushRegistry:(id)fp8 didReceiveIncomingPushWithPayload:(id)fp12 forType:(id)fp16;
- (void)pushRegistry:(id)fp8 didUpdatePushCredentials:(id)fp12 forType:(id)fp16;
@end
