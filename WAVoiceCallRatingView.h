/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class UILabel, UITapGestureRecognizer, WAMaskedTextButton, WAStarRatingControl, _WAVoiceCallRatingViewTextField;

@interface WAVoiceCallRatingView : _ABAddressBookCopyArrayOfAllGroups <UITextFieldDelegate, UIGestureRecognizerDelegate>
{
    WAMaskedTextButton *_notNowButton;
    WAMaskedTextButton *_submitButton;
    WAStarRatingControl *_starRater;
    UILabel *_ratingLabel;
    UILabel *_titleLabel;
    _WAVoiceCallRatingViewTextField *_textField;
    UITapGestureRecognizer *_tapGesture;
    id <WAVoiceCallRatingViewDelegate> _delegate;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)fp8;
- (void)keyboardWillShow:(id)fp8;
- (BOOL)gestureRecognizer:(id)fp8 shouldReceiveTouch:(id)fp12;
- (int)rating;
- (id)textInput;
- (BOOL)textFieldShouldReturn:(id)fp8;
- (void)viewTapped:(id)fp8;
- (void)starRatingChanged:(id)fp8;
- (void)submitButtonTapped:(id)fp8;
- (void)notNowButtonTapped:(id)fp8;
- (void)dismissKeyboardIfNeededWithCompletionHandler:(id)fp(null);
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (BOOL)pointInside:(struct CGPoint)fp8 withEvent:(id)fp16;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end

