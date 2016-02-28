/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSString, UIImageView, UIView, WACopyableLabel;

@interface WAContactInfoTableHeaderView : _ABAddressBookCopyArrayOfAllGroups
{
    UIView *_profilePhotoView;
    UIImageView *_profilePhotoImageView;
    BOOL _hasProfilePhoto;
    NSString *_headerText;
    struct _NSRange _nameRange;
    WACopyableLabel *_label;
    struct UIEdgeInsets _contentInset;
}

- (void)setContentInset:(struct UIEdgeInsets)fp8;
- (struct UIEdgeInsets)contentInset;
- (void).cxx_destruct;
- (void)reloadFonts;
- (void)setAllowCopyText:(BOOL)fp8;
- (void)configureWithName:(id)fp8;
- (void)configureWithMergedContact:(id)fp8;
- (void)configureWithContactInfoNameUnit:(id)fp8 photoUnit:(id)fp12;
- (void)reloadText;
- (void)setupContactPicture:(id)fp8;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)fp8;

@end
