/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol WAViewControllerExtensions <NSObject>
@property(readonly, assign, nonatomic) unsigned visibleConnectionStatus;
-(void)dismissAllDropDownAlertViewsWithAnimation:(BOOL)animation;
-(void)dismissDropDownAlertView:(id)view animated:(BOOL)animated;
-(void)showDropDownAlertView:(id)view animated:(BOOL)animated;
-(BOOL)wa_is3DTouchAvailable;
-(BOOL)wa_isBeingPreviewed;
-(BOOL)wa_shouldAnimateTableViewRowChanges;
-(void)visibleConnectionStatusDidChange;
-(void)performAfterTransitionEnds:(id)ends;
-(void)wa_fontSizeDidChange;
-(void)wa_tintColorDidChange;
-(void)wa_applicationDidBecomeActive;
-(void)wa_applicationWillResignActive;
-(void)wa_applicationDidEnterBackground;
-(void)wa_applicationWillEnterForeground;
-(BOOL)wa_prefersMinimalBackButton;
-(id)uniqueIdentifier;
@end

