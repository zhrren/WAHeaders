/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "WAMessageCell.h"
#import "WADownloadProgressViewDelegate.h"
#import "WAMediaDataPresentationControllerDelegate.h"

@class WAMessageTextView, WAAutoCropImageView, UIView, UIImageView, NSString, WADownloadProgressView;

__attribute__((visibility("hidden")))
@interface WALargeMediaMessageCell : WAMessageCell <WADownloadProgressViewDelegate, WAMediaDataPresentationControllerDelegate> {
	UIImageView* _roundedCornersImageView;
	float _parallaxScaleFactor;
	WADownloadProgressView* _progressView;
	BOOL _cellDataLoaded;
	WAMessageTextView* _messageTextView;
	BOOL _ignoreUpdatePresentationFromPresentationController;
	BOOL _showFileSize;
	UIImageView* _broadcastImageView;
	UIImageView* _lowerRightShadowView;
	UIView* _thumbnailHighlightOverlayView;
	int _selectionState;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) int selectionState;
@property(assign, nonatomic) BOOL showFileSize;
@property(readonly, assign, nonatomic) UIView* thumbnailHighlightOverlayView;
@property(readonly, assign, nonatomic) UIImageView* lowerRightShadowView;
@property(readonly, assign, nonatomic) UIImageView* broadcastImageView;
@property(readonly, assign, nonatomic) WADownloadProgressView* progressView;
@property(readonly, assign, nonatomic) WAAutoCropImageView* currentImageView;
@property(readonly, assign, nonatomic) UIView* mediaContentView;
+(CGSize)contentSizeForCellData:(id)cellData maxWidth:(float)width;
+(UIEdgeInsets)textInsetsForCellData:(id)cellData;
+(UIEdgeInsets)contentInsetsForCellData:(id)cellData cellWidth:(float)width;
+(float)maximumImageWidth;
+(BOOL)showsHighlightOnTouch;
+(BOOL)supportsDoubleTapGesture;
+(void)initialize;
-(void).cxx_destruct;
-(void)configureForAccessibility;
-(id)accessibilityHintText;
-(void)prepareFor3DTouchPreviewWithContext:(id)context;
-(id)dataForPreviewingContext:(id)previewingContext atLocation:(CGPoint)location;
-(id)registerSubviewsForPreviewingUsingViewController:(id)previewingUsingViewController previewingDelegate:(id)delegate;
-(void)willHidePopupMenu;
-(id)referenceViewForPopupMenu;
-(CGRect)targetRectForPopupMenu;
-(void)updateStarIndicatorAnimated:(BOOL)animated;
-(void)setShowsProgressBar:(BOOL)bar animated:(BOOL)animated;
-(void)setProgress:(float)progress;
-(float)progress;
-(void)setProgressViewHidden:(BOOL)hidden animated:(BOOL)animated;
-(void)setProgressViewHidden:(BOOL)hidden;
-(void)downloadProgressViewDidCancel:(id)downloadProgressView;
-(void)setDidScrollWithUserInteraction:(BOOL)scrollWithUserInteraction;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)frame;
-(void)handleLongPressOnBubbleWithLocation:(CGPoint)location;
-(void)handleDoubleTapOnBubbleWithLocation:(CGPoint)location;
-(void)mediaDataPresentationController:(id)controller didLongPressMediaAtIndex:(unsigned)index;
-(void)mediaDataPresentationController:(id)controller didTapMediaAtIndex:(unsigned)index;
-(void)mediaDataPresentationControllerDidLayoutView:(id)mediaDataPresentationController;
-(void)prepareForReuse;
-(void)configureCellWithAnimation:(BOOL)animation;
-(void)setCellData:(id)data delegate:(id)delegate;
-(void)updatePresentationFromPresentationControllerWithAnimation:(BOOL)animation;
-(void)mediaDataPresentationControllerContentsDidFinishLoadingMedia:(id)mediaDataPresentationControllerContents;
-(void)mediaDataPresentationController:(id)controller contentsDidChangeWithAnimation:(BOOL)contents;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

