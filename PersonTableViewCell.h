/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, WAContactNameLabel;

__attribute__((visibility("hidden")))
@interface PersonTableViewCell : UITableViewCell {
	BOOL _personSelected;
	UIImageView* _imageViewCheckMark;
	WAContactNameLabel* _nameLabel;
	UILabel* _statusLabel;
	UILabel* _detailLabel;
}
@property(assign, nonatomic) BOOL personSelected;
@property(readonly, assign, nonatomic) UILabel* detailLabel;
@property(readonly, assign, nonatomic) UILabel* statusLabel;
@property(readonly, assign, nonatomic) WAContactNameLabel* nameLabel;
@property(readonly, assign, nonatomic) UIImageView* imageViewCheckMark;
-(void).cxx_destruct;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(void)updateBackgroundColor;
-(void)tintColorDidChange;
-(void)layoutSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

