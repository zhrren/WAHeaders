/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <UIKit/UICollectionViewCell.h>

@class WAMessage, UIView, NSString, UIImageView;
@protocol WAMediaBrowserCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface WAMediaBrowserCollectionViewCell : UICollectionViewCell {
	BOOL _isInitialLayoutPass;
	UIImageView* _blurredImageView;
	BOOL _displaying;
	BOOL _ignoresLayoutSubviews;
	BOOL _scrubbing;
	BOOL _needsUpdateLayoutInsets;
	id<WAMediaBrowserCollectionViewCellDelegate> _delegate;
	WAMessage* _message;
	float _parallaxOffset;
	NSString* _accessibilityLabelForContent;
}
@property(readonly, assign, nonatomic) BOOL needsUpdateLayoutInsets;
@property(copy, nonatomic) NSString* accessibilityLabelForContent;
@property(assign, nonatomic, getter=isScrubbing) BOOL scrubbing;
@property(readonly, assign, nonatomic) float parallaxOffset;
@property(assign, nonatomic) BOOL ignoresLayoutSubviews;
@property(assign, nonatomic, getter=isDisplaying) BOOL displaying;
@property(assign, nonatomic) int presentationState;
@property(readonly, assign, nonatomic) BOOL canPopFromCurrentState;
@property(readonly, assign, nonatomic) UIView* visibleContentView;
@property(retain, nonatomic) WAMessage* message;
@property(assign, nonatomic) __weak id<WAMediaBrowserCollectionViewCellDelegate> delegate;
+(BOOL)supportsDoubleTapGesture;
-(void).cxx_destruct;
-(void)didUpdateParallaxOffset;
-(void)applyLayoutAttributes:(id)attributes;
-(void)layoutSubviewsInCell;
-(BOOL)shouldBypassTwoStageLoading;
-(void)didChangeMessageAtStage:(int)stage;
-(void)didChangeMessage;
-(void)willChangeMessageToMessage:(id)message;
-(void)handleDoubleTapAtPoint:(CGPoint)point;
-(BOOL)handleSingleTapAtPoint:(CGPoint)point;
-(void)handleDoubleTap:(id)tap;
-(void)handleSingleTap:(id)tap;
-(void)prepareForReuse;
-(void)didMoveToWindow;
-(void)didLayoutSubviews;
-(void)layoutSubviews;
-(void)setNeedsUpdateLayoutInsets;
-(id)initWithFrame:(CGRect)frame;
-(BOOL)supportsFullScreenPresentation;
@end
