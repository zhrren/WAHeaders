/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAMessageHelper.h"

@interface WAAudioTrackMessageHelper : WAMessageHelper
{
}

+ (id)stringRepresentationForNotificationForMessage:(id)fp8;
+ (id)stringRepresentationForChatForMessage:(id)fp8;
+ (id)stringRepresentationForMessage:(id)fp8;
- (id)activitySubjectForActivityType:(id)fp8;
- (id)activityItemForActivityType:(id)fp8;
- (id)activityPlaceholderItem;
- (id)chatThumbnailReturningPermanentState:(out char *)fp8;
- (void)storeOutgoingMedia:(id)fp8 completion:(id)fp(null);
- (void)internalFetchImageRepresentationWithCompletionHandler:(id)fp(null);
- (void)internalGenerateMediaBrowserThumbnailFromImageRepresentation:(id)fp8 completion:(id)fp(null);

@end

