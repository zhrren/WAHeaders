/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSMutableArray;

@interface _WAChatSessionCellSideButtonsView : _ABAddressBookCopyArrayOfAllGroups
{
    NSMutableArray *_buttons;
    NSMutableArray *_normalBackgrounds;
    NSMutableArray *_highlightedBackgrounds;
    BOOL _expanded;
}

+ (id)darkerColorFromColor:(id)fp8;
+ (id)buttonWithTitle:(id)fp8 image:(id)fp12;
- (BOOL)expanded;
- (void).cxx_destruct;
- (void)reloadFonts;
- (float)preferredWidth;
- (void)triggerActionForButtonAtIndex:(unsigned int)fp8;
- (void)setImage:(id)fp8 forButtonAtIndex:(unsigned int)fp12;
- (void)setTitle:(id)fp8 forButtonAtIndex:(unsigned int)fp12;
- (id)addButtonWithTitle:(id)fp8 backgroundColor:(id)fp12 image:(id)fp16;
- (void)setExpanded:(BOOL)fp8;
- (void)buttonTouchUp:(id)fp8;
- (void)buttonTouchDown:(id)fp8;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)fp8;

@end
