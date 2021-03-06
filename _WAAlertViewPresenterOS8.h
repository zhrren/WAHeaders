/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAAlertViewPresenter.h"

@class UIAlertController;

__attribute__((visibility("hidden")))
@interface _WAAlertViewPresenterOS8 : WAAlertViewPresenter {
	UIAlertController* _alertController;
	UIAlertController* _retainedControllerBeforePresentation;
	id _cancelActionHandler;
}
-(void).cxx_destruct;
-(void)addButtonWithTitle:(id)title handler:(id)handler;
-(void)addCancelButtonWithTitle:(id)title handler:(id)handler;
-(void)dismissByCancellingWithAnimation:(BOOL)animation;
-(void)presentFromViewController:(id)viewController;
-(id)initWithTitle:(id)title message:(id)message;
@end

