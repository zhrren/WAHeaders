/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WANavigationBarTitleViewCenterAlignPortrait.h"
#import "WANavigationBarTitleViewCenterAlignLandscape.h"
#import "WhatsApp-Structs.h"
#import <UIKit/UIView.h>
#import "WANavigationBarTitleViewLeadingEdgeFilling.h"
#import "WANavigationBarTitleViewTrailingEdgeFilling.h"

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface WAMediaBrowserTitleView : UIView <WANavigationBarTitleViewLeadingEdgeFilling, WANavigationBarTitleViewTrailingEdgeFilling, WANavigationBarTitleViewCenterAlignPortrait, WANavigationBarTitleViewCenterAlignLandscape> {
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _combinedLabel;
	BOOL _shouldCenterAlignInLandscape;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL shouldCenterAlignInLandscape;
-(void).cxx_destruct;
-(BOOL)shouldCenterAlignInPortrait;
-(id)accessibilityValue;
-(void)setPrimaryTitle:(id)title secondaryTitle:(id)title2 combinedTitle:(id)title3;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)fits;
-(id)initWithFrame:(CGRect)frame;
@end

