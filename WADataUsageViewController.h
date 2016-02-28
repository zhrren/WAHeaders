/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAStaticTableViewController.h"

@class NSString, WATableRow;

@interface WADataUsageViewController : WAStaticTableViewController
{
    WATableRow *_imagesRow;
    WATableRow *_audioRow;
    WATableRow *_videosRow;
    WATableRow *_resetRow;
    NSString *_autoDownloadImagesString;
    NSString *_autoDownloadAudioString;
    NSString *_autoDownloadVideosString;
    NSString *_autoDownloadNeverString;
    NSString *_autoDownloadWifiString;
    NSString *_autoDownloadCellularString;
}

- (void).cxx_destruct;
- (void)resetAutoDownloadSettings;
- (void)reloadAutoDownloadSettings;
- (void)showAutoDownloadSettingPickerForMediaType:(unsigned int)fp8;
- (void)viewNetworkUsageAction;
- (void)lowDataUsageSwitchAction:(id)fp8;
- (void)setupTableView;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (id)init;
- (id)initWithStyle:(int)fp8;

@end

