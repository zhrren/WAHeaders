/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSString, UIImage, WAContactProperty;

@interface WAContactInfoUnit : _ABAddressBookCopyArrayOfAllGroups
{
    BOOL _multipleLines;
    BOOL _highlighted;
    UIImage *_image;
    NSString *_detailText;
    id _action;
    WAContactProperty *_property;
}

+ (id)contactInfoUnitForContactProperty:(id)fp8;
- (void)setProperty:(id)fp8;
- (id)property;
- (void)setAction:(id)fp(null);
- (id)action;
- (void)setHighlighted:(BOOL)fp8;
- (BOOL)highlighted;
- (void)setMultipleLines:(BOOL)fp8;
- (BOOL)multipleLines;
- (void)setDetailText:(id)fp8;
- (id)detailText;
- (void)setImage:(id)fp8;
- (id)image;
- (void).cxx_destruct;
- (id)label;
- (id)value;
- (id)valueText;
- (id)initWithContactProperty:(id)fp8;

@end

