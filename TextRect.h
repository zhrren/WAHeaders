/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@interface TextRect : _ABAddressBookCopyArrayOfAllGroups
{
    int _line;
    struct _NSRange _range;
    struct CGRect _rect;
}

+ (id)rectWithRect:(struct CGRect)fp8 range:(struct _NSRange)fp24;
- (void)setLine:(int)fp8;
- (int)line;
- (void)setRange:(struct _NSRange)fp8;
- (struct _NSRange)range;
- (void)setRect:(struct CGRect)fp8;
- (struct CGRect)rect;
- (id)initWithRect:(struct CGRect)fp8 range:(struct _NSRange)fp24;

@end

