/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAStaticTableViewController.h"

#import "WALinkLabelDelegate-Protocol.h"

@class UILabel, UIView, WALinkLabel, WATableRow;

@interface PaymentInfoViewController : WAStaticTableViewController <WALinkLabelDelegate>
{
    WATableRow *_expirationRow;
    BOOL _lifetimeService;
    UIView *_viewTableFooter;
    WALinkLabel *_blogPostLink;
    UILabel *_labelHelperText;
}

- (void)setLabelHelperText:(id)fp8;
- (id)labelHelperText;
- (void)setBlogPostLink:(id)fp8;
- (id)blogPostLink;
- (void)setViewTableFooter:(id)fp8;
- (id)viewTableFooter;
- (void).cxx_destruct;
- (void)servicePurchased:(id)fp8;
- (void)handleOpenURL:(id)fp8 fromLinkLabel:(id)fp12;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (id)localizedServiceExpirationDate;
- (void)updateAccountInfo;
- (void)wa_fontSizeDidChange;
- (void)wa_tintColorDidChange;
- (void)willAnimateRotationToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)setupTableView;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (void)layoutTableFooter;
- (id)init;

@end

