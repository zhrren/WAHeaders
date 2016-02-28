/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSData, NSMutableArray, NSMutableDictionary, NSString;

@interface XMPPStanzaElement : _ABAddressBookCopyArrayOfAllGroups
{
    NSMutableDictionary *_attributes;
    NSMutableArray *_children;
    BOOL _compressed;
    NSString *_name;
    NSData *_value;
}

+ (id)batteryElement;
+ (id)configElement;
- (id)children;
- (void)setValue:(id)fp8;
- (id)value;
- (void)setName:(id)fp8;
- (id)name;
- (void)setCompressed:(BOOL)fp8;
- (BOOL)compressed;
- (void).cxx_destruct;
- (id)attributes;
- (id)log;
- (id)description;
- (id)childArrayByName:(id)fp8;
- (id)childByName:(id)fp8 attribute:(id)fp12 value:(id)fp16;
- (id)childByName:(id)fp8;
- (id)childByIndex:(unsigned int)fp8;
- (unsigned int)childCount;
- (void)removeChild:(id)fp8;
- (void)addChild:(id)fp8;
- (id)allAttributes;
- (id)attributeByName:(id)fp8;
- (void)setAttributeWithName:(id)fp8 value:(id)fp12;
- (id)initWithName:(id)fp8;
- (void)addStatusAttributeWithMessage:(id)fp8;
- (id)participantJIDs;

@end

