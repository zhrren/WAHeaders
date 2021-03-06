/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <UIKit/UIView.h>

@class UIButton;
@protocol WAMultiSendTitleViewDelegate;

__attribute__((visibility("hidden")))
@interface WAMultiSendTitleView : UIView {
	UIButton* _deleteButton;
	UIButton* _rotateButton;
	UIButton* _cropButton;
	BOOL _cropping;
	BOOL _editingButtonsHidden;
	id<WAMultiSendTitleViewDelegate> _delegate;
}
@property(assign, nonatomic, getter=isEditingButtonsHidden) BOOL editingButtonsHidden;
@property(assign, nonatomic, getter=isCropping) BOOL cropping;
@property(assign, nonatomic) __weak id<WAMultiSendTitleViewDelegate> delegate;
+(CGSize)preferredSize;
-(void).cxx_destruct;
-(void)cropButtonTapped:(id)tapped;
-(void)rotateButtonTapped:(id)tapped;
-(void)deleteButtonTapped:(id)tapped;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end

