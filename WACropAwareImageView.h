/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@interface WACropAwareImageView : _ABAddressBookCopyArrayOfAllGroups
{
    float _fixedHeight;
    struct CGRect _normalizedCropRect;
}

+ (struct CGRect)transformNormalizedCropRect:(struct CGRect)fp8 forImageOrientation:(int)fp24;
- (void)setFixedHeight:(float)fp8;
- (float)fixedHeight;
- (struct CGRect)normalizedCropRect;
- (void)setNormalizedCropRect:(struct CGRect)fp8;
- (void)recalculateImageMetrics;
- (void)setImage:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end
