/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class _WACustomSeparatorView;

@interface WANotificationSoundPickerCell : _ABAddressBookCopyArrayOfAllGroups
{
    _WACustomSeparatorView *_separator;
    BOOL _soundSelected;
    BOOL _doubleSeparator;
    float _textMargin;
}

- (BOOL)doubleSeparator;
- (BOOL)soundSelected;
- (void)setTextMargin:(float)fp8;
- (float)textMargin;
- (void).cxx_destruct;
- (void)setDoubleSeparator:(BOOL)fp8;
- (void)setSoundSelected:(BOOL)fp8;
- (void)setHighlighted:(BOOL)fp8 animated:(BOOL)fp12;
- (void)layoutSubviews;

@end

