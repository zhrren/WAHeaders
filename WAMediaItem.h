/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import <CoreData/NSManagedObject.h>

@class WAMessage, NSString, NSData, NSDate, NSNumber, WAMediaItemMetadata;

__attribute__((visibility("hidden")))
@interface WAMediaItem : NSManagedObject {
	WAMediaItemMetadata* _decodedMetadata;
	BOOL _mediaSaved;
	NSString* _mediaHostIp;
	int _httpRetryCount;
}
@property(retain, nonatomic) NSNumber* latitude;
@property(retain, nonatomic) NSNumber* longitude;
@property(retain, nonatomic) NSString* vCardName;
@property(retain, nonatomic) NSString* vCardString;
@property(retain, nonatomic) NSNumber* movieDuration;
@property(retain, nonatomic) NSString* authorName;
@property(assign, nonatomic) int httpRetryCount;
@property(retain, nonatomic) NSString* mediaHostIp;
@property(assign, nonatomic) BOOL mediaSaved;
@property(readonly, assign, nonatomic) CGSize mediaSize;
@property(readonly, assign, nonatomic) NSString* matchedText;
@property(readonly, assign, nonatomic) NSString* canonicalURL;
@property(readonly, assign, nonatomic) NSString* snippet;
@property(copy, nonatomic) WAMediaItemMetadata* decodedMetadata;
@property(retain, nonatomic) NSData* metadata;
@property(retain, nonatomic) NSString* thumbnailLocalPath;
@property(retain, nonatomic) NSData* mediaKey;
@property(retain, nonatomic) NSString* collectionName;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSNumber* mediaOrigin;
@property(retain, nonatomic) NSDate* mediaUrlDate;
@property(retain, nonatomic) NSString* mediaURL;
@property(retain, nonatomic) NSNumber* fileSize;
@property(retain, nonatomic) NSString* xmppThumbPath;
@property(retain, nonatomic) NSString* mediaLocalPath;
@property(retain, nonatomic) WAMessage* message;
-(void).cxx_destruct;
@end

