/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>

@class UILabel, CALayer, NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface WAAnimatedCancelLabel : UIView {
	UILabel* _label;
	UIImageView* _slideArrow;
	BOOL _animating;
	CALayer* _maskLayer;
	BOOL _flipped;
}
@property(copy, nonatomic) NSString* text;
+(id)labelFontOfSize:(float)size;
+(float)defaultFontSize;
-(void).cxx_destruct;
-(void)stopAnimating;
-(void)startAnimating;
-(BOOL)isAnimating;
-(void)layoutSubviews;
-(id)initWithHorizontallyFlipped:(BOOL)horizontallyFlipped;
@end

