/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <UIKit/UITableViewCell.h>

@class UILabel, WAMessage, UIImageView;
@protocol WADocumentTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface WADocumentTableViewCell : UITableViewCell {
	WAMessage* _message;
	CGSize _prevSize;
	id<WADocumentTableViewCellDelegate> _delegate;
	UIImageView* _thumbnailImageView;
	UIImageView* _overlayImageView;
	UILabel* _nameLabel;
	UILabel* _descriptionLabel;
}
@property(assign, nonatomic) __weak UILabel* descriptionLabel;
@property(assign, nonatomic) __weak UILabel* nameLabel;
@property(assign, nonatomic) __weak UIImageView* overlayImageView;
@property(assign, nonatomic) __weak UIImageView* thumbnailImageView;
@property(assign, nonatomic) __weak id<WADocumentTableViewCellDelegate> delegate;
+(float)preferredHeight;
-(void).cxx_destruct;
-(id)accessibilityLabel;
-(id)fileInfoAttributedStringForMessage:(id)message;
-(void)configureWithMessage:(id)message searchTerm:(id)term;
-(void)layoutSubviews;
-(void)awakeFromNib;
@end

