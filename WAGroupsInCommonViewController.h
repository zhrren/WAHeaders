/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAChatSessionsViewController.h"

@class WAContact;

@interface WAGroupsInCommonViewController : WAChatSessionsViewController
{
    WAContact *_contact;
}

+ (id)predicateForFetchRequestWithContact:(id)fp8;
+ (unsigned int)numberOfGroupsInCommonWithContact:(id)fp8;
- (id)contact;
- (void).cxx_destruct;
- (void)configureCell:(id)fp8 forChatSession:(id)fp12 message:(id)fp16;
- (void)setUpNoContentView:(id)fp8;
- (id)predicateForFetchRequest;
- (void)commonInit;
- (id)initWithContact:(id)fp8;

@end

