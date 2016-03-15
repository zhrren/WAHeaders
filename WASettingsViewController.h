/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAStaticTableViewController.h"
#import "UINavigationControllerDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "PeopleMultiPickerNavigationControllerDelegate.h"
#import "WAQRCodeScannerViewControllerDelegate.h"

@class WABadgedTableViewCell, WASettingsProfileTableViewCell, NotificationsViewController, NSString;

__attribute__((visibility("hidden")))
@interface WASettingsViewController : WAStaticTableViewController <UINavigationControllerDelegate, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, PeopleMultiPickerNavigationControllerDelegate, WAQRCodeScannerViewControllerDelegate> {
	NotificationsViewController* _notificationsController;
	WABadgedTableViewCell* _chatSettingsCell;
	WASettingsProfileTableViewCell* _profileCell;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)qrCodeScannerViewControllerDidCancel:(id)qrCodeScannerViewController;
-(void)qrCodeScannerViewController:(id)controller didFinishWithCode:(id)code;
-(BOOL)qrCodeScannerViewController:(id)controller shouldAcceptCode:(id)code;
-(void)scanQRCode;
-(void)showWebClientSettings;
-(void)chatManagerDidUpdateStatus:(id)chatManager;
-(void)messageComposeViewController:(id)controller didFinishWithResult:(int)result;
-(void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;
-(void)peopleMultiPickerNavigationControllerDidCancel:(id)peopleMultiPickerNavigationController;
-(void)peopleMultiPickerNavigationController:(id)controller didSelectContacts:(id)contacts;
-(void)setupTableView;
-(void)wa_fontSizeDidChange;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)showDataUsage;
-(void)showStarredMessagesAnimated:(BOOL)animated;
-(void)notificationsAction;
-(void)chatSettingsAction;
-(void)viewAccountAction;
-(void)viewProfileAction;
-(void)inviteAction;
-(void)aboutAction;
-(void)inviteViaSinaWeibo;
-(void)inviteViaFacebook;
-(void)inviteViaTwitter;
-(void)inviteViaEmail;
-(void)sendEmailInvitationTo:(id)to;
-(void)inviteViaSMS;
-(void)sendSMSInvitationTo:(id)to;
-(void)addIcon:(id)icon toTableViewCell:(id)tableViewCell;
-(void)reloadProfilePicture;
-(void)updateProfileInfo;
-(void)backupErrorBadgeUpdated:(id)updated;
-(void)updateChatSettingsBadge;
-(id)initWithStyle:(int)style;
@end

