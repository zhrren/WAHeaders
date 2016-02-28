/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "WAInputTextViewDelegate-Protocol.h"

@class CAShapeLayer, NSMutableDictionary, NSString, UIColor, UILabel, UIView, WAInputTextView;

@interface WACaptionBar : _ABAddressBookCopyArrayOfAllGroups <WAInputTextViewDelegate>
{
    WAInputTextView *_textView;
    WAInputTextView *_secondaryTextView;
    NSString *_placeholderText;
    float _blendAmount;
    BOOL _ignoreTextViewHeightChanges;
    NSMutableDictionary *_cachedTextHeights;
    UIView *_borderView;
    CAShapeLayer *_maskLayer;
    UIView *_contentView;
    UIView *_backgroundView;
    UIColor *_highlightedTextColor;
    UIColor *_textColor;
    UIColor *_highlightedBorderColor;
    UIColor *_borderColor;
    struct UIEdgeInsets _borderInsets;
    NSMutableDictionary *_cachedTextDirections;
    BOOL _placeholderIsRTL;
    BOOL _textDidChange;
    UIView *_characterCountContainer;
    UILabel *_characterCountLabel;
    UILabel *_secondaryCharacterCountLabel;
    BOOL _interfaceRotationInProgress;
    id <WACaptionBarDelegate> _delegate;
    NSString *_text;
    unsigned int _maximumCaptionLength;
    float _keyboardHeight;
    int _style;
    struct UIEdgeInsets _edgeInsets;
    struct UIEdgeInsets _textViewInsets;
}

- (int)style;
- (float)keyboardHeight;
- (void)setMaximumCaptionLength:(unsigned int)fp8;
- (unsigned int)maximumCaptionLength;
- (BOOL)isInterfaceRotationInProgress;
- (id)text;
- (void)setTextViewInsets:(struct UIEdgeInsets)fp8;
- (struct UIEdgeInsets)textViewInsets;
- (struct UIEdgeInsets)edgeInsets;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)keyboardDidHide:(id)fp8;
- (void)keyboardWillHide:(id)fp8;
- (void)keyboardDidShow:(id)fp8;
- (void)keyboardWillShow:(id)fp8;
- (void)hideKeyboard;
- (BOOL)isKeyboardShown;
- (void)textViewDictationDidEnd:(id)fp8;
- (void)textViewDidChange:(id)fp8;
- (BOOL)textView:(id)fp8 shouldChangeTextInRange:(struct _NSRange)fp12 replacementText:(id)fp20;
- (void)textViewDidEndEditing:(id)fp8;
- (void)textViewDidBeginEditing:(id)fp8;
- (BOOL)textViewShouldEndEditing:(id)fp8;
- (BOOL)textViewShouldBeginEditing:(id)fp8;
- (void)textViewDidPasteImage:(id)fp8;
- (void)textView:(id)fp8 needsHeightChangedTo:(float)fp12;
- (float)textViewMaximumHeight:(id)fp8;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)willAnimateWidthChangeTo:(float)fp8;
- (void)willRotateToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (BOOL)shouldShowCharacterCountLabelForText:(id)fp8;
- (void)updateCharacterCountLabel:(id)fp8 withCount:(unsigned int)fp12;
- (void)updateCharacterCountLabel:(id)fp8 forTextView:(id)fp12;
- (void)updateCharacterCount;
- (void)showText:(id)fp8 blendedWithText:(id)fp12 blendAmount:(float)fp16;
- (void)setText:(id)fp8 onTextView:(id)fp12;
- (void)setText:(id)fp8;
- (void)updateFonts;
- (void)setEdgeInsets:(struct UIEdgeInsets)fp8;
- (void)setBorderHighlighted:(BOOL)fp8;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)updateMask;
- (void)setFrame:(struct CGRect)fp8;
- (void)setBounds:(struct CGRect)fp8;
- (float)maximumHeight;
- (float)singleLineHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (float)textViewHeightForText:(id)fp8 lastLineRect:(struct CGRect *)fp12;
- (id)newTextView;
- (void)dealloc;
- (id)initWithStyle:(int)fp8;

@end

