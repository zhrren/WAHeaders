/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface WATimer : _ABAddressBookCopyArrayOfAllGroups
{
    id _block;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    double _delay;
    BOOL _didInvalidateTimer;
}

+ (id)performBlock:(id)fp(null) onQueue:(void)fp8 afterDelay:(id)fp12;
- (void).cxx_destruct;
- (void)internalInvalidate;
- (void)invalidate;
- (void)start;
- (void)performBlock:(id)fp(null);
- (id)initWithBlock:(id)fp(null) onQueue:(void)fp8 afterDelay:(id)fp12;

@end

