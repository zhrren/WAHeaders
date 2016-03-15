/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "WAMessageCell.h"

@class UILabel, UIView, UIButton, UIImageView;

__attribute__((visibility("hidden")))
@interface WAVCardMessageCell : WAMessageCell {
	UIImageView* _broadcastImageView;
	UIView* _vCardContentView;
	UIImageView* _contactImageView;
	UIImageView* _chevronImageView;
	UILabel* _contactNameLabel;
	UIView* _horizontalSeparator;
	UIView* _verticalSeparator;
	UIButton* _buttonMessage;
	UIButton* _buttonAdd;
	UIButton* _buttonInvite;
}
+(id)cellReuseIdentifier;
+(CGSize)contentSizeForCellData:(id)cellData maxWidth:(float)width;
+(float)maximumBubbleWidthForCellWidth:(float)cellWidth;
+(UIEdgeInsets)contentInsetsForCellData:(id)cellData cellWidth:(float)width;
+(id)anyContactJIDForCellData:(id)cellData;
+(BOOL)shouldShowActionButtonsForCellData:(id)cellData;
+(void)initialize;
-(void).cxx_destruct;
-(id)accessibilityHintText;
-(id)accessibilityValueText;
-(void)configureForAccessibility;
-(void)prepareFor3DTouchPreviewWithContext:(id)context;
-(id)dataForPreviewingContext:(id)previewingContext atLocation:(CGPoint)location;
-(id)registerSubviewsForPreviewingUsingViewController:(id)previewingUsingViewController previewingDelegate:(id)delegate;
-(void)configureCellWithAnimation:(BOOL)animation;
-(void)profilePictureManagerPictureDidChange:(id)profilePictureManagerPicture;
-(void)layoutSubviews;
-(void)inviteContactAction:(id)action;
-(void)addContactAction:(id)action;
-(void)messageAction:(id)action;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

