/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ProfileViewControllerDelegate.h"
#import "ChangeConfirmationControllerDelegate.h"
#import "ChangeNumberInputControllerDelegate.h"
#import "WAVerificationAutoBackupViewControllerDelegate.h"
#import "WANetworkChangedControllerDelegate.h"
#import "WAVerificationCloudReminderViewControllerDelegate.h"
#import "WAWelcomeViewControllerDelegate.h"
#import "WAModalNavigationController.h"
#import "RestoreBackupViewControllerDelegate.h"
#import "PhoneInputViewControllerDelegate.h"
#import "PassInputViewControllerDelegate.h"

@class WAVerificationAutoBackupViewController, NSString;
@protocol VerificationControllerDelegate;

__attribute__((visibility("hidden")))
@interface VerificationController : WAModalNavigationController <PhoneInputViewControllerDelegate, PassInputViewControllerDelegate, ProfileViewControllerDelegate, RestoreBackupViewControllerDelegate, ChangeConfirmationControllerDelegate, ChangeNumberInputControllerDelegate, WAVerificationAutoBackupViewControllerDelegate, WANetworkChangedControllerDelegate, WAVerificationCloudReminderViewControllerDelegate, WAWelcomeViewControllerDelegate> {
	id<VerificationControllerDelegate> _verificationDelegate;
	unsigned _mode;
	WAVerificationAutoBackupViewController* _autoBackupViewController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) WAVerificationAutoBackupViewController* autoBackupViewController;
@property(readonly, assign, nonatomic) unsigned mode;
@property(assign, nonatomic) __weak id<VerificationControllerDelegate> verificationDelegate;
+(void)cancelPhoneNumberChange;
+(void)updateDefaultsAndKeychain:(id)keychain password:(id)password;
+(BOOL)userProfileValid;
+(BOOL)shouldShowAutoBackupPrompt;
+(void)determineShouldShowAutoBackupPrompt;
+(BOOL)profilePhotoValid;
+(BOOL)pushNameValid;
+(void)validateProfileAndSettingsOnUpgrade;
-(void).cxx_destruct;
-(void)networkChangedController:(id)controller didFinishWithResult:(BOOL)result;
-(BOOL)verificationCloudReminderControllerShouldShowNextButton:(id)verificationCloudReminderController;
-(BOOL)verificationCloudReminderControllerShouldShowDoneButton:(id)verificationCloudReminderController;
-(void)verificationCloudReminderControllerDidFinish:(id)verificationCloudReminderController;
-(BOOL)verificationAutoBackupControllerShouldShowNextButton:(id)verificationAutoBackupController;
-(void)verificationAutoBackupControllerDidFinish:(id)verificationAutoBackupController;
-(void)cloudAccountChanged:(id)changed;
-(void)changeNumberInputControllerDidCancel:(id)changeNumberInputController;
-(void)changeNumberInputControllerDidEnterPhone:(id)changeNumberInputController;
-(void)changeNumberInputControllerDidFinish:(id)changeNumberInputController;
-(void)changeConfirmationControllerDidCancel:(id)changeConfirmationController;
-(void)changeConfirmationControllerDidFinish:(id)changeConfirmationController;
-(void)restoreBackupViewControllerDidFinish:(id)restoreBackupViewController;
-(void)profileViewControllerDidFinish:(id)profileViewController;
-(void)passInputViewControllerDidCancel:(id)passInputViewController;
-(void)passInputViewControllerDidFinish:(id)passInputViewController;
-(void)phoneInputViewControllerDidFinish:(id)phoneInputViewController;
-(void)phoneInputViewControllerDidEnterPhone:(id)phoneInputViewController;
-(void)welcomeViewControllerDidAccept:(id)welcomeViewController;
-(id)popViewControllerAnimated:(BOOL)animated;
-(void)pushViewController:(id)controller animated:(BOOL)animated;
-(void)cancelVerification;
-(void)finishVerification;
-(void)goToCloudReminderScreen;
-(void)goToProfileScreen;
-(void)verifiedAfterInstallGoToNextScreen;
-(id)createCloudReminderViewController;
-(id)restoreBackupViewController;
-(id)profileViewController;
-(id)passInputController;
-(id)init;
-(void)dealloc;
-(id)initWithMode:(unsigned)mode;
@end

