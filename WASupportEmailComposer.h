/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "ProblemInputControllerDelegate-Protocol.h"

@class NSString, UIViewController, WAServerStatus;

@interface WASupportEmailComposer : _ABAddressBookCopyArrayOfAllGroups <ProblemInputControllerDelegate, MFMailComposeViewControllerDelegate>
{
    WAServerStatus *_serverStatus;
    WASupportEmailComposer *_retainedSelf;
    unsigned int _numberOfFAQSearchResultsReturned;
    unsigned int _numberOfFAQSearchResultsOpened;
    BOOL _skipServerStatusCheck;
    BOOL _registration;
    BOOL _suppressHUD;
    id _completion;
    NSString *_context;
    NSString *_initialText;
    UIViewController *_controller;
}

+ (id)composer;
- (void)setController:(id)fp8;
- (id)controller;
- (void)setSuppressHUD:(BOOL)fp8;
- (BOOL)suppressHUD;
- (void)setRegistration:(BOOL)fp8;
- (BOOL)registration;
- (void)setSkipServerStatusCheck:(BOOL)fp8;
- (BOOL)skipServerStatusCheck;
- (void)setInitialText:(id)fp8;
- (id)initialText;
- (void)setContext:(id)fp8;
- (id)context;
- (void)setCompletion:(id)fp(null);
- (id)completion;
- (void).cxx_destruct;
- (void)mailComposeController:(id)fp8 didFinishWithResult:(int)fp12 error:(id)fp16;
- (void)probleminputControllerDidCancel:(id)fp8;
- (void)problemInputController:(id)fp8 didFinishWithText:(id)fp12 attachment:(id)fp16 imageAttachments:(id)fp20;
- (void)cancel;
- (void)presentFromViewController:(id)fp8;
- (void)finishComposerWithResult:(BOOL)fp8;
- (void)composeEmailWithProblemDescription:(id)fp8 attachment:(id)fp12 imageAttachments:(id)fp16;

@end
