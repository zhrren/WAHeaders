/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIGestureRecognizer.h>

@protocol WANoOpGestureRecognizerTouchDelegate;

__attribute__((visibility("hidden")))
@interface WANoOpGestureRecognizer : UIGestureRecognizer {
	id<WANoOpGestureRecognizerTouchDelegate> _touchDelegate;
}
@property(assign, nonatomic) __weak id<WANoOpGestureRecognizerTouchDelegate> touchDelegate;
-(void).cxx_destruct;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)failByGestureRecognizer;
-(BOOL)shouldRequireFailureOfGestureRecognizer:(id)gestureRecognizer;
-(BOOL)canBePreventedByGestureRecognizer:(id)recognizer;
-(BOOL)canPreventGestureRecognizer:(id)recognizer;
-(void)handleTouchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)reset;
-(id)initWithTarget:(id)target action:(SEL)action;
@end

