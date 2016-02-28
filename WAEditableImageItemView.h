/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAPageableItemView.h"

#import "WAEditableImageEditingViewDelegate-Protocol.h"
#import "WAEditableImagePreviewScrollViewEditingDelegate-Protocol.h"

@class WAEditableImageEditingView, WAEditableImagePreviewScrollView;

@interface WAEditableImageItemView : WAPageableItemView <WAEditableImagePreviewScrollViewEditingDelegate, WAEditableImageEditingViewDelegate>
{
    WAEditableImagePreviewScrollView *_previewScrollView;
    WAEditableImageEditingView *_editingView;
    BOOL _isRenderedContentAvailable;
    BOOL _suppressEditingViewItemChanges;
}

- (void).cxx_destruct;
- (id)editableImageEditingViewContainingViewController:(id)fp8;
- (void)editableImageEditingViewDidEndDeferringRendering:(id)fp8;
- (void)editableImageEditingViewDidBeginDeferringRendering:(id)fp8;
- (void)editableImageScrollViewDidEndUserScrolling:(id)fp8;
- (void)editableImageScrollViewDidScroll:(id)fp8;
- (void)editableImageScrollViewDidBeginUserScrolling:(id)fp8;
- (void)editableImageScrollViewDidEndZooming:(id)fp8 withView:(id)fp12 atScale:(float)fp16;
- (void)editableImageScrollViewWillBeginZooming:(id)fp8 withView:(id)fp12;
- (void)editableImagePreviewScrollView:(id)fp8 didAnimateRotationByAngle:(float)fp12;
- (void)editableImagePreviewScrollView:(id)fp8 willAnimateRotationByAngle:(float)fp12;
- (void)editableImagePreviewScrollViewDidEndEditingAnimation:(id)fp8;
- (void)editableImagePreviewScrollViewWillBeginEditingAnimation:(id)fp8;
- (void)resetViewState;
- (void)setViewState:(id)fp8;
- (id)viewState;
- (void)rotateCounterClockwise;
- (void)setCropping:(BOOL)fp8;
- (void)prepareToCancelCropping;
- (void)configureWithItem:(id)fp8;
- (void)didSetContentInset;
- (void)setContentInsetForLayout:(struct UIEdgeInsets)fp8;
- (id)contentView;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (struct CGRect)accessibilityFrame;
- (BOOL)isAccessibilityElement;
- (id)initWithFrame:(struct CGRect)fp8;

@end
