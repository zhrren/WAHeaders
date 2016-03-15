/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <UIKit/UICollectionViewCell.h>

@class WAMediaPickerVideoAssetOverlayView, UIView, UIImageView;

__attribute__((visibility("hidden")))
@interface WAMediaCollectionViewCell : UICollectionViewCell {
	UIImageView* _imageView;
	UIView* _checkmarkBackgroundView;
	UIImageView* _checkmarkImageView;
	UIView* _dimmingView;
	WAMediaPickerVideoAssetOverlayView* _durationOverlay;
	unsigned _cellState;
}
@property(assign, nonatomic) unsigned cellState;
@property(readonly, assign, nonatomic) UIImageView* imageView;
-(void).cxx_destruct;
-(id)accessibilityValue;
-(id)baseAccessibilityValue;
-(BOOL)isAccessibilityElement;
-(void)prepareForReuse;
-(void)setMediaDuration:(int)duration mediaIconType:(unsigned)type;
-(BOOL)isParticipatingInInteractiveTransition;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end

