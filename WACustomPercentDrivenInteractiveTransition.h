/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "WAPercentDrivenInteractiveTransitioning-Protocol.h"

@class CADisplayLink;

@interface WACustomPercentDrivenInteractiveTransition : _ABAddressBookCopyArrayOfAllGroups <WAPercentDrivenInteractiveTransitioning>
{
    id <UIViewControllerContextTransitioning> _transitionContext;
    id <UIViewControllerAnimatedTransitioning> _animator;
    CADisplayLink *_displayLink;
    float _percentComplete;
    double _initialTimeOffset;
    float _completionSpeed;
    id _updateHandler;
}

- (void)setUpdateHandler:(id)fp(null);
- (id)updateHandler;
- (float)percentComplete;
- (void)setCompletionSpeed:(float)fp8;
- (float)completionSpeed;
- (void).cxx_destruct;
- (void)removeAllAnimationsInLayer:(id)fp8;
- (void)didFinishTransition;
- (void)animate:(id)fp8;
- (void)completeTransition;
- (void)setPercentComplete:(float)fp8;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)updateInteractiveTransition:(float)fp8;
- (void)startInteractiveTransition:(id)fp8;
- (float)duration;
- (id)initWithAnimator:(id)fp8;
- (id)init;

@end

