/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAAlertViewPresenter.h"

@class UIAlertController;

@interface _WAAlertViewPresenterOS8 : WAAlertViewPresenter
{
    UIAlertController *_alertController;
    UIAlertController *_retainedControllerBeforePresentation;
    id _cancelActionHandler;
}

- (void).cxx_destruct;
- (void)addButtonWithTitle:(id)fp8 handler:(id)fp(null);
- (void)addCancelButtonWithTitle:(id)fp8 handler:(id)fp(null);
- (void)dismissByCancellingWithAnimation:(BOOL)fp8;
- (void)presentFromViewController:(id)fp8;
- (id)initWithTitle:(id)fp8 message:(id)fp12;

@end

