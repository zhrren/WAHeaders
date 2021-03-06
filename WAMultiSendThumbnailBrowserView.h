/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "WAMultiSendThumbnailBrowserItemViewDelegate.h"
#import <UIKit/UIView.h>

@class UIButton, NSMutableArray, UIImageView, NSString, WAMultiSendThumbnailBrowserAddItemButton;
@protocol WAMultiSendThumbnailBrowserViewDelegate;

__attribute__((visibility("hidden")))
@interface WAMultiSendThumbnailBrowserView : UIView <WAMultiSendThumbnailBrowserItemViewDelegate> {
	UIImageView* _topBorderImageView;
	UIImageView* _backgroundImageView;
	NSMutableArray* _itemViews;
	UIButton* _viewBlocker;
	BOOL _draggingInProgress;
	BOOL _ignoreDragging;
	int _maxItemsPerRow;
	BOOL _editingModeBeforeRotationAnimation;
	int _rowCount;
	float _itemWidth;
	UIView* _blurView;
	BOOL _editing;
	id<WAMultiSendThumbnailBrowserViewDelegate> _delegate;
	UIView* _headerView;
	int _currentIndex;
	int _maximumNumberOfItems;
	WAMultiSendThumbnailBrowserAddItemButton* _addItemButton;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) float singleRowHeight;
@property(assign, nonatomic, getter=isAddItemButtonHidden) BOOL addItemButtonHidden;
@property(assign, nonatomic) unsigned addItemButtonType;
@property(readonly, assign, nonatomic) WAMultiSendThumbnailBrowserAddItemButton* addItemButton;
@property(assign, nonatomic) int maximumNumberOfItems;
@property(assign, nonatomic, getter=isEditing) BOOL editing;
@property(assign, nonatomic) int currentIndex;
@property(retain, nonatomic) UIView* headerView;
@property(assign, nonatomic) __weak id<WAMultiSendThumbnailBrowserViewDelegate> delegate;
+(float)preferredThumbnailImageWidth;
-(void).cxx_destruct;
-(void)superViewDidEndRotationAnimation;
-(void)superViewWillBeginRotationAnimation;
-(void)multiSendThumbnailBrowserItemViewWasTapped:(id)tapped;
-(void)changeIndexOfItemView:(id)itemView to:(int)to;
-(void)multiSendThumbnailBrowserItemViewCenterDidChange:(id)multiSendThumbnailBrowserItemViewCenter;
-(void)multiSendThumbnailBrowserItemViewDidEndDragging:(id)multiSendThumbnailBrowserItemView;
-(void)multiSendThumbnailBrowserItemViewDidBeginDragging:(id)multiSendThumbnailBrowserItemView;
-(void)multiSendThumbnailBrowserItemViewWantsToEnterEditMode:(id)enterEditMode;
-(void)sortItemViewsByIndex;
-(void)windowBlockerTouched:(id)touched;
-(void)layoutViewBlocker;
-(void)removeViewBlocker;
-(void)addViewBlocker;
-(void)didMoveToWindow;
-(void)setRotationAngle:(float)angle ofThumbnailAtIndex:(int)index;
-(void)reloadThumbnailAtIndex:(int)index;
-(void)removeItemAtIndex:(int)index;
-(void)reload;
-(void)setCurrentIndex:(int)index animated:(BOOL)animated;
-(void)send:(id)send;
-(void)addItem:(id)item;
-(int)bestIndexForItemViewWithCenter:(CGPoint)center;
-(int)mapIndexToLogicalIndex:(int)logicalIndex ignoringOutsideItems:(BOOL)items;
-(CGPoint)centerForItemViewAtIndex:(int)index ignoringOutsideItems:(BOOL)items;
-(void)relayoutThumbnailsWithAnimation:(BOOL)animation;
-(void)layoutSubviews;
-(void)applicationDidEnterBackground:(id)application;
-(void)dealloc;
-(void)commonInit;
-(void)awakeFromNib;
-(id)initWithFrame:(CGRect)frame;
@end

