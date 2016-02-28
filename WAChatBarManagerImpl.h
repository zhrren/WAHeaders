/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "WAChatBarDelegate-Protocol.h"
#import "WAChatBarManager-Protocol.h"
#import "WAWebPageFromTextLoaderDelegate-Protocol.h"

@class NSNumber, NSObject<OS_dispatch_group>, UIViewController<WAChatBarManagerDelegate>, WAChatBar, WAWebPageFromTextLoader;

@interface WAChatBarManagerImpl : _ABAddressBookCopyArrayOfAllGroups <WAChatBarManager, WAChatBarDelegate, WAWebPageFromTextLoaderDelegate>
{
    WAChatBar *_placeholderChatBar;
    WAChatBar *_chatBar;
    unsigned int _keyboardState;
    BOOL _interfaceRotationInProgress;
    BOOL _notifyDelegateOfHeightChangeInKeyboardDidShow;
    float _keyboardHeight;
    BOOL _suppressScrollingOnNextKeyboardWillShow;
    NSObject<OS_dispatch_group> *_keyboardDispatchGroup;
    float _lastKeyboardDragOffset;
    BOOL _lastKeyboardDragDirectionIsUp;
    struct CGAffineTransform _keyboardTransformBeforeKeyboardDrag;
    NSNumber *_externalDragInProgressStartingWithKeyboardShown;
    struct CGRect _prevStatusBarFrame;
    BOOL _isUsingExternalKeyboard;
    BOOL _lastKeyWindowWasModalWindow;
    BOOL _forceViewRotationOnShowingOrHidingKeyboard;
    BOOL _isRegisteredForKeyboardNotifications;
    BOOL _unregisterForKeyboardNotificationsOnHide;
    WAWebPageFromTextLoader *_webPageLoader;
    BOOL _interactiveKeyboardDraggingInProgress;
    BOOL _enabled;
    BOOL _scrollToBottomOnShowKeyboardOnAppear;
    BOOL _interactiveKeyboardDraggingEnabled;
    BOOL _showKeyboardOnAppear;
    UIViewController<WAChatBarManagerDelegate> *_delegate;
}

+ (void)windowDidBecomeVisible:(id)fp8;
+ (void)windowDidResignKey:(id)fp8;
+ (void)windowDidBecomeKey:(id)fp8;
+ (void)initialize;
- (void)setShowKeyboardOnAppear:(BOOL)fp8;
- (BOOL)showKeyboardOnAppear;
- (BOOL)interactiveKeyboardDraggingEnabled;
- (void)setScrollToBottomOnShowKeyboardOnAppear:(BOOL)fp8;
- (BOOL)scrollToBottomOnShowKeyboardOnAppear;
- (BOOL)isEnabled;
- (BOOL)interactiveKeyboardDraggingInProgress;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)endDraggingChatBarWithTranslation:(float)fp8;
- (void)updateChatBarDraggingWithTranslation:(float)fp8;
- (BOOL)beginDraggingChatBar;
- (void)handleChatBarDragging:(id)fp8;
- (void)chatBarDidEndDragging:(id)fp8;
- (void)chatBarDidDrag:(id)fp8;
- (void)beginDraggingWithKeyboardShown;
- (void)chatBarDidBeginDragging:(id)fp8;
- (void)hideKeyboardAfterDragging;
- (struct CGAffineTransform)applyTranslation:(float)fp8 toKeyboardWindowTransform:(struct CGAffineTransform)fp12;
- (void)endDraggingWithKeyboardOffset:(float)fp8;
- (void)updateDraggingWithKeyboardOffset:(float)fp8;
- (void)setInteractiveKeyboardDraggingEnabled:(BOOL)fp8;
- (void)webPageFromTextLoaderDidUpdateMetadata:(id)fp8;
- (void)chatBarWantsToDismissWebURLPreview:(id)fp8;
- (void)chatBarWantsToScrollToTop:(id)fp8;
- (void)chatBar:(id)fp8 didCancelPTTRecordingByUser:(BOOL)fp12;
- (void)chatBarDidEndPTTRecording:(id)fp8;
- (double)chatBarWillEndPTTRecording:(id)fp8;
- (void)chatBarDidBeginPTTRecording:(id)fp8;
- (BOOL)chatBarShouldBeginPTTRecording:(id)fp8;
- (void)chatBarDidChangeHeight:(id)fp8;
- (void)chatBarUserDidSubmitText:(id)fp8;
- (void)chatBarWantsToPresentCamera:(id)fp8;
- (void)chatBarWantsToAttachMedia:(id)fp8;
- (void)chatBar:(id)fp8 didPasteImage:(id)fp12;
- (void)chatBarDidChangeText:(id)fp8;
- (void)chatBarDidEndEditing:(id)fp8;
- (void)chatBarWillEndEditing:(id)fp8;
- (void)chatBarDidBeginEditing:(id)fp8;
- (BOOL)chatBarShouldBeginEditing:(id)fp8;
- (void)chatBarUserDidFocusChatBar:(id)fp8;
- (void)chatBarDidMoveToWindow:(id)fp8;
- (void)chatBar:(id)fp8 willMoveToWindow:(id)fp12;
- (float)chatBarMaximumHeight:(id)fp8;
- (unsigned int)chatBarVisibleConnectionStatus:(id)fp8;
- (void)keyboardDidHide:(id)fp8;
- (void)keyboardWillHide:(id)fp8;
- (void)keyboardDidChangeFrame:(id)fp8;
- (void)keyboardWillChangeFrame:(id)fp8;
- (void)keyboardDidShow:(id)fp8;
- (void)keyboardWillShow:(id)fp8;
- (BOOL)isKeyboardFrameChangeNotification:(id)fp8;
- (struct CGRect)rectRoundedToNearestPoint:(struct CGRect)fp8;
- (BOOL)rect:(struct CGRect)fp8 intersectsRect:(struct CGRect)fp24;
- (void)ensureKeyboardHidden;
- (void)applicationWillDismissCallWindow:(id)fp8;
- (void)applicationWillPresentCallWindow:(id)fp8;
- (void)resetKeyboardLayout;
- (void)applicationDidChangeStatusBarFrame:(id)fp8;
- (void)applicationWillChangeStatusBarFrame:(id)fp8;
- (void)delegateWillDisappearWithoutInteraction;
- (void)setChatBarAlpha:(float)fp8;
- (float)chatBarAlpha;
- (void)setKeyboardPresentationDisabled:(BOOL)fp8;
- (BOOL)isKeyboardPresentationDisabled;
- (void)setEnabled:(BOOL)fp8;
- (void)updatePlaceholderChatBarFromChatBar;
- (void)setText:(id)fp8;
- (id)text;
- (void)setNeedsUpdateButtons;
- (void)makeMainApplicationWindowKeyWindow;
- (void)makeKeyboardWindowKeyWindow;
- (void)restoreKeyWindow;
- (BOOL)isKeyboardVisible;
- (void)hideKeyboard;
- (BOOL)showKeyboard;
- (void)showPopupMenuForMessageCell:(id)fp8;
- (id)pttButton;
- (id)attachMediaButton;
- (float)bottomInset;
- (void)cancelPTTRecording;
- (void)setPTTRecordingTime:(double)fp8;
- (void)didChangeInterfaceOrientation;
- (void)willAnimateRotationToInterfaceOrientation:(int)fp8;
- (void)willChangeInterfaceOrientation;
- (BOOL)shouldAutorotate;
- (void)unregisterForKeyboardNotificationsIfNeeded;
- (void)registerForKeyboardNotificationsIfNeeded;
- (float)contentViewHeight;
- (id)contentView;
- (void)dealloc;
- (id)initWithInitialWidth:(float)fp8;
- (void)windowDidBecomeKey:(id)fp8;

@end
