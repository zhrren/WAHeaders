/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "NSObject.h"


@protocol WAMediaScrollViewDelegate <NSObject>
-(BOOL)isMediaScrollViewInFullScreenMode:(id)fullScreenMode;
-(void)mediaScrollViewWillBeginDragging:(id)mediaScrollView;
-(void)mediaScrollViewDidEndZooming:(id)mediaScrollView;
-(void)mediaScrollViewWillBeginZooming:(id)mediaScrollView;
-(void)mediaScrollViewWillBeginZoomBounceAnimation:(id)mediaScrollView;
-(void)mediaScrollViewDidZoom:(id)mediaScrollView;
-(void)mediaScrollViewDidScroll:(id)mediaScrollView;
-(void)mediaScrollViewDidEndScrubbing:(id)mediaScrollView;
-(void)mediaScrollViewDidBeginScrubbing:(id)mediaScrollView;
-(UIEdgeInsets)mediaScrollViewLayoutInset:(id)inset;
-(BOOL)mediaScrollViewCanShowErrorAlertView:(id)view;
-(void)mediaScrollViewWantsFullscreenTimerInvalidated:(id)invalidated;
-(void)mediaScrollViewPlaybackDidFinish:(id)mediaScrollViewPlayback;
-(void)mediaScrollViewPlaybackStateDidChange:(id)mediaScrollViewPlaybackState;
-(BOOL)mediaScrollView:(id)view handleEncounteredError:(id)error;
-(void)mediaScrollViewLoadStateDidChange:(id)mediaScrollViewLoadState;
-(void)mediaScrollViewDidFinishLongPress:(id)mediaScrollView;
-(void)mediaScrollViewDidReceiveSingleTap:(id)mediaScrollView;
@end

