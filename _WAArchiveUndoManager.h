/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSString;

@interface _WAArchiveUndoManager : _ABAddressBookCopyArrayOfAllGroups
{
    NSString *_jid;
}

- (void)setJid:(id)fp8;
- (id)jid;
- (void).cxx_destruct;
- (void)removeAllActions;
- (void)removeAllActionsWithTarget:(id)fp8;
- (void)registerUndoWithTarget:(id)fp8 selector:(SEL)fp12 object:(id)fp16;

@end

