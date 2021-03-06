/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UITableViewCell.h>

@class _WACustomSeparatorView;

__attribute__((visibility("hidden")))
@interface WANotificationSoundPickerCell : UITableViewCell {
	_WACustomSeparatorView* _separator;
	BOOL _soundSelected;
	BOOL _doubleSeparator;
	float _textMargin;
}
@property(assign, nonatomic) BOOL doubleSeparator;
@property(assign, nonatomic) BOOL soundSelected;
@property(assign, nonatomic) float textMargin;
-(void).cxx_destruct;
-(void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)layoutSubviews;
@end

