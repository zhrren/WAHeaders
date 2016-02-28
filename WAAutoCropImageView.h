/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@interface WAAutoCropImageView : _ABAddressBookCopyArrayOfAllGroups
{
    float _cropInset;
    struct CGPoint _focusPoint;
}

- (float)cropInset;
- (struct CGPoint)focusPoint;
- (struct CGRect)contentsRect;
- (void)updateContentsRect;
- (id)actionForLayer:(id)fp8 forKey:(id)fp12;
- (void)setFrame:(struct CGRect)fp8;
- (void)setBounds:(struct CGRect)fp8;
- (void)setImage:(id)fp8;
- (void)setFocusPoint:(struct CGPoint)fp8;
- (void)setCropInset:(float)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end
