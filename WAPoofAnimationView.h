/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <UIKit/UIView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface WAPoofAnimationView : UIView {
	CALayer* _imageLayer;
	id _completionHandler;
}
+(id)poof;
-(void).cxx_destruct;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)performAnimationWithCompletionHandler:(id)completionHandler;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end

