/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <UIKit/UIView.h>
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class _WAGroupSubjectTableViewCell, UIButton, NSString, UIImageView, UITableView, UIImage, UIActivityIndicatorView;
@protocol WAGroupInfoHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface WAGroupInfoHeaderView : UIView <UITableViewDelegate, UITableViewDataSource> {
	BOOL _editingAllowed;
	BOOL _activityIndicatorVisible;
	UIImage* _groupPictureOverride;
	UIView* _viewGroupPicture;
	UIButton* _buttonAddPicture;
	UIButton* _buttonEditPicture;
	UIActivityIndicatorView* _aiGroupIcon;
	UITableView* _tableViewSubject;
	_WAGroupSubjectTableViewCell* _cellGroupSubject;
	UIView* _backgroundView;
	UIView* _topSeparatorView;
	UIView* _bottomSeparatorView;
	BOOL _subjectEditingAllowed;
	id<WAGroupInfoHeaderViewDelegate> _delegate;
	UIImageView* _imageViewGroupPicture;
	float _bottomSeparatorInset;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL subjectEditingAllowed;
@property(assign, nonatomic) float bottomSeparatorInset;
@property(readonly, assign, nonatomic) UIImageView* imageViewGroupPicture;
@property(assign, nonatomic) __weak id<WAGroupInfoHeaderViewDelegate> delegate;
-(void).cxx_destruct;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)hideActivityIndicator;
-(void)showActivityIndicatorWithGroupPictureOverride:(id)groupPictureOverride;
-(void)updateWithWAChatSession:(id)wachatSession;
-(void)updateSubjectCellSelectionState;
-(void)editGroupPictureAction:(id)action;
-(void)editSubjectAction;
-(void)contentSizeCategoryDidChange:(id)contentSizeCategory;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

