/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "WAPageableItemView.h"
#import "WAEditableImagePreviewScrollViewEditingDelegate.h"
#import "WAEditableImageEditingViewDelegate.h"

@class WAEditableImagePreviewScrollView, NSString, WAEditableImageEditingView;

__attribute__((visibility("hidden")))
@interface WAEditableImageItemView : WAPageableItemView <WAEditableImagePreviewScrollViewEditingDelegate, WAEditableImageEditingViewDelegate> {
	WAEditableImagePreviewScrollView* _previewScrollView;
	WAEditableImageEditingView* _editingView;
	BOOL _isRenderedContentAvailable;
	BOOL _suppressEditingViewItemChanges;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(id)editableImageEditingViewContainingViewController:(id)controller;
-(void)editableImageEditingViewDidEndDeferringRendering:(id)editableImageEditingView;
-(void)editableImageEditingViewDidBeginDeferringRendering:(id)editableImageEditingView;
-(void)editableImageScrollViewDidEndUserScrolling:(id)editableImageScrollView;
-(void)editableImageScrollViewDidScroll:(id)editableImageScrollView;
-(void)editableImageScrollViewDidBeginUserScrolling:(id)editableImageScrollView;
-(void)editableImageScrollViewDidEndZooming:(id)editableImageScrollView withView:(id)view atScale:(float)scale;
-(void)editableImageScrollViewWillBeginZooming:(id)editableImageScrollView withView:(id)view;
-(void)editableImagePreviewScrollView:(id)view didAnimateRotationByAngle:(float)angle;
-(void)editableImagePreviewScrollView:(id)view willAnimateRotationByAngle:(float)angle;
-(void)editableImagePreviewScrollViewDidEndEditingAnimation:(id)editableImagePreviewScrollView;
-(void)editableImagePreviewScrollViewWillBeginEditingAnimation:(id)editableImagePreviewScrollView;
-(void)resetViewState;
-(void)setViewState:(id)state;
-(id)viewState;
-(void)rotateCounterClockwise;
-(void)setCropping:(BOOL)cropping;
-(void)prepareToCancelCropping;
-(void)configureWithItem:(id)item;
-(void)didSetContentInset;
-(void)setContentInsetForLayout:(UIEdgeInsets)layout;
-(id)contentView;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(CGRect)accessibilityFrame;
-(BOOL)isAccessibilityElement;
-(id)initWithFrame:(CGRect)frame;
@end

