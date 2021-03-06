/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <UIKit/UIView.h>
#import "UIGestureRecognizerDelegate.h"

@class UITapGestureRecognizer, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIImageView, NSString;
@protocol WAMultiSendThumbnailBrowserItemViewDelegate;

__attribute__((visibility("hidden")))
@interface WAMultiSendThumbnailBrowserItemView : UIView <UIGestureRecognizerDelegate> {
	UIImageView* _overlayView;
	CGPoint _centerBeforeDraggingInSuperSuperviewCoordinates;
	UIPanGestureRecognizer* _panGesture;
	UITapGestureRecognizer* _singleTapGesture;
	UILongPressGestureRecognizer* _longPressGesture;
	BOOL _selected;
	int _index;
	unsigned _state;
	id<WAMultiSendThumbnailBrowserItemViewDelegate> _delegate;
	UIImageView* _backgroundImageView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic, getter=isSelected) BOOL selected;
@property(readonly, assign, nonatomic) UIImageView* backgroundImageView;
@property(readonly, assign, nonatomic) UIImageView* overlayView;
@property(assign, nonatomic) __weak id<WAMultiSendThumbnailBrowserItemViewDelegate> delegate;
@property(assign, nonatomic) unsigned state;
@property(assign, nonatomic) int index;
+(void)addWobbleAnimationToView:(id)view;
-(void).cxx_destruct;
-(void)viewDidDrag:(id)view;
-(void)viewWasTapped:(id)tapped;
-(void)viewWasLongPressed:(id)pressed;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(void)stopWobble;
-(void)startWobble;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(void)animateOutWithCompletionHandler:(id)completionHandler;
-(void)moveToCenter:(CGPoint)center animated:(BOOL)animated;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end

