/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class UIButton, UIImageView, UITextField, UIView;

@interface WAContactInfoEditCell : _ABAddressBookCopyArrayOfAllGroups
{
    UIView *_verticalSeparator;
    UIView *_topEdge;
    UIView *_bottomEdge;
    UIButton *_buttonLabel;
    UIImageView *_chevronImage;
    id <WAContactInfoEditCellDelegate> _delegate;
    UITextField *_textField;
}

- (id)textField;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)setLabel:(id)fp8;
- (id)label;
- (void)setHideBottomEdge:(BOOL)fp8;
- (BOOL)hideBottomEdge;
- (void)setHideTopEdge:(BOOL)fp8;
- (BOOL)hideTopEdge;
- (void)labelButtonTouchUp:(id)fp8;
- (void)labelButtonTouchCancel:(id)fp8;
- (void)labelButtonTouchDown:(id)fp8;
- (void)layoutSubviews;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end
