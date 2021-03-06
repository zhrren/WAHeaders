/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAStaticTableViewController.h"

@class WACloudStatus, WASharedMetadataQuery;

__attribute__((visibility("hidden")))
@interface WABackupSettingsViewController : WAStaticTableViewController {
	WASharedMetadataQuery* _query;
	WACloudStatus* _cloudStatus;
	id _listenerObject;
}
@property(retain, nonatomic) id listenerObject;
@property(retain, nonatomic) WACloudStatus* cloudStatus;
@property(retain, nonatomic) WASharedMetadataQuery* query;
-(void).cxx_destruct;
-(void)addMediaRestoreSection;
-(void)addRecentSection;
-(void)addActionsSection;
-(void)addMetadataSection;
-(void)addAccountSection;
-(void)dealloc;
-(void)addBackupInformation;
-(void)viewDidLoad;
-(id)init;
-(id)initWithStyle:(int)style;
@end

