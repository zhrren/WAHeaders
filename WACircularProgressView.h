/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface WACircularProgressView : UIView {
	float _barWidth;
	UIColor* _progressColor;
	UIColor* _trackColor;
}
@property(retain, nonatomic) UIColor* trackColor;
@property(retain, nonatomic) UIColor* progressColor;
@property(assign, nonatomic) float barWidth;
@property(assign, nonatomic) float progress;
+(Class)layerClass;
-(void).cxx_destruct;
-(CGSize)intrinsicContentSize;
-(void)drawRect:(CGRect)rect;
-(id)barColor;
-(void)setProgress:(float)progress withAnimationDuration:(double)animationDuration completion:(id)completion;
-(void)setProgress:(float)progress animated:(BOOL)animated;
-(float)presentationValueForProgress;
-(id)initWithFrame:(CGRect)frame;
@end

