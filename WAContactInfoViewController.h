/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIActionSheetDelegate.h"
#import "WAContactEditViewControllerDelegate.h"
#import "WATableViewCellPreviewingDelegate.h"
#import "WAShareContactViewControllerDelegate.h"
#import "WAContactInfoBaseViewController.h"
#import "WAForwardPickerViewControllerDelegate.h"
#import "WAContactInfoTableViewCellDelegate.h"
#import "WAImageToImageTransitioning.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "WANavigationControllerPopToAnimating.h"

@class WAContactInfoTableHeaderView, NSString, WAContactInfo, WAContactInfoTableViewCell, WAContactInfoPageAction, WACallEventsTableViewCell, NSArray, NSManagedObjectID, NSMutableArray;

__attribute__((visibility("hidden")))
@interface WAContactInfoViewController : WAContactInfoBaseViewController <MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, UIActionSheetDelegate, WAImageToImageTransitioning, WANavigationControllerPopToAnimating, WAContactEditViewControllerDelegate, WAContactInfoTableViewCellDelegate, WATableViewCellPreviewingDelegate, WAShareContactViewControllerDelegate, WAForwardPickerViewControllerDelegate> {
	NSManagedObjectID* _contactID;
	NSMutableArray* _contactInfoSections;
	NSMutableArray* _sectionHeights;
	WAContactInfoPageAction* _viewAllMediaAction;
	WAContactInfoPageAction* _viewStarredMessagesAction;
	WAContactInfoPageAction* _viewGroupsInCommonAction;
	WAContactInfoPageAction* _customNotificationSettingsAction;
	WAContactInfoPageAction* _muteContactAction;
	WAContactInfoPageAction* _callUnknownContactAction;
	WAContactInfoPageAction* _verifyIdentityAction;
	WAContactInfoPageAction* _clearChatHistoryAction;
	WAContactInfoPageAction* _emailChatHistoryAction;
	WAContactInfoPageAction* _blockContactAction;
	BOOL _showMergedContact;
	BOOL _hasLinkedContacts;
	NSString* _jidForAnimatedTransition;
	WAContactInfoTableViewCell* _tableViewCellForAnimatedTransition;
	NSArray* _whatsAppPhoneIDs;
	NSArray* _inviteUnits;
	WACallEventsTableViewCell* _callEventsCell;
	int _numberOfStarredMessages;
	int _willDeleteMessagesCounter;
	WAContactInfo* _contactInfoForVCard;
	BOOL _showOnlySaveToAddressBookActions;
	WAContactInfoTableHeaderView* _tableHeader;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL showOnlySaveToAddressBookActions;
@property(retain, nonatomic) WAContactInfoTableHeaderView* tableHeader;
-(void).cxx_destruct;
-(BOOL)shouldBeginCustomPopAnimationForAnimationIdentifier:(id)animationIdentifier;
-(id)popAnimationControllerFromViewController:(id)viewController;
-(id)popAnimationInteractionControllerFromViewController:(id)viewController;
-(void)finishTransitionWithView:(id)view context:(id)context;
-(id)viewForTransitionAnimationWithContext:(id)context;
-(void)prepareForTransitionWithContext:(id)context;
-(BOOL)shouldUseImageToImageTransitionForOperation:(int)operation fromViewController:(id)viewController toViewController:(id)viewController3 context:(id)context;
-(void)profilePictureDidChange:(id)profilePicture;
-(void)messageComposeViewController:(id)controller didFinishWithResult:(int)result;
-(void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;
-(void)invalidateNumberOfStarredMessages;
-(int)numberOfStarredMessages;
-(void)previewingContext:(id)context inTableViewCell:(id)tableViewCell commitViewController:(id)controller;
-(id)previewingContext:(id)context viewControllerForData:(id)data inTableViewCell:(id)tableViewCell;
-(void)tableView:(id)view didEndDisplayingCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(id)cellForContact:(id)contact indexPath:(id)path tableView:(id)view;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)contactEditControllerDidCancel:(id)contactEditController;
-(void)contactEditControllerDidSave:(id)contactEditController;
-(void)editAction:(id)action;
-(void)cancelAction:(id)action;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(BOOL)forwardPicker:(id)picker shouldProceedWithContactInfo:(id)contactInfo;
-(void)forwardPickerDidCancel:(id)forwardPicker;
-(void)forwardPicker:(id)picker didSelectContactInfo:(id)info;
-(void)sendVCard:(id)card toContactInfo:(id)contactInfo;
-(id)shareContactViewControllerConfirmationButtonTitle:(id)title;
-(void)shareContactViewControllerDidCancel:(id)shareContactViewController;
-(void)shareContactViewController:(id)controller didFinishWithVCard:(id)vcard;
-(void)shareContact;
-(void)inviteViaEmail:(id)email;
-(void)inviteViaSMS:(id)sms;
-(void)inviteContactViaPhoneOrEmail:(id)email;
-(void)inviteContact;
-(void)profilePictureTappedInContactInfoCell:(id)contactInfoCell;
-(void)callButtonTappedInContactInfoCell:(id)contactInfoCell;
-(void)messageButtonTappedInContactInfoCell:(id)contactInfoCell;
-(void)startChatWithJID:(id)jid;
-(void)sendMessageToContact;
-(void)setUpMediaManager;
-(void)didDeleteAllMessages;
-(void)didAddMessages:(id)messages;
-(void)clearChatHistory;
-(void)emailChatHistory;
-(void)promptToSelectChatSessionWithCompletionHandler:(id)completionHandler;
-(void)askToAttachMediaForChatSession:(id)chatSession;
-(void)contactBlockedStatusDidChange;
-(void)updateBlockContactAction;
-(void)setAggregateCallEvent:(id)event;
-(void)muteContactUntil:(id)until;
-(void)rebuildContactInfoDataUnitsForKnownContact;
-(void)rebuildContactInfoDataUnitsForUnknownContact;
-(void)reload;
-(id)headerTextForLinkedContacts;
-(void)setContact:(id)contact;
-(id)contact;
-(void)callStateDidChange:(id)callState;
-(void)wa_fontSizeDidChange;
-(void)reloadWithContact:(id)contact;
-(void)configureForSaveToAddressBookWithTitle:(id)title andData:(id)data ofType:(unsigned long long)type;
-(id)initWithContact:(id)contact merged:(BOOL)merged whatsAppID:(id)anId detailText:(id)text;
@end

