/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol TextBlockDelegate <NSObject>
- (void)textBlockWillAddToContacts:(id)fp8;
- (void)textBlockWillAddToExistingContact:(id)fp8;
- (void)textBlock:(id)fp8 willAddNewPerson:(void *)fp12;
- (void)textBlockWillCreateEvent:(id)fp8;
- (void)textBlock:(id)fp8 willCallPhoneURL:(id)fp12;
- (void)textBlock:(id)fp8 willOpenURL:(id)fp12;
@end
