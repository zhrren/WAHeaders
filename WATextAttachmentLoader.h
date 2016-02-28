/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface WATextAttachmentLoader : _ABAddressBookCopyArrayOfAllGroups
{
    NSMutableArray *_registeredSizes;
    NSDictionary *_symbolDict;
    NSMutableDictionary *_scaledSizeToFilenameSuffixDict;
    NSArray *_symbolArray;
}

+ (BOOL)isCustomEmojiSupported;
+ (id)skinToneModifierSet;
+ (id)customEmojiSet;
+ (id)regionalPairSet;
+ (id)sharedLoader;
- (void)setSymbolArray:(id)fp8;
- (id)symbolArray;
- (void).cxx_destruct;
- (id)bestImageForName:(id)fp8 pointSize:(float)fp12;
- (id)bestRegisteredSizeForPointSize:(float)fp8;
- (id)textAttachmentForName:(id)fp8 pointSize:(float)fp12;
- (void)registerSize:(int)fp8;
- (id)init;

@end
