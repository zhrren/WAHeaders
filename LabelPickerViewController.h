/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WATableViewController.h"

#import "CustomLabelInputViewContollerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface LabelPickerViewController : WATableViewController <CustomLabelInputViewContollerDelegate>
{
    NSArray *_standardLabels;
    NSMutableArray *_customLabels;
    BOOL _useGenericLabels;
    id <LabelPickerViewControllerDelegate> _delegate;
    NSString *_selectedLabel;
}

+ (id)localizedLabel:(struct __CFString *)fp8;
- (void)setUseGenericLabels:(BOOL)fp8;
- (BOOL)useGenericLabels;
- (void)setSelectedLabel:(id)fp8;
- (id)selectedLabel;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)labelInputViewControllerDidCancel:(id)fp8;
- (void)labelInputViewController:(id)fp8 didSaveLabel:(id)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 willSelectRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 editingStyleForRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (void)doneAction:(id)fp8;
- (void)cancelAction:(id)fp8;
- (id)standardLabels;
- (void)dealloc;
- (id)init;

@end
