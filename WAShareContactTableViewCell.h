/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UITableViewCell.h>

@class UIView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface WAShareContactTableViewCell : UITableViewCell {
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UIImageView* _checkmarkView;
	UIView* _bottomEdgeView;
}
@property(assign, nonatomic) BOOL checked;
@property(assign, nonatomic) BOOL showBottomEdge;
+(float)heightForSharingUnit:(id)sharingUnit displayWidth:(float)width;
+(float)preferredContentInset;
+(id)cellWithReuseIdentifier:(id)reuseIdentifier;
-(void).cxx_destruct;
-(void)configureWithSharingUnit:(id)sharingUnit;
-(void)layoutSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

