/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class UIActivityIndicatorView, UIImageView, UILabel;

@interface WAOverlayView : _ABAddressBookCopyArrayOfAllGroups
{
    UILabel *_textLabel;
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_background;
    double _startTime;
}

+ (id)showOverlayInViewController:(id)fp8;
- (void)setStartTime:(double)fp8;
- (double)startTime;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)hideWithCompletion:(id)fp(null);
- (void)loadBackground;
- (void)setText:(id)fp8;
- (id)text;
- (id)initWithFrame:(struct CGRect)fp8;

@end
