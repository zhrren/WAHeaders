/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "NSObject.h"


@protocol UIActivityItemSource <NSObject>
-(id)activityViewController:(id)controller itemForActivityType:(id)activityType;
-(id)activityViewControllerPlaceholderItem:(id)item;
@optional
-(id)activityViewController:(id)controller thumbnailImageForActivityType:(id)activityType suggestedSize:(CGSize)size;
-(id)activityViewController:(id)controller dataTypeIdentifierForActivityType:(id)activityType;
-(id)activityViewController:(id)controller subjectForActivityType:(id)activityType;
@end

