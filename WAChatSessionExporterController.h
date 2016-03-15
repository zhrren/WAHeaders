/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIActivityItemSource.h"
#import "WhatsApp-Structs.h"
#import </libobjc.A.h>

@class NSString, NSURL, WAProgressAlertController, WAChatSessionExporter;

__attribute__((visibility("hidden")))
@interface WAChatSessionExporterController : NSObject <UIActivityItemSource> {
	WAChatSessionExporter* _exporter;
	WAProgressAlertController* _progressController;
	WAChatSessionExporterController* _retainedSelf;
	NSURL* _exportedURL;
	NSString* _exportedSubject;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(void)exportChatSession:(id)session withMedia:(BOOL)media fromViewController:(id)viewController completion:(id)completion;
-(void).cxx_destruct;
-(id)activityViewController:(id)controller itemForActivityType:(id)activityType;
-(id)activityViewControllerPlaceholderItem:(id)item;
-(void)shareExportedFileURL:(id)url fromViewController:(id)viewController completion:(id)completion;
-(void)performExportWithMedia:(BOOL)media fromViewController:(id)viewController completion:(id)completion;
-(id)initWithChatSession:(id)chatSession;
@end
