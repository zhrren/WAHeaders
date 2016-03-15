/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import </libobjc.A.h>

@class WAMapView, WAStaticPinCalloutView, UIImageView;
@protocol WAStaticPinControllerDelegate;

__attribute__((visibility("hidden")))
@interface WAStaticPinController : NSObject {
	UIImageView* _imageViewPin;
	UIImageView* _imageViewPinHole;
	UIImageView* _imageViewPinFloating;
	UIImageView* _imageViewPinShadow;
	WAStaticPinCalloutView* _pinCallout;
	BOOL _droppingPinFromTop;
	BOOL _pinHidden;
	BOOL _pinFloating;
	BOOL _pinCalloutVisible;
	id<WAStaticPinControllerDelegate> _delegate;
	WAMapView* _mapView;
}
@property(retain, nonatomic) WAMapView* mapView;
@property(assign, nonatomic, getter=isPinCalloutVisible) BOOL pinCalloutVisible;
@property(assign, nonatomic, getter=isPinFloating) BOOL pinFloating;
@property(assign, nonatomic, getter=isPinHidden) BOOL pinHidden;
@property(retain, nonatomic) id<WAStaticPinControllerDelegate> delegate;
+(id)controllerAttachedToWAMapView:(id)wamapView;
-(void).cxx_destruct;
-(void)configurePinCalloutWithPlacemark:(id)placemark showActivity:(BOOL)activity animated:(BOOL)animated;
-(void)setPinCalloutVisible:(BOOL)visible animated:(BOOL)animated;
-(void)pinCalloutTapped;
-(void)reportDropCompletionToDelegate;
-(void)animateFloatingPinWithDuration:(double)duration completion:(id)completion;
-(void)animatePinWithCompletion:(id)completion;
-(void)dropPinFromTop;
-(void)preparePinToBeDropped;
-(void)setPinFloating:(BOOL)floating animated:(BOOL)animated completion:(id)completion;
-(void)dropPin;
-(void)liftPin;
-(void)setPinHidden:(BOOL)hidden animated:(BOOL)animated;
-(CGPoint)originForFloatingPinShadowWithHeight:(float)height;
-(CGPoint)originForFloatingPinShadowWhenFloating:(BOOL)floatingPinShadowWhenFloating;
-(CGPoint)originForFloatingPinWhenFloating:(BOOL)floatingPinWhenFloating;
-(CGRect)mapBounds;
-(void)layout;
-(void)contentSizeCategoryDidChange:(id)contentSizeCategory;
-(void)dealloc;
-(id)init;
@end

