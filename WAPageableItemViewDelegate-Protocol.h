/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol WAPageableItemViewDelegate <NSObject>
- (id)pageableItemViewContainingViewController:(id)fp8;
- (void)pageableItemViewDidUpdateThumbnail:(id)fp8;
- (BOOL)pageableItemViewKeyboardIsShown:(id)fp8;
- (void)pageableItemViewDidFinishRotationAnimation:(id)fp8;
- (void)pageableItemView:(id)fp8 willAnimateRotationByAngle:(float)fp12;
- (void)pageableItemViewDidEndEditingAnimation:(id)fp8;
- (void)pageableItemViewWillBeginEditingAnimation:(id)fp8;
- (void)pageableItemViewDidEndFocusedTask:(id)fp8;
- (void)pageableItemViewWillBeginFocusedTask:(id)fp8;
@end
