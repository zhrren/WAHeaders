/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol WAPageableItemViewDelegate <NSObject>
-(id)pageableItemViewContainingViewController:(id)controller;
-(void)pageableItemViewDidUpdateThumbnail:(id)pageableItemView;
-(BOOL)pageableItemViewKeyboardIsShown:(id)shown;
-(void)pageableItemViewDidFinishRotationAnimation:(id)pageableItemView;
-(void)pageableItemView:(id)view willAnimateRotationByAngle:(float)angle;
-(void)pageableItemViewDidEndEditingAnimation:(id)pageableItemView;
-(void)pageableItemViewWillBeginEditingAnimation:(id)pageableItemView;
-(void)pageableItemViewDidEndFocusedTask:(id)pageableItemView;
-(void)pageableItemViewWillBeginFocusedTask:(id)pageableItemView;
@end

