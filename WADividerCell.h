/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WATranslucentTableViewCell.h"

@class UIView;

@interface WADividerCell : WATranslucentTableViewCell
{
    UIView *_backgroundView;
    UIView *_blurredBackgroundTrackingView;
}

+ (BOOL)selectable;
+ (float)rowHeight;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reloadFonts;
- (void)setTitle:(id)fp8;
- (id)title;
- (id)blurMaskTrackingView;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end
