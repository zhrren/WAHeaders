/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol WAChatBarManagerDelegate <NSObject>
- (void)chatBarManager:(id)fp8 didCancelPTTRecordingByUser:(BOOL)fp12;
- (void)chatBarManagerDidEndPTTRecording:(id)fp8;
- (double)chatBarManagerWillEndPTTRecording:(id)fp8;
- (void)chatBarManagerDidBeginPTTRecording:(id)fp8;
- (BOOL)chatBarManagerShouldBeginPTTRecording:(id)fp8;
- (void)chatBarManagerWantsToPresentCamera:(id)fp8;
- (void)chatBarManagerWantsToAttachMedia:(id)fp8;
- (void)chatBarManager:(id)fp8 didPasteImage:(id)fp12;
- (void)chatBarManager:(id)fp8 didEndDraggingChatBarWithAdditionalTranslation:(float)fp12 finalBottomInset:(float)fp16;
- (void)chatBarManagerWillBeginDraggingChatBar:(id)fp8;
- (void)chatBarManagerWantsToScrollToTop:(id)fp8;
- (BOOL)chatBarManagerDelegateIsPreviewingContent:(id)fp8;
- (BOOL)chatBarManagerDelegateIsDisappearing:(id)fp8;
- (BOOL)chatBarManagerDelegateIsAppearing:(id)fp8;
- (void)chatBarManager:(id)fp8 needsAdjustBottomInset:(float)fp12 withScrolling:(BOOL)fp16;
- (void)chatBarManager:(id)fp8 userDidSubmitText:(id)fp12 metadata:(id)fp16 completion:(id)fp(null);
- (void)chatBarManagerDidChangeText:(id)fp8;
- (float)chatBarManagerMaximumHeight:(id)fp8;
- (unsigned int)chatBarManagerVisibleConnectionStatus:(id)fp8;
@end

