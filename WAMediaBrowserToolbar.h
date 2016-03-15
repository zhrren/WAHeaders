/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "WAMediaBrowserThumbnailBarDelegate.h"
#import <UIKit/UIToolbar.h>

@class WAMediaManager, WAStarBarButtonItem, WAMediaBrowserThumbnailBar, NSIndexPath, UIBarButtonItem, NSString;
@protocol WAMediaBrowserToolbarDelegate;

__attribute__((visibility("hidden")))
@interface WAMediaBrowserToolbar : UIToolbar <WAMediaBrowserThumbnailBarDelegate> {
	UIBarButtonItem* _trashButton;
	UIBarButtonItem* _actionButton;
	UIBarButtonItem* _pauseButton;
	UIBarButtonItem* _playButton;
	UIBarButtonItem* _flexibleSpaceItem;
	WAStarBarButtonItem* _starButton;
	WAStarBarButtonItem* _unstarButton;
	WAMediaBrowserThumbnailBar* _thumbnailBar;
	CGSize _prevSize;
	BOOL _starred;
	int _playbackState;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSIndexPath* highlightedIndexPath;
@property(assign, nonatomic, getter=isStarred) BOOL starred;
@property(readonly, assign, nonatomic, getter=isThumbnailBarHidden) BOOL thumbnailBarHidden;
@property(readonly, assign, nonatomic, getter=isScrubbing) BOOL scrubbing;
@property(readonly, assign, nonatomic) float scrollVelocity;
@property(retain, nonatomic) WAMediaManager* mediaManager;
@property(assign, nonatomic) __weak id<WAMediaBrowserToolbarDelegate> delegate;
@property(assign, nonatomic) int playbackState;
-(void).cxx_destruct;
-(void)setHighlightedIndexPath:(id)path animated:(BOOL)animated;
-(void)mediaBrowserThumbnailBarDidEndScrubbing:(id)mediaBrowserThumbnailBar;
-(void)mediaBrowserThumbnailBarDidBeginScrubbing:(id)mediaBrowserThumbnailBar;
-(void)mediaBrowserThumbnailBar:(id)bar didScrollToIndexPath:(id)indexPath;
-(void)unstarButtonTapped:(id)tapped;
-(void)starButtonTapped:(id)tapped;
-(void)playButtonTapped:(id)tapped;
-(void)pauseButtonTapped:(id)tapped;
-(void)actionButtonTapped:(id)tapped;
-(void)trashButtonTapped:(id)tapped;
-(void)updateItems;
-(void)relayoutButtons;
-(void)layoutSubviews;
-(float)toolbarHeight;
-(float)preferredHeight;
-(id)initWithFrame:(CGRect)frame;
@end

