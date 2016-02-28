/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WATableViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSArray, UITableViewCell, UITextField, WAContactProperty;

@interface WAAddressBookLabelPicker : WATableViewController <UITextFieldDelegate, UIScrollViewDelegate>
{
    NSArray *_predefinedLabels;
    UITableViewCell *_textFieldCell;
    UITextField *_textField;
    WAContactProperty *_contactProperty;
    id <WAAddressBookLabelPickerDelegate> _delegate;
}

+ (id)pickerWithDelegate:(id)fp8;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setContactProperty:(id)fp8;
- (id)contactProperty;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)fp8;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 willSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)textFieldDidBeginEditing:(id)fp8;
- (void)doneAction:(id)fp8;
- (void)cancelAction:(id)fp8;
- (void)wa_fontSizeDidChange;
- (void)viewDidLoad;

@end

