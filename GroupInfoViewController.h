/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAWarningViewController.h"

#import "ABNewPersonViewControllerDelegate-Protocol.h"
#import "ABPeoplePickerNavigationControllerDelegate-Protocol.h"
#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "SinglePersonPickerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WAGroupInfoHeaderViewDelegate-Protocol.h"
#import "WAGroupSubjectEditControllerDelegate-Protocol.h"
#import "WAImageToImageTransitioning-Protocol.h"
#import "WAInfoInputViewControllerDelegate-Protocol.h"
#import "WALocationDataSource-Protocol.h"
#import "WANavigationControllerPopToAnimating-Protocol.h"
#import "WASinglePhotoPickerControllerDelegate-Protocol.h"
#import "WebImagePickerDelegate-Protocol.h"

@class GroupIconViewController, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_group>, NSString, UIButton, UILabel, UIView, WAActivityLabel, WAChatSession, WAGroupInfoHeaderView, WAGroupMember, WAMediaManager, WebImagePicker;

@interface GroupInfoViewController : WAWarningViewController <WASinglePhotoPickerControllerDelegate, SinglePersonPickerDelegate, WAGroupInfoHeaderViewDelegate, WAImageToImageTransitioning, WANavigationControllerPopToAnimating, UINavigationControllerDelegate, WAGroupSubjectEditControllerDelegate, ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, WAInfoInputViewControllerDelegate, WALocationDataSource, MFMailComposeViewControllerDelegate, WebImagePickerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    WAChatSession *_chatSession;
    NSMutableArray *_groupMembers;
    NSMutableArray *_tempMembers;
    WAGroupMember *_currentGroupMember;
    NSDictionary *_pushNames;
    NSMutableDictionary *_statusMessages;
    int _pendingRequestCounter;
    BOOL _groupLeaveInProgress;
    BOOL _locationShareSettingChangeInProgress;
    BOOL _ignoreNextProfilePictureUpdateNotification;
    int _numberOfStarredMessages;
    int _numberOfWebURLs;
    BOOL _willDeleteWebURLMessages;
    NSArray *_locationData;
    NSObject<OS_dispatch_group> *_locationDataLoadingGroup;
    BOOL _locationDataLoadingInProgress;
    BOOL _needsLocationDataReload;
    WebImagePicker *_webImagePicker;
    GroupIconViewController *_groupIconViewController;
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
    BOOL _groupReadonly;
    BOOL _groupAdmin;
    BOOL _groupParticipant;
    NSString *_jid;
    WAMediaManager *_mediaManager;
    WAActivityLabel *_activityLabel;
    WAGroupInfoHeaderView *_groupHeaderView;
    UIView *_viewGroupSummary;
    UILabel *_labelGroupSummary;
    UIButton *_buttonDeleteExitGroup;
}

+ (id)sortNameForParticipant:(id)fp8;
+ (id)controllerForJID:(id)fp8;
- (void)setGroupParticipant:(BOOL)fp8;
- (BOOL)isGroupParticipant;
- (void)setGroupAdmin:(BOOL)fp8;
- (BOOL)isGroupAdmin;
- (void)setGroupReadonly:(BOOL)fp8;
- (BOOL)isGroupReadonly;
- (void)setButtonDeleteExitGroup:(id)fp8;
- (id)buttonDeleteExitGroup;
- (void)setLabelGroupSummary:(id)fp8;
- (id)labelGroupSummary;
- (void)setViewGroupSummary:(id)fp8;
- (id)viewGroupSummary;
- (void)setCanShowReadonlyGroupWarning:(BOOL)fp8;
- (BOOL)canShowReadonlyGroupWarning;
- (void)setReadonlyGroupWarningVisible:(BOOL)fp8;
- (BOOL)readonlyGroupWarningVisible;
- (void)setGroupHeaderView:(id)fp8;
- (id)groupHeaderView;
- (void)setActivityLabel:(id)fp8;
- (id)activityLabel;
- (id)mediaManager;
- (id)jid;
- (void).cxx_destruct;
- (void)groupInfoHeaderViewEditSubjectTapped:(id)fp8;
- (void)groupInfoHeaderViewEditPhotoTapped:(id)fp8;
- (void)invalidateNumberOfWebURLs;
- (int)numberOfWebURLs;
- (void)invalidateNumberOfStarredMessages;
- (int)numberOfStarredMessages;
- (void)mediaManagerDidChangeContent:(id)fp8;
- (void)setMediaManager:(id)fp8;
- (void)wa_applicationDidEnterBackground;
- (void)webImagePickerDidCancel:(id)fp8;
- (void)webImagePicker:(id)fp8 didSelectImage:(id)fp12;
- (void)mailComposeController:(id)fp8 didFinishWithResult:(int)fp12 error:(id)fp16;
- (id)mapTitle;
- (id)locationsWithCoordinate:(CDAnonymousStruct15)fp8;
- (id)locationDataAtIndex:(int)fp8;
- (unsigned int)numberOfLocations;
- (void)singlePhotoPickerControllerDidCancel:(id)fp8;
- (void)singlePhotoPickerController:(id)fp8 didFinishWithImage:(id)fp12;
- (void)infoInputViewControllerDidCancel:(id)fp8;
- (void)infoInputViewControllerDidFinish:(id)fp8;
- (void)peoplePickerNavigationControllerDidCancel:(id)fp8;
- (void)peoplePickerNavigationController:(id)fp8 didSelectPerson:(void *)fp12;
- (BOOL)peoplePickerNavigationController:(id)fp8 shouldContinueAfterSelectingPerson:(void *)fp12;
- (void)continueEditingPerson:(void *)fp8 onNavigationController:(id)fp12;
- (void)newPersonViewController:(id)fp8 didCompleteWithNewPerson:(void *)fp12;
- (void)contactsStorageDidUpdateStatus:(id)fp8;
- (void)profilePictureUpdated:(id)fp8;
- (void)profilePictureUpdateRequestDidComplete:(id)fp8;
- (void)chatStorageDidDeleteMessagesInChatSession:(id)fp8;
- (void)chatStorageWillDeleteMessagesInChatSession:(id)fp8;
- (void)chatStorageDidAddMessages:(id)fp8;
- (void)chatStorageDidUpdateParticipantsOfChatSession:(id)fp8;
- (void)chatStorageDidUpdateChatSession:(id)fp8;
- (void)chatStorageDidLoadDatabase:(id)fp8;
- (void)chatStorageWillUnloadDatabase:(id)fp8;
- (void)subjectEditViewControllerDidCancel:(id)fp8;
- (void)subjectEditViewController:(id)fp8 didFinishWithText:(id)fp12;
- (id)excludedJIDsForSinglePersonPicker:(id)fp8;
- (id)singlePersonPicker:(id)fp8 confirmationButtonTitleForContactInfo:(id)fp12;
- (id)singlePersonPicker:(id)fp8 confirmationTextForContactInfo:(id)fp12;
- (void)singlePersonPickerDidCancel:(id)fp8;
- (void)singlePersonPicker:(id)fp8 didSelectContactInfo:(id)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 willSelectRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 willDisplayCell:(id)fp12 forRowAtIndexPath:(id)fp16;
- (id)tableView:(id)fp8 titleForHeaderInSection:(int)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (id)participantDataObjectForTableRowAtIndex:(unsigned int)fp8;
- (BOOL)hasPendingActivity;
- (void)wa_fontSizeDidChange;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (void)loadView;
- (void)reloadMediaAndLocationInfo;
- (void)chatStorageDidReplaceChatSession:(id)fp8;
- (void)clearChatHistory;
- (void)emailChatHistory;
- (void)locationSharingOnOffAction;
- (void)setLocationSharingEndDate:(id)fp8;
- (void)viewLiveLocations;
- (void)viewLocations;
- (void)viewStarredMessages;
- (void)viewAllMedia;
- (void)addNumberToContactForGroupMember:(id)fp8;
- (void)createNewContactForGroupMember:(id)fp8;
- (void)presentUnknownContactScreenForGroupMember:(id)fp8;
- (void)callGroupMember:(id)fp8;
- (void)messageGroupMember:(id)fp8;
- (void)presentSubjectEditController;
- (void)showNewParticipantPicker;
- (void)viewInfoForGroupMember:(id)fp8;
- (void)deleteOrExitGroupAction:(id)fp8;
- (BOOL)shouldBeginCustomPopAnimationForAnimationIdentifier:(id)fp8;
- (id)popAnimationControllerFromViewController:(id)fp8;
- (id)popAnimationInteractionControllerFromViewController:(id)fp8;
- (void)finishTransitionWithView:(id)fp8 context:(id)fp12;
- (id)viewForTransitionAnimationWithContext:(id)fp8;
- (void)prepareForTransitionWithContext:(id)fp8;
- (BOOL)shouldUseImageToImageTransitionForOperation:(int)fp8 fromViewController:(id)fp12 toViewController:(id)fp16 context:(id)fp20;
- (void)startGroupPictureSetRequestWithImage:(id)fp8;
- (void)showImageSearchController;
- (void)reallyShowImagePickerForSourceType:(int)fp8;
- (void)showImagePickerForSourceType:(int)fp8;
- (void)viewOrAddGroupPicture;
- (void)openCustomNotificationSettingsScreen;
- (void)updateMuteTimeoutWithDate:(id)fp8;
- (void)promptToMuteOrUnmuteGroup;
- (void)showOrHideReadonlyGroupWarningAsNeeded;
- (id)visibleParticipantCellForJID:(id)fp8;
- (void)configureParticipantCell:(id)fp8 withCellState:(int)fp12;
- (void)promoteGroupParticipant:(id)fp8;
- (void)removeGroupParticipant:(id)fp8;
- (void)requestAddGroupParticipantForContactInfo:(id)fp8;
- (void)emailChatHistoryWithMedia:(BOOL)fp8;
- (void)loadLocationDataWithCompletionHandler:(id)fp(null);
- (void)addTempParticipant:(id)fp8;
- (void)loadPushNamesWithCompletion:(id)fp(null);
- (void)loadStatusMessagesWithCompletion:(id)fp(null);
- (id)reloadStatusMessageForJID:(id)fp8;
- (void)reloadStatusMessagesForAllParticipants;
- (void)reloadGroupInfoAndParticipantsAnimated:(BOOL)fp8;
- (void)reloadGroupSummaryFooter;
- (void)hideActivity;
- (void)showActivity:(id)fp8;
- (void)showDropdownAlertMessage:(id)fp8;
- (id)chatSession;
- (id)formattedGroupCreationInfoString;
- (void)dealloc;
- (id)initWithJID:(id)fp8;

@end
