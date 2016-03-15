/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface WAWebClientSessionTableViewCell : UITableViewCell {
	UILabel* _lastActiveLabel;
	UILabel* _locationLabel;
	UILabel* _operatingSystemLabel;
	UIImageView* _iconImageView;
}
@property(assign, nonatomic) __weak UIImageView* iconImageView;
@property(assign, nonatomic) __weak UILabel* operatingSystemLabel;
@property(assign, nonatomic) __weak UILabel* locationLabel;
@property(assign, nonatomic) __weak UILabel* lastActiveLabel;
-(void).cxx_destruct;
-(void)setIconImageForBrowserName:(id)browserName;
@end

