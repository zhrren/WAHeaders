/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <UIKit/UIView.h>

@class WALinkLabel, UILabel, UIImageView;

__attribute__((visibility("hidden")))
@interface _WAAccountSecurityHeaderView : UIView {
	UILabel* _titleLabel;
	WALinkLabel* _helperTextLabel;
	UIImageView* _imageView;
	UIEdgeInsets _contentInset;
}
@property(assign, nonatomic) UIEdgeInsets contentInset;
@property(readonly, assign, nonatomic) UIImageView* imageView;
@property(readonly, assign, nonatomic) WALinkLabel* helperTextLabel;
@property(readonly, assign, nonatomic) UILabel* titleLabel;
-(void).cxx_destruct;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end

