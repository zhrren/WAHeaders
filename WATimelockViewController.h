/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAViewController.h"

@class NSTimer, UILabel, UIButton, NSDate, NSURL, WACircularProgressView;

__attribute__((visibility("hidden")))
@interface WATimelockViewController : WAViewController {
	NSTimer* _progressViewTimer;
	NSDate* _viewCreationDate;
	NSURL* _learnMoreURL;
	float _progress;
	UILabel* _progressLabel;
	UILabel* _labelNotice;
	UIButton* _buttonLearnMore;
	WACircularProgressView* _progressView;
	double _timeRemaining;
}
@property(retain, nonatomic) WACircularProgressView* progressView;
@property(retain, nonatomic) UIButton* buttonLearnMore;
@property(retain, nonatomic) UILabel* labelNotice;
@property(retain, nonatomic) UILabel* progressLabel;
@property(assign, nonatomic) double timeRemaining;
@property(assign, nonatomic) float progress;
+(id)controller;
-(void).cxx_destruct;
-(void)showLearnMorePage;
-(void)progressViewTimer:(id)timer;
-(void)reloadHelperText;
-(void)prepareToBeDismissed;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

