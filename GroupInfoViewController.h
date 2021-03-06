/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WANavigationControllerPopToAnimating.h"
#import "WhatsApp-Structs.h"
#import "UINavigationControllerDelegate.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "ABNewPersonViewControllerDelegate.h"
#import "WAWarningViewController.h"
#import "WASinglePhotoPickerControllerDelegate.h"
#import "SinglePersonPickerDelegate.h"
#import "WAGroupInfoHeaderViewDelegate.h"
#import "WAGroupSubjectEditControllerDelegate.h"
#import "WAInfoInputViewControllerDelegate.h"
#import "WALocationDataSource.h"
#import "WebImagePickerDelegate.h"
#import "WAImageToImageTransitioning.h"

@class NSString, WAActivityLabel, WAGroupInfoHeaderView, NSObject, NSMutableDictionary, WAGroupMember, GroupIconViewController, WAChatSession, NSMutableArray, UILabel, NSDictionary, NSSet, WAMediaManager, WebImagePicker, UIView, UIButton, NSArray;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface GroupInfoViewController : WAWarningViewController <WASinglePhotoPickerControllerDelegate, SinglePersonPickerDelegate, WAGroupInfoHeaderViewDelegate, WAImageToImageTransitioning, WANavigationControllerPopToAnimating, UINavigationControllerDelegate, WAGroupSubjectEditControllerDelegate, ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, WAInfoInputViewControllerDelegate, WALocationDataSource, WebImagePickerDelegate, UITableViewDataSource, UITableViewDelegate> {
	WAChatSession* _chatSession;
	NSMutableArray* _groupMembers;
	NSMutableArray* _tempMembers;
	WAGroupMember* _currentGroupMember;
	NSDictionary* _pushNames;
	NSMutableDictionary* _statusMessages;
	int _pendingRequestCounter;
	BOOL _groupLeaveInProgress;
	BOOL _locationShareSettingChangeInProgress;
	BOOL _ignoreNextProfilePictureUpdateNotification;
	int _numberOfStarredMessages;
	NSArray* _locationData;
	NSObject<OS_dispatch_group>* _locationDataLoadingGroup;
	BOOL _locationDataLoadingInProgress;
	BOOL _needsLocationDataReload;
	WebImagePicker* _webImagePicker;
	GroupIconViewController* _groupIconViewController;
	BOOL _chatActionsEnabled;
	int _mediaSettingsSectionIndex;
	int _participantsSectionIndex;
	int _chatActionsSectionIndex;
	int _deleteGroupSectionIndex;
	int _locationSharingSectionIndex;
	int _mediaCellIndex;
	int _starredMessagesCellIndex;
	int _notificationSettingsCellIndex;
	int _muteCellIndex;
	int _previousLocationsIndex;
	int _youParticipantCellIndex;
	int _addParticipantCellIndex;
	int _clearConversationCellIndex;
	int _deleteExitGroupCellIndex;
	int _locationsOnIndex;
	int _showLocationsIndex;
	BOOL _readonlyGroupWarningVisible;
	BOOL _canShowReadonlyGroupWarning;
	BOOL _groupIsE2EEncrypted;
	BOOL _groupReadonly;
	BOOL _groupAdmin;
	BOOL _groupParticipant;
	NSString* _jid;
	WAMediaManager* _mediaManager;
	WAActivityLabel* _activityLabel;
	WAGroupInfoHeaderView* _groupHeaderView;
	UIView* _viewGroupSummary;
	UILabel* _labelGroupSummary;
	UIButton* _buttonDeleteExitGroup;
	NSSet* _jidsNotSupportingE2E;
	UIButton* _buttonE2EVerification;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic, getter=isGroupParticipant) BOOL groupParticipant;
@property(assign, nonatomic, getter=isGroupAdmin) BOOL groupAdmin;
@property(assign, nonatomic, getter=isGroupReadonly) BOOL groupReadonly;
@property(retain, nonatomic) UIButton* buttonE2EVerification;
@property(retain, nonatomic) NSSet* jidsNotSupportingE2E;
@property(assign, nonatomic) BOOL groupIsE2EEncrypted;
@property(retain, nonatomic) UIButton* buttonDeleteExitGroup;
@property(retain, nonatomic) UILabel* labelGroupSummary;
@property(retain, nonatomic) UIView* viewGroupSummary;
@property(assign, nonatomic) BOOL canShowReadonlyGroupWarning;
@property(assign, nonatomic) BOOL readonlyGroupWarningVisible;
@property(retain, nonatomic) WAGroupInfoHeaderView* groupHeaderView;
@property(retain, nonatomic) WAActivityLabel* activityLabel;
@property(retain, nonatomic) WAMediaManager* mediaManager;
@property(readonly, copy, nonatomic) NSString* jid;
+(id)sortNameForParticipant:(id)participant;
+(id)controllerForJID:(id)jid;
+(void)initialize;
-(void).cxx_destruct;
-(void)groupInfoHeaderViewEditSubjectTapped:(id)tapped;
-(void)groupInfoHeaderViewEditPhotoTapped:(id)tapped;
-(void)invalidateNumberOfStarredMessages;
-(int)numberOfStarredMessages;
-(void)mediaManagerDidChangeContent:(id)mediaManager;
-(void)wa_applicationDidEnterBackground;
-(void)webImagePickerDidCancel:(id)webImagePicker;
-(void)webImagePicker:(id)picker didSelectImage:(id)image;
-(id)mapTitle;
-(id)locationsWithCoordinate:(XXStruct_gLbvpC)coordinate;
-(id)locationDataAtIndex:(int)index;
-(unsigned)numberOfLocations;
-(void)singlePhotoPickerControllerDidCancel:(id)singlePhotoPickerController;
-(void)singlePhotoPickerController:(id)controller didFinishWithImage:(id)image;
-(void)infoInputViewControllerDidCancel:(id)infoInputViewController;
-(void)infoInputViewControllerDidFinish:(id)infoInputViewController;
-(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
-(void)peoplePickerNavigationController:(id)controller didSelectPerson:(void*)person;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person;
-(void)continueEditingPerson:(void*)person onNavigationController:(id)controller;
-(void)newPersonViewController:(id)controller didCompleteWithNewPerson:(void*)newPerson;
-(void)contactsStorageDidUpdateStatus:(id)contactsStorage;
-(void)profilePictureDidChange:(id)profilePicture;
-(void)profilePictureUpdateRequestDidComplete:(id)profilePictureUpdateRequest;
-(void)chatStorageDidAddMessages:(id)chatStorage;
-(void)chatStorageDidUpdateParticipantsOfChatSession:(id)chatStorage;
-(void)chatStorageDidUpdateChatSession:(id)chatStorage;
-(void)chatStorageDidLoadDatabase:(id)chatStorage;
-(void)chatStorageWillUnloadDatabase:(id)chatStorage;
-(void)subjectEditViewControllerDidCancel:(id)subjectEditViewController;
-(void)subjectEditViewController:(id)controller didFinishWithText:(id)text;
-(id)excludedJIDsForSinglePersonPicker:(id)singlePersonPicker;
-(id)singlePersonPicker:(id)picker confirmationButtonTitleForContactInfo:(id)contactInfo;
-(id)singlePersonPicker:(id)picker confirmationTextForContactInfo:(id)contactInfo;
-(void)singlePersonPickerDidCancel:(id)singlePersonPicker;
-(void)singlePersonPicker:(id)picker didSelectContactInfo:(id)info;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)participantDataObjectForTableRowAtIndex:(unsigned)index;
-(BOOL)hasPendingActivity;
-(void)wa_fontSizeDidChange;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)loadView;
-(void)showIdentityVerificationScreenForGroupMember:(id)groupMember;
-(void)checkGroupEncryptionState:(id)state;
-(void)reloadChatActionsSection;
-(void)reloadMediaAndLocationInfo;
-(void)chatStorageDidReplaceChatSession:(id)chatStorage;
-(void)clearChatHistory;
-(void)emailChatHistory;
-(void)locationSharingOnOffAction;
-(void)setLocationSharingEndDate:(id)date;
-(void)viewLiveLocations;
-(void)viewLocations;
-(void)viewStarredMessages;
-(void)viewAllMedia;
-(void)addNumberToContactForGroupMember:(id)groupMember;
-(void)createNewContactForGroupMember:(id)groupMember;
-(void)presentUnknownContactScreenForGroupMember:(id)groupMember;
-(void)callGroupMember:(id)member;
-(void)messageGroupMember:(id)member;
-(void)presentSubjectEditController;
-(void)showNewParticipantPicker;
-(void)viewInfoForGroupMember:(id)groupMember;
-(void)deleteOrExitGroupAction:(id)action;
-(BOOL)shouldBeginCustomPopAnimationForAnimationIdentifier:(id)animationIdentifier;
-(id)popAnimationControllerFromViewController:(id)viewController;
-(id)popAnimationInteractionControllerFromViewController:(id)viewController;
-(void)finishTransitionWithView:(id)view context:(id)context;
-(id)viewForTransitionAnimationWithContext:(id)context;
-(void)prepareForTransitionWithContext:(id)context;
-(BOOL)shouldUseImageToImageTransitionForOperation:(int)operation fromViewController:(id)viewController toViewController:(id)viewController3 context:(id)context;
-(void)startGroupPictureSetRequestWithImage:(id)image;
-(void)showImageSearchController;
-(void)reallyShowImagePickerForSourceType:(int)sourceType;
-(void)showImagePickerForSourceType:(int)sourceType;
-(void)viewOrAddGroupPicture;
-(void)openCustomNotificationSettingsScreen;
-(void)updateMuteTimeoutWithDate:(id)date;
-(void)promptToMuteOrUnmuteGroup;
-(void)showOrHideReadonlyGroupWarningAsNeeded;
-(id)visibleParticipantCellForJID:(id)jid;
-(void)configureParticipantCell:(id)cell withCellState:(int)cellState;
-(void)promoteGroupParticipant:(id)participant;
-(void)removeGroupParticipant:(id)participant;
-(void)requestAddGroupParticipantForContactInfo:(id)contactInfo;
-(void)loadLocationDataWithCompletionHandler:(id)completionHandler;
-(void)addTempParticipant:(id)participant;
-(void)loadPushNamesWithCompletion:(id)completion;
-(void)loadStatusMessagesWithCompletion:(id)completion;
-(id)reloadStatusMessageForJID:(id)jid;
-(void)reloadStatusMessagesForAllParticipants;
-(void)reloadGroupInfoAndParticipantsAnimated:(BOOL)animated;
-(void)reloadGroupSummaryFooter;
-(void)hideActivity;
-(void)showActivity:(id)activity;
-(void)showDropdownAlertMessage:(id)message;
-(id)chatSession;
-(id)formattedGroupCreationInfoString;
-(void)dealloc;
-(id)initWithJID:(id)jid;
@end

