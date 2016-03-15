/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString, _WAProgressAlertController, _WAProgressAlertViewLegacy;

__attribute__((visibility("hidden")))
@interface WAProgressAlertController : NSObject {
	_WAProgressAlertController* _alertController;
	_WAProgressAlertViewLegacy* _alertView;
	id _cancelHandler;
}
@property(copy, nonatomic) NSString* title;
@property(assign, nonatomic) float progress;
@property(readonly, assign, nonatomic, getter=isDismissed) BOOL dismissed;
-(void).cxx_destruct;
-(void)dismissWithCompletionHandler:(id)completionHandler;
-(void)presentFromViewController:(id)viewController;
-(void)cancel;
-(id)initWithTitle:(id)title cancelHandler:(id)handler;
-(id)init;
@end

