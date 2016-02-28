/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSMutableArray, NSString, NSTextCheckingResult;

@interface TextBlock : _ABAddressBookCopyArrayOfAllGroups
{
    NSMutableArray *_textRects;
    id <TextBlockDelegate> _delegate;
    BOOL _highlighted;
    NSString *_text;
    NSString *_url;
    NSTextCheckingResult *_checkingResult;
    struct _NSRange _range;
    unsigned long long _type;
}

+ (id)applicationURLForSparrowFromMailtoURL:(id)fp8;
+ (id)applicationURLForGmailFromMailtoURL:(id)fp8;
+ (id)blockWithRange:(struct _NSRange)fp8 text:(id)fp16;
- (void)setHighlighted:(BOOL)fp8;
- (BOOL)highlighted;
- (void)setCheckingResult:(id)fp8;
- (id)checkingResult;
- (void)setType:(unsigned long long)fp8;
- (unsigned long long)type;
- (void)setUrl:(id)fp8;
- (id)url;
- (void)setText:(id)fp8;
- (id)text;
- (void)setRange:(struct _NSRange)fp8;
- (struct _NSRange)range;
- (void).cxx_destruct;
- (void *)copyPersonRecord;
- (id)actionSheetForDate;
- (id)actionSheetForMailtoURL:(id)fp8;
- (id)actionSheetForWebURL:(id)fp8;
- (id)actionSheetForPhoneNumber;
- (id)actionSheetForAddress;
- (id)actionSheetWithDelegate:(id)fp8 completionHandler:(id)fp(null);
- (void)deleteAllTextRects;
- (void)addTextRect:(id)fp8;
- (id)textRects;
- (BOOL)isEqualToTextBlock:(id)fp8;
- (BOOL)isEqual:(id)fp8;
- (id)initWithRange:(struct _NSRange)fp8 text:(id)fp16;

@end

