/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAViewController.h"

@class NSDate, NSTimer, NSURL, UIButton, UILabel, WACircularProgressView;

@interface WATimelockViewController : WAViewController
{
    NSTimer *_progressViewTimer;
    NSDate *_viewCreationDate;
    NSURL *_learnMoreURL;
    float _progress;
    UILabel *_progressLabel;
    UILabel *_labelNotice;
    UIButton *_buttonLearnMore;
    WACircularProgressView *_progressView;
    double _timeRemaining;
}

+ (id)controller;
- (void)setProgressView:(id)fp8;
- (id)progressView;
- (void)setButtonLearnMore:(id)fp8;
- (id)buttonLearnMore;
- (void)setLabelNotice:(id)fp8;
- (id)labelNotice;
- (void)setProgressLabel:(id)fp8;
- (id)progressLabel;
- (double)timeRemaining;
- (float)progress;
- (void).cxx_destruct;
- (void)showLearnMorePage;
- (void)setTimeRemaining:(double)fp8;
- (void)setProgress:(float)fp8;
- (void)progressViewTimer:(id)fp8;
- (void)reloadHelperText;
- (void)prepareToBeDismissed;
- (unsigned int)supportedInterfaceOrientations;
- (void)loadView;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

