/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAMessageCell.h"

@class UIButton, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;

@interface WAVCardMessageCell : WAMessageCell
{
    UIImageView *_broadcastImageView;
    UIView *_vCardContentView;
    UIImageView *_contactImageView;
    UIImageView *_chevronImageView;
    UILabel *_contactNameLabel;
    UIView *_horizontalSeparator;
    UIView *_verticalSeparator;
    UIButton *_buttonMessage;
    UIButton *_buttonAdd;
    UIButton *_buttonInvite;
    BOOL _contentsHighlighted;
    struct CGPoint _initialHighlightTouchLocation;
    UILongPressGestureRecognizer *_highlightTrackingGesture;
    UITapGestureRecognizer *_contentSingleTapGestureRecognizer;
    UITapGestureRecognizer *_contentDoubleTapGestureRecognizer;
    UILongPressGestureRecognizer *_contentLongPressGestureRecognizer;
}

+ (id)cellReuseIdentifier;
+ (struct CGSize)contentSizeForCellData:(id)fp8 maxWidth:(float)fp12;
+ (float)maximumBubbleWidthForCellWidth:(float)fp8;
+ (struct UIEdgeInsets)contentInsetsForCellData:(id)fp8 cellWidth:(float)fp12;
+ (id)anyContactJIDForCellData:(id)fp8;
+ (BOOL)shouldShowActionButtonsForCellData:(id)fp8;
+ (void)initialize;
- (void).cxx_destruct;
- (id)accessibilityHintText;
- (id)accessibilityValueText;
- (void)configureForAccessibility;
- (void)setContentsHighlighted:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setDimmed:(BOOL)fp8;
- (void)prepareFor3DTouchPreviewWithContext:(id)fp8;
- (id)dataForPreviewingContext:(id)fp8 atLocation:(struct CGPoint)fp12;
- (id)registerSubviewsForPreviewingUsingViewController:(id)fp8 previewingDelegate:(id)fp12;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (void)handleContentLongPressGesture:(id)fp8;
- (void)handleContentDoubleTapGesture:(id)fp8;
- (void)handleContentTapGesture:(id)fp8;
- (void)handleHighlightTrackingGesture:(id)fp8;
- (void)handleLongPressOnBubbleWithLocation:(struct CGPoint)fp8;
- (void)handleDoubleTapOnBubbleWithLocation:(struct CGPoint)fp8;
- (void)handleTapOnBubbleWithLocation:(struct CGPoint)fp8;
- (void)configureCellWithAnimation:(BOOL)fp8;
- (void)profilePictureManagerDidUpdatePicture:(id)fp8;
- (void)layoutSubviews;
- (void)inviteContactAction:(id)fp8;
- (void)addContactAction:(id)fp8;
- (void)messageAction:(id)fp8;
- (void)dealloc;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end

