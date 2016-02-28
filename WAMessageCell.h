/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "WAMediaProgressDelegate-Protocol.h"
#import "WAMessageTextViewDelegate-Protocol.h"
#import "WATableViewCellPreviewing-Protocol.h"

@class NSArray, NSSet, UIButton, UIImageView, UILabel, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UIView, UIViewController<WATableViewCellPreviewingDelegate>, WAChatCellData, WAMessageFooterView;

@interface WAMessageCell : _ABAddressBookCopyArrayOfAllGroups <UIViewControllerPreviewingDelegate, WAMediaProgressDelegate, WAMessageTextViewDelegate, WATableViewCellPreviewing, UIGestureRecognizerDelegate>
{
    WAChatCellData *_cellData;
    UIImageView *_imageViewCheckmark;
    UIButton *_buttonAlert;
    BOOL _singleTapDisabled;
    BOOL _cellLayoutDisabled;
    BOOL _skipLayoutPass;
    BOOL _horizontallyFlipped;
    NSArray *_accessibleElements;
    UIPanGestureRecognizer *_swipeGestureRecognizer;
    id <WAMessageCellDelegate> _delegate;
    WAMessageFooterView *_footerView;
    UILabel *_fromNameLabel;
    UILabel *_pushNameLabel;
    UIImageView *_bubbleImageView;
    float _rightAccessoryViewMargin;
    UIView *_rightAccessoryView;
    UIView *_cellHeader;
    UIView *_cellFooter;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIViewController<WATableViewCellPreviewingDelegate> *_previewingDelegate;
    NSSet *_previewingContexts;
    struct UIEdgeInsets _currentContentInsets;
}

+ (void)unhighlightAllSubviewsOfView:(id)fp8 exceptForView:(id)fp12;
+ (float)rowHeightForCellData:(id)fp8 maxWidth:(float)fp12;
+ (struct CGSize)contentSizeForCellData:(id)fp8 maxWidth:(float)fp12;
+ (float)maximumBubbleWidthForCellWidth:(float)fp8;
+ (struct UIEdgeInsets)textInsetsForCellData:(id)fp8;
+ (struct UIEdgeInsets)contentInsetsForCellData:(id)fp8 cellWidth:(float)fp12;
+ (struct UIEdgeInsets)baseContentInsetsForCellData:(id)fp8;
+ (struct UIEdgeInsets)bubbleMarginsForCellData:(id)fp8;
+ (BOOL)shouldShowHeaderForCellData:(id)fp8;
+ (unsigned int)bubbleDirectionForCellData:(id)fp8;
+ (BOOL)selectable;
+ (float)maxBubbleWidthForCellWidth:(float)fp8;
+ (id)cellReuseIdentifier;
+ (Class)cellClassForCellData:(id)fp8;
+ (void)initialize;
- (void)setPreviewingContexts:(id)fp8;
- (id)previewingContexts;
- (void)setPreviewingDelegate:(id)fp8;
- (id)previewingDelegate;
- (id)longPressGestureRecognizer;
- (id)doubleTapGestureRecognizer;
- (id)singleTapGestureRecognizer;
- (BOOL)isHorizontallyFlipped;
- (void)setSkipLayoutPass:(BOOL)fp8;
- (BOOL)skipLayoutPass;
- (BOOL)cellLayoutDisabled;
- (struct UIEdgeInsets)currentContentInsets;
- (id)cellFooter;
- (id)cellHeader;
- (id)rightAccessoryView;
- (void)setRightAccessoryViewMargin:(float)fp8;
- (float)rightAccessoryViewMargin;
- (void)setBubbleImageView:(id)fp8;
- (id)bubbleImageView;
- (id)pushNameLabel;
- (id)fromNameLabel;
- (void)setFooterView:(id)fp8;
- (id)footerView;
- (void)setSingleTapDisabled:(BOOL)fp8;
- (BOOL)singleTapDisabled;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (id)swipeGestureRecognizer;
- (void)setAccessibleElements:(id)fp8;
- (id)accessibleElements;
- (id)cellData;
- (void).cxx_destruct;
- (void)setProgress:(float)fp8 forMessage:(id)fp12;
- (int)indexOfAccessibilityElement:(id)fp8;
- (id)accessibilityElementAtIndex:(int)fp8;
- (int)accessibilityElementCount;
- (void)configureForAccessibility;
- (id)accessibilityValueText;
- (id)accessibilityHintText;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)setEditing:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setRightAccessoryView:(id)fp8;
- (void)setCellFooter:(id)fp8;
- (void)setCellHeader:(id)fp8;
- (void)resetAppearance;
- (void)setProgress:(float)fp8;
- (void)setSelected:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setHighlighted:(BOOL)fp8 animated:(BOOL)fp12;
- (void)addTransitionAnimation;
- (void)setBubbleHighlighted:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setDimmed:(BOOL)fp8;
- (void)messageTextView:(id)fp8 willShowMoreOptionsForTextBlock:(id)fp12 completionHandler:(id)fp(null);
- (void)messageTextView:(id)fp8 didSelectTextBlock:(id)fp12;
- (void)previewingContext:(id)fp8 commitViewController:(id)fp12;
- (id)previewingContext:(id)fp8 viewControllerForLocation:(struct CGPoint)fp12;
- (void)prepareFor3DTouchPreviewWithContext:(id)fp8;
- (id)registerSubviewsForPreviewingUsingViewController:(id)fp8 previewingDelegate:(id)fp12;
- (id)dataForPreviewingContext:(id)fp8 atLocation:(struct CGPoint)fp12;
- (void)unregisterForPreviewing;
- (void)registerForPreviewingUsingViewController:(id)fp8;
- (void)markMessageAsStarred:(id)fp8;
- (void)stopSpeakingMessage:(id)fp8;
- (void)speakMessage:(id)fp8;
- (void)replyMessageSender:(id)fp8;
- (void)addMessageSenderToContacts:(id)fp8;
- (void)forwardMessage:(id)fp8;
- (void)messageDetails:(id)fp8;
- (void)deleteMessage:(id)fp8;
- (void)reallySaveMediaInMessage;
- (void)saveMediaInMessage:(id)fp8;
- (void)copyMessage:(id)fp8;
- (void)performCopy;
- (BOOL)canPerformCopy;
- (BOOL)canPerformAction:(SEL)fp8 withSender:(id)fp12;
- (void)menuControllerDidHideMenu:(id)fp8;
- (void)didHidePopupMenu;
- (void)didShowPopupMenu;
- (void)showPopupMenu;
- (void)showPopupMenuFromCell;
- (BOOL)canBecomeFirstResponder;
- (id)referenceViewForPopupMenu;
- (struct CGRect)targetRectForPopupMenu;
- (id)starMessagePopupMenuItemWithAction:(SEL)fp8;
- (id)shortNameForPopupMenu;
- (void)layoutSubviews;
- (void)reloadBubbleImage;
- (void)performSelectionRefusedAnimation;
- (void)updateStarIndicatorAnimated:(BOOL)fp8;
- (void)setCellData:(id)fp8 delegate:(id)fp12;
- (void)refreshUI;
- (void)showAlertButton:(BOOL)fp8 animated:(BOOL)fp12;
- (void)alertButtonTapped:(id)fp8;
- (void)configureCellWithAnimation:(BOOL)fp8;
- (void)handleLongPressOnBubbleWithLocation:(struct CGPoint)fp8;
- (void)_internalHandleLongPressGesture:(id)fp8;
- (void)handleDoubleTapOnBubbleWithLocation:(struct CGPoint)fp8;
- (void)_internalHandleDoubleTapGesture:(id)fp8;
- (void)handleTapOnBubbleWithLocation:(struct CGPoint)fp8;
- (void)_internalHandleTapGesture:(id)fp8;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (void)handleSwipeGesture:(id)fp8;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end
