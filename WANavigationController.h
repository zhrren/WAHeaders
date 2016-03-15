/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UINavigationController.h>
#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString, NSObject, UIScreenEdgePanGestureRecognizer;
@protocol UIViewControllerAnimatedTransitioning, OS_dispatch_group, WAPercentDrivenInteractiveTransitioning;

__attribute__((visibility("hidden")))
@interface WANavigationController : UINavigationController <UINavigationControllerDelegate, UIGestureRecognizerDelegate> {
	id<UINavigationControllerDelegate> _originalDelegate;
	int _lastAnimationControllerOperation;
	UIScreenEdgePanGestureRecognizer* _customPopGestureRecognizer;
	id<WAPercentDrivenInteractiveTransitioning> _interactionController;
	NSObject<OS_dispatch_group>* _interactiveTransitionDispatchGroup;
	BOOL _interactiveTransitionInProgress;
	BOOL _customInteractivePopInProgress;
	id<UIViewControllerAnimatedTransitioning> _transitionController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) BOOL customInteractivePopInProgress;
@property(readonly, assign, nonatomic) id<UIViewControllerAnimatedTransitioning> transitionController;
+(id)defaultInteractionController;
+(Class)toolbarClass;
+(BOOL)useNavigationBarWithBlur;
+(void)initialize;
-(void).cxx_destruct;
-(id)childViewControllerForStatusBarHidden;
-(BOOL)shouldAutorotate;
-(void)popToMainViewControllerAnimated:(BOOL)mainViewControllerAnimated;
-(void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;
-(id)navigationController:(id)controller interactionControllerForAnimationController:(id)animationController;
-(id)navigationController:(id)controller animationControllerForOperation:(int)operation fromViewController:(id)viewController toViewController:(id)viewController4;
-(id)popViewControllerAnimated:(BOOL)animated;
-(void)pushViewController:(id)controller animated:(BOOL)animated canUseCustomTransition:(BOOL)transition;
-(void)pushViewController:(id)controller animated:(BOOL)animated;
-(void)performBlockAfterAnimationBegins:(id)begins;
-(BOOL)shouldBeginCustomInteractivePopAnimationWithGestureRecognizer:(id)gestureRecognizer;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(id)interactiveScreenEdgePopTransition;
-(void)didCompleteCustomInteractiveTransition;
-(void)didCancelCustomInteractiveTransition;
-(void)handleInteractiveTransitionGesture:(id)gesture;
-(void)prepareForInteractivePushWithGestureRecognizer:(id)gestureRecognizer;
-(BOOL)beginCustomInteractivePopWithGestureRecognizer:(id)gestureRecognizer performBeforePop:(id)pop;
-(void)handlePopAnimationScreenEdgePanGestureRecognizer:(id)recognizer;
-(void)viewDidLoad;
-(id)initWithRootViewController:(id)rootViewController;
-(id)init;
-(id)initWithNavigationBarClass:(Class)navigationBarClass toolbarClass:(Class)aClass;
@end

