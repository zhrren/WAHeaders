/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

__attribute__((visibility("hidden")))
@interface WACameraRecordingTimeView : UIView {
	UILabel* _timeLabel;
	UIImageView* _recordingDot;
	XXStruct_pwHToB _recordingTime;
}
@property(assign, nonatomic) XXStruct_pwHToB recordingTime;
-(void).cxx_destruct;
-(void)didMoveToWindow;
-(void)setHidden:(BOOL)hidden;
-(void)updateAnimation;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end

