/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WAInputTextViewDelegate-Protocol.h"
#import "WAWebURLPreviewViewDelegate-Protocol.h"

@class UIButton, UIImageView, UILabel, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIScrollView, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView, WAAnimatedCancelLabel, WAInputTextView, WAWebURLPreviewView;

@interface WAChatBar : _ABAddressBookCopyArrayOfAllGroups <WAInputTextViewDelegate, UIGestureRecognizerDelegate, WAWebURLPreviewViewDelegate>
{
    BOOL _sendButtonHidden;
    UIView *_contentView;
    UIView *_backgroundView;
    UIView *_inputBoxView;
    WAInputTextView *_inputTextView;
    UIView *_placeholderTapReceiverView;
    struct CGPoint _selectionPoint;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UISwipeGestureRecognizer *_downSwipeGestureRecognizer;
    BOOL _clearingTextViewAfterSendingMessage;
    UIImageView *_dividerImageView;
    UIScrollView *_statusBarTapDetectionScrollView;
    WAWebURLPreviewView *_webURLPreview;
    UILabel *_pttRecordingProgressLabel;
    WAAnimatedCancelLabel *_pttSlideToCancelLabel;
    UIView *_pttSlideToCancelLabelMaskView;
    UIImageView *_pttMic;
    UIImageView *_pttMicInactive;
    UIImageView *_pttBucket;
    UIImageView *_pttBucketLid;
    struct CGPoint _pttButtonOriginalTouchPoint;
    BOOL _isPlaceholder;
    BOOL _preservesInnerContentLayoutOnBoundsChange;
    BOOL _pttRecordingIsActive;
    BOOL _receivedLongPress;
    BOOL _enabled;
    BOOL _editingEnabled;
    BOOL _includeCameraButton;
    id <WAChatBarDelegate> _delegate;
    UIButton *_sendButton;
    UIButton *_attachMediaButton;
    UIButton *_cameraButton;
    UIButton *_pttButton;
    UIPanGestureRecognizer *_panGestureRecognizer;
}

+ (void)initialize;
+ (float)textViewMinimumHeight;
+ (float)preferredInitialHeight;
+ (float)verticalPadding;
- (void)setIncludeCameraButton:(BOOL)fp8;
- (BOOL)includeCameraButton;
- (BOOL)editingEnabled;
- (BOOL)enabled;
- (void)setReceivedLongPress:(BOOL)fp8;
- (BOOL)receivedLongPress;
- (id)panGestureRecognizer;
- (BOOL)pttRecordingIsActive;
- (id)inputTextView;
- (id)pttButton;
- (id)cameraButton;
- (id)attachMediaButton;
- (id)sendButton;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setPreservesInnerContentLayoutOnBoundsChange:(BOOL)fp8;
- (BOOL)preservesInnerContentLayoutOnBoundsChange;
- (BOOL)isPlaceholder;
- (void).cxx_destruct;
- (void)cancelPTTRecording;
- (void)animatePttControlsOutWithDiscardAnimation:(BOOL)fp8;
- (void)setRecordingMicActive:(BOOL)fp8;
- (void)animatePttControlsIn;
- (void)setPTTRecordingTime:(double)fp8;
- (void)pttButtonTrackSliding:(id)fp8 withEvent:(id)fp12;
- (void)pttButtonReleased:(id)fp8 withEvent:(id)fp12;
- (void)pttButtonPressed:(id)fp8 withEvent:(id)fp12;
- (void)configurePTTViews;
- (void)textViewDictationDidEnd:(id)fp8;
- (void)textViewDidChange:(id)fp8;
- (BOOL)textViewShouldEndEditing:(id)fp8;
- (void)textViewDidEndEditing:(id)fp8;
- (void)textViewDidBeginEditing:(id)fp8;
- (BOOL)textViewShouldBeginEditing:(id)fp8;
- (void)textViewDidPasteImage:(id)fp8;
- (void)textView:(id)fp8 needsHeightChangedTo:(float)fp12;
- (float)textViewMaximumHeight:(id)fp8;
- (BOOL)scrollViewShouldScrollToTop:(id)fp8;
- (void)handleLongPress:(id)fp8;
- (void)handlePan:(id)fp8;
- (void)hideKeyboard;
- (void)forceShowKeyboard;
- (void)showKeyboard;
- (BOOL)isDictationInProgress;
- (BOOL)isKeyboardVisible;
- (void)relayoutWebURLPreview;
- (void)setWebPageMetadata:(id)fp8;
- (id)webPageMetadata;
- (BOOL)gestureRecognizer:(id)fp8 shouldReceiveTouch:(id)fp12;
- (BOOL)isInDictationMode;
- (void)acceptAutoCorrection;
- (void)showPopupMenuForMessageCell:(id)fp8;
- (void)clearAnimationInSubviews:(id)fp8;
- (void)clearAnimations;
- (void)updateConstraints;
- (void)internalSetInputTextViewHeight:(float)fp8 webURLPreviewHeight:(float)fp12 animated:(BOOL)fp16;
- (void)reallySetInputTextViewHeight:(float)fp8 animated:(BOOL)fp12;
- (void)setInputTextViewHeight:(float)fp8 animated:(BOOL)fp12;
- (void)setWebURLPreviewHeight:(float)fp8 animated:(BOOL)fp12;
- (void)didSendMessage;
- (float)visibleHeight;
- (struct CGRect)contentFrame;
- (void)cameraButtonTapped:(id)fp8;
- (void)attachMediaButtonTapped:(id)fp8;
- (void)applicationDidReceiveCommandReturnEvent:(id)fp8;
- (void)sendButtonTapped:(id)fp8;
- (void)updateChatBarAnimated:(BOOL)fp8;
- (void)setNeedsUpdateButtons;
- (void)restoreSelectedTextRangeFromChatBar:(id)fp8 showMenu:(BOOL)fp12;
- (void)clearSelectionPoint;
- (void)configureWithChatBar:(id)fp8;
- (void)redraw;
- (id)hitTest:(struct CGPoint)fp8 withEvent:(id)fp16;
- (void)compactLayout;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (void)layoutSubviews;
- (float)singleLineHeight;
- (void)willAnimateRotationToInterfaceOrientation:(int)fp8;
- (void)webURLPreviewViewDidDismiss:(id)fp8;
- (void)configureViews;
- (void)configureViews6;
- (void)fontSizeDidChange:(id)fp8;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)fp8;
- (void)setEnabled:(BOOL)fp8;
- (id)text;
- (void)setText:(id)fp8;
- (void)inputTextViewTapped:(id)fp8;
- (void)setEditingEnabled:(BOOL)fp8;
- (void)forceInputTextViewToResignFirstResponder;
- (BOOL)isHorizontallyFlipped;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8 isPlaceHolder:(BOOL)fp24;
- (id)initWithFrame:(struct CGRect)fp8;
- (id)initWithCoder:(id)fp8;

@end

