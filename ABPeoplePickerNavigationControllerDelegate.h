/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol ABPeoplePickerNavigationControllerDelegate <NSObject>
@optional
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(const void*)person property:(int)property identifier:(int)identifier;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(const void*)person;
-(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
-(void)peoplePickerNavigationController:(id)controller didSelectPerson:(const void*)person property:(int)property identifier:(int)identifier;
-(void)peoplePickerNavigationController:(id)controller didSelectPerson:(const void*)person;
@end

