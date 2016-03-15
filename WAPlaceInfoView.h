/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAMessageCellSubview.h"
#import "WhatsApp-Structs.h"

@class WAMessageFooterView, UILabel, UIView, UIImageView;

@interface WAPlaceInfoView : WAMessageCellSubview {
	WAMessageFooterView* _footerView;
	BOOL _showListIcon;
	UIImageView* _listIconImageView;
	UIView* _listIconSeparatorView;
	UILabel* _label;
}
@property(readonly, assign, nonatomic) UIImageView* listIconImageView;
@property(readonly, assign, nonatomic) UILabel* label;
+(id)nameFont;
+(id)attributedStringFromCellData:(id)cellData returningNameRange:(out NSRange*)range;
+(CGSize)preferredSizeForCellData:(id)cellData maximumWidth:(float)width;
+(void)initialize;
-(void).cxx_destruct;
-(void)setStarIconHidden:(BOOL)hidden animated:(BOOL)animated;
-(void)configureWithCellData:(id)cellData animated:(BOOL)animated;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end

