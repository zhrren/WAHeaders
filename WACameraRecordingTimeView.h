/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class UIImageView, UILabel;

@interface WACameraRecordingTimeView : _ABAddressBookCopyArrayOfAllGroups
{
    UILabel *_timeLabel;
    UIImageView *_recordingDot;
    CDAnonymousStruct1 _recordingTime;
}

- (CDAnonymousStruct1)recordingTime;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setHidden:(BOOL)fp8;
- (void)updateAnimation;
- (void)setRecordingTime:(CDAnonymousStruct1)fp8;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)fp8;

@end
