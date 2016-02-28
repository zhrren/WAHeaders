/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class UIImage, UIImageView, UILabel;

@interface WAOutlineRoundButton : _ABAddressBookCopyArrayOfAllGroups
{
    UILabel *_bottomLabel;
    UIImageView *_outlineMask;
    UIImageView *_solidMask;
    UIImageView *_outlineImageView;
    UIImageView *_solidImageView;
    UIImage *_normalImage;
    UIImage *_selectedImage;
    UIImageView *_blurredImageView;
    BOOL _selectable;
    id <WAOutlineRoundButtonDelegate> _delegate;
}

+ (id)button;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setSelectable:(BOOL)fp8;
- (BOOL)isSelectable;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)sendAction:(SEL)fp8 to:(id)fp12 forEvent:(id)fp16;
- (void)setSelected:(BOOL)fp8;
- (void)setHighlighted:(BOOL)fp8;
- (void)setPressed:(BOOL)fp8;
- (void)setBottomLabelText:(id)fp8;
- (id)bottomLabelText;
- (void)setIconImage:(id)fp8;
- (void)updateBlurredImage;
- (void)setCenter:(struct CGPoint)fp8;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)fp8;

@end
