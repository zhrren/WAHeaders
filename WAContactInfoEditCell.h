/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UITableViewCell.h>

@class UITextField, NSString, UIView, UIButton, UIImageView;
@protocol WAContactInfoEditCellDelegate;

@interface WAContactInfoEditCell : UITableViewCell {
	UIView* _verticalSeparator;
	UIView* _topEdge;
	UIView* _bottomEdge;
	UIButton* _buttonLabel;
	UIImageView* _chevronImage;
	id<WAContactInfoEditCellDelegate> _delegate;
	UITextField* _textField;
}
@property(assign, nonatomic) BOOL hideBottomEdge;
@property(assign, nonatomic) BOOL hideTopEdge;
@property(copy, nonatomic) NSString* label;
@property(readonly, assign, nonatomic) UITextField* textField;
@property(assign, nonatomic) __weak id<WAContactInfoEditCellDelegate> delegate;
-(void).cxx_destruct;
-(void)labelButtonTouchUp:(id)up;
-(void)labelButtonTouchCancel:(id)cancel;
-(void)labelButtonTouchDown:(id)down;
-(void)layoutSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

