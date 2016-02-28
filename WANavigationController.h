/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSObject<OS_dispatch_group>, UIScreenEdgePanGestureRecognizer;

@interface WANavigationController : _ABAddressBookCopyArrayOfAllGroups <UINavigationControllerDelegate, UIGestureRecognizerDelegate>
{
    id <UINavigationControllerDelegate> _originalDelegate;
    int _lastAnimationControllerOperation;
    UIScreenEdgePanGestureRecognizer *_customPopGestureRecognizer;
    id <WAPercentDrivenInteractiveTransitioning> _interactionController;
    NSObject<OS_dispatch_group> *_interactiveTransitionDispatchGroup;
    BOOL _interactiveTransitionInProgress;
    BOOL _customInteractivePopInProgress;
    id <UIViewControllerAnimatedTransitioning> _transitionController;
}

+ (id)defaultInteractionController;
+ (BOOL)useNavigationBarWithBlur;
+ (void)initialize;
- (BOOL)customInteractivePopInProgress;
- (id)transitionController;
- (void).cxx_destruct;
- (id)childViewControllerForStatusBarHidden;
- (BOOL)shouldAutorotate;
- (void)popToMainViewControllerAnimated:(BOOL)fp8;
- (void)navigationController:(id)fp8 didShowViewController:(id)fp12 animated:(BOOL)fp16;
- (void)navigationController:(id)fp8 willShowViewController:(id)fp12 animated:(BOOL)fp16;
- (id)navigationController:(id)fp8 interactionControllerForAnimationController:(id)fp12;
- (id)navigationController:(id)fp8 animationControllerForOperation:(int)fp12 fromViewController:(id)fp16 toViewController:(id)fp20;
- (id)popViewControllerAnimated:(BOOL)fp8;
- (void)pushViewController:(id)fp8 animated:(BOOL)fp12 canUseCustomTransition:(BOOL)fp16;
- (void)pushViewController:(id)fp8 animated:(BOOL)fp12;
- (void)performBlockAfterAnimationBegins:(id)fp(null);
- (BOOL)shouldBeginCustomInteractivePopAnimationWithGestureRecognizer:(id)fp8;
- (BOOL)gestureRecognizerShouldBegin:(id)fp8;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (id)interactiveScreenEdgePopTransition;
- (void)didCompleteCustomInteractiveTransition;
- (void)didCancelCustomInteractiveTransition;
- (void)handleInteractiveTransitionGesture:(id)fp8;
- (void)prepareForInteractivePushWithGestureRecognizer:(id)fp8;
- (BOOL)beginCustomInteractivePopWithGestureRecognizer:(id)fp8 performBeforePop:(id)fp(null);
- (void)handlePopAnimationScreenEdgePanGestureRecognizer:(id)fp8;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)fp8;
- (id)init;
- (id)initWithNavigationBarClass:(Class)fp8 toolbarClass:(Class)fp12;

@end

