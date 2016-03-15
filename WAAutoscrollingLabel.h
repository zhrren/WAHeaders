/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <UIKit/UILabel.h>

@class NSTimer;
@protocol WAAutoScrollingLabelDelegate;

__attribute__((visibility("hidden")))
@interface WAAutoscrollingLabel : UILabel {
	BOOL _scrollEnabled;
	BOOL _needsToScroll;
	BOOL _isIniting;
	id<WAAutoScrollingLabelDelegate> _delegate;
	float _pointsPerSecond;
	UILabel* _scrollableLabel;
	float _scrollableLabelTextWidth;
	NSTimer* _noScrollTimer;
}
@property(assign, nonatomic) __weak NSTimer* noScrollTimer;
@property(assign, nonatomic) BOOL isIniting;
@property(assign, nonatomic) BOOL needsToScroll;
@property(assign, nonatomic) float scrollableLabelTextWidth;
@property(retain, nonatomic) UILabel* scrollableLabel;
@property(assign, nonatomic) float pointsPerSecond;
@property(assign, nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property(readonly, assign, nonatomic) double scrollDuration;
@property(readonly, assign, nonatomic) BOOL textRequiresScrolling;
@property(assign, nonatomic) __weak id<WAAutoScrollingLabelDelegate> delegate;
-(void).cxx_destruct;
-(void)resizeScrollableLabelAndStartScrolling;
-(void)resizeScrollableLabel;
-(BOOL)startScrollingIfNecessary;
-(float)scrollableLabelWidth;
-(float)wa_baselineOffsetFromBottom;
-(int)textAlignment;
-(void)setTextAlignment:(int)alignment;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)highlighted;
-(id)highlightedTextColor;
-(void)setHighlightedTextColor:(id)color;
-(int)baselineAdjustment;
-(void)setBaselineAdjustment:(int)adjustment;
-(CGSize)shadowOffset;
-(void)setShadowOffset:(CGSize)offset;
-(id)shadowColor;
-(void)setShadowColor:(id)color;
-(id)textColor;
-(void)setTextColor:(id)color;
-(int)lineBreakMode;
-(void)setLineBreakMode:(int)mode;
-(id)backgroundColor;
-(void)setBackgroundColor:(id)color;
-(id)font;
-(void)setFont:(id)font;
-(int)numberOfLines;
-(void)setNumberOfLines:(int)lines;
-(id)attributedText;
-(void)setAttributedText:(id)text;
-(id)text;
-(void)setText:(id)text;
-(void)didMoveToWindow;
-(void)setBounds:(CGRect)bounds;
-(void)setFrame:(CGRect)frame;
-(CGSize)intrinsicContentSize;
-(void)noNeedToScroll;
-(id)copyWithZone:(NSZone*)zone;
-(void)setup;
-(id)initWithCoder:(id)coder;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithAutoscrollingLabel:(id)autoscrollingLabel;
@end

