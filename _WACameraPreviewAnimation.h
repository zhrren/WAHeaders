/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@interface _WACameraPreviewAnimation : _ABAddressBookCopyArrayOfAllGroups
{
    BOOL _completed;
    id _callback;
    id _completionHandler;
    double _duration;
    double _startTime;
}

- (void)setCompleted:(BOOL)fp8;
- (BOOL)isCompleted;
- (void)setStartTime:(double)fp8;
- (double)startTime;
- (void)setDuration:(double)fp8;
- (double)duration;
- (void)setCompletionHandler:(id)fp(null);
- (id)completionHandler;
- (void)setCallback:(id)fp(null);
- (id)callback;
- (void).cxx_destruct;

@end

