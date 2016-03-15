/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <UIKit/UIView.h>

@class UIButton, UIImageView, UIImage;
@protocol WAImageAttachmentViewDelegate;

__attribute__((visibility("hidden")))
@interface WAImageAttachmentView : UIView {
	UIImageView* _imageView;
	UIButton* _addButton;
	id<WAImageAttachmentViewDelegate> _delegate;
	UIButton* _removeButton;
}
@property(readonly, assign, nonatomic) UIButton* removeButton;
@property(assign, nonatomic) __weak id<WAImageAttachmentViewDelegate> delegate;
@property(retain, nonatomic) UIImage* image;
-(void).cxx_destruct;
-(void)addImageButtonTapped:(id)tapped;
-(void)removeImageButtonTapped:(id)tapped;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end

