/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIToolbarDelegate.h"


@protocol WAMediaBrowserToolbarDelegate <UIToolbarDelegate>
-(void)toolbarDidEndScrubbing:(id)toolbar;
-(void)toolbar:(id)toolbar didScrollToIndexPath:(id)indexPath;
-(void)toolbarDidBeginScrubbing:(id)toolbar;
-(void)toolbarDidActivateUnstarButton:(id)toolbar;
-(void)toolbarDidActivateStarButton:(id)toolbar;
-(void)toolbarDidActivatePauseButton:(id)toolbar;
-(void)toolbarDidActivatePlayButton:(id)toolbar;
-(void)toolbarDidActivateTrashButton:(id)toolbar;
-(void)toolbarDidActivateActionButton:(id)toolbar;
@end
