/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

#import "WAImageAttachmentViewDelegate-Protocol.h"

@class NSMutableArray, UIScrollView;

@interface WAImageAttachmentContainerView : _ABAddressBookCopyArrayOfAllGroups <WAImageAttachmentViewDelegate>
{
    UIScrollView *_scrollView;
    NSMutableArray *_attachments;
    BOOL _removeButtonsHidden;
    id <WAImageAttachmentContainerViewDelegate> _delegate;
}

- (BOOL)removeButtonsHidden;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)setRemoveButtonsHidden:(BOOL)fp8;
- (void)imageAttachmentViewDidRequestAddImage:(id)fp8;
- (void)imageAttachmentViewDidRequestRemoveImage:(id)fp8;
- (void)attachImage:(id)fp8;
- (void)addAttachment:(id)fp8;
- (id)attachedImages;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)fp8;

@end
