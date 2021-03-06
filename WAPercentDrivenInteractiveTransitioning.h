/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIViewControllerInteractiveTransitioning.h"


@protocol WAPercentDrivenInteractiveTransitioning <UIViewControllerInteractiveTransitioning>
@property(copy, nonatomic) id updateHandler;
@property(assign, nonatomic) float completionSpeed;
@property(readonly, assign, nonatomic) float percentComplete;
@property(readonly, assign, nonatomic) float duration;
-(void)finishInteractiveTransition;
-(void)cancelInteractiveTransition;
@end

