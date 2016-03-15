/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <UIKit/UIImageView.h>

@class UIView, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface WAOverlayImageView : UIImageView {
	UIView* _overlayView;
}
@property(retain, nonatomic) UIColor* overlayColor;
@property(retain, nonatomic) UIImage* originalImage;
-(void).cxx_destruct;
-(void)setImage:(id)image;
-(id)initWithFrame:(CGRect)frame;
@end

