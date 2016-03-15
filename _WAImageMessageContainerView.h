/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "WAMessageCellSubview.h"

@protocol _WAImageMessageContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface _WAImageMessageContainerView : WAMessageCellSubview {
	CGSize _lastSize;
	id<_WAImageMessageContainerViewDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<_WAImageMessageContainerViewDelegate> delegate;
-(void).cxx_destruct;
-(void)layoutSubviews;
-(void)setNeedsLayout;
@end

