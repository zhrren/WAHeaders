/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "UIScrollViewDelegate.h"


@protocol _WACameraRollStripScrollViewDelegate <UIScrollViewDelegate>
-(void)cameraRollStripScrollView:(id)view didDeselectItemAtIndex:(int)index;
-(void)cameraRollStripScrollView:(id)view didSelectItemAtIndex:(int)index;
-(void)cameraRollStripScrollView:(id)view didUnhighlightItemAtIndex:(int)index;
-(void)cameraRollStripScrollView:(id)view didHighlightItemAtIndex:(int)index;
-(void)cameraRollStripScrollView:(id)view willDisplayCell:(id)cell atIndex:(int)index;
-(int)numberOfItemsInCameraRollStripScrollView:(id)cameraRollStripScrollView;
@end
