/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WADefaultPreviewActionItemsProviding.h"
#import <UIKit/UINavigationController.h>

@class WAMessage, NSString, NSArray;

@interface WAPeekableQuickLookController : UINavigationController <WADefaultPreviewActionItemsProviding> {
	NSArray* _defaultPreviewActionItems;
	WAMessage* _message;
}
@property(retain, nonatomic) NSArray* defaultPreviewActionItems;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) WAMessage* message;
-(void).cxx_destruct;
-(id)previewActionItems;
-(void)viewWillLayoutSubviews;
-(id)initWithMessage:(id)message;
@end
