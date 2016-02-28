/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAVideoPreviewViewController.h"

#import "UINavigationControllerDelegate-Protocol.h"
#import "UIVideoEditorControllerDelegate-Protocol.h"

@class MPMoviePlayerController;

@interface WASingleVideoPreviewViewController : WAVideoPreviewViewController <UIVideoEditorControllerDelegate, UINavigationControllerDelegate>
{
    MPMoviePlayerController *_player;
}

- (void).cxx_destruct;
- (void)videoEditorControllerDidCancel:(id)fp8;
- (void)videoEditorController:(id)fp8 didFailWithError:(id)fp12;
- (void)videoEditorController:(id)fp8 didSaveEditedVideoToPath:(id)fp12;
- (void)processTranscodedVideoOfDuration:(double)fp8 atURL:(id)fp16 referenceURL:(id)fp20;
- (void)setProgressViewHidden:(BOOL)fp8;
- (void)sendVideo:(id)fp8;
- (id)fullscreenButtonOniOS7InView:(id)fp8;
- (void)hideFullscreenButton;
- (void)playerDidPostNotification:(id)fp8;
- (void)playerDidEnterFullscreen:(id)fp8;
- (void)playerWillEnterFullscreen:(id)fp8;
- (void)willAnimateRotationToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)captionBarWillHideKeyboard:(id)fp8;
- (void)captionBarWillShowKeyboard:(id)fp8;
- (void)relayoutViews;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;

@end
