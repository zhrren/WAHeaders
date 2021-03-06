/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAMediaUploadable.h"
#import "NSCoding.h"
#import </libobjc.A.h>

@class NSArray, WAMessageMetadata, NSDate, NSNumber, NSData, NSString, NSSet, NSURL;
@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface WASharedItem : NSObject <WAMediaUploadable, NSCoding> {
	unsigned _mediaType;
	BOOL _isFileURLPermanent;
	NSString* _uniqueID;
	NSString* _stanzaID;
	NSDate* _creationDate;
	NSString* _toJID;
	NSString* _text;
	NSURL* _fileURL;
	int _multiSendMediaIndex;
	int _multiSendMediaCount;
	NSString* _mediaCollectionName;
	NSString* _vCardName;
	NSString* _vCardString;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSString* _locationName;
	NSString* _locationUrl;
	WAMessageMetadata* _metadata;
	NSData* _imageRepresentationData;
	NSNumber* _mediaWidth;
	NSNumber* _mediaHeight;
	NSArray* _broadcastListRecipientJIDs;
	NSString* _broadcastListName;
	int _mediaDuration;
	NSData* _thumbnailData;
	unsigned _status;
	NSString* _serverMediaURL;
	NSString* _serverHash;
	int _filteredRecipientCount;
	float _uploadProgress;
	unsigned long long _fileSize;
}
@property(readonly, assign, nonatomic) NSSet* recipientsJids;
@property(readonly, assign, nonatomic) NSData* mediaKey;
@property(readonly, assign, nonatomic) int httpRetryCount;
@property(readonly, assign, nonatomic) BOOL isPTT;
@property(readonly, copy, nonatomic) NSString* fileHash;
@property(readonly, assign, nonatomic) unsigned mediaType;
@property(readonly, copy, nonatomic) NSString* mediaPath;
@property(readonly, assign, nonatomic) NSString* stanzaID;
@property(readonly, assign, nonatomic) id<NSObject, NSCopying> uniqueID;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) float uploadProgress;
@property(assign, nonatomic) int filteredRecipientCount;
@property(copy, nonatomic) NSString* serverHash;
@property(copy, nonatomic) NSString* serverMediaURL;
@property(assign, nonatomic) unsigned status;
@property(readonly, assign, nonatomic) NSData* thumbnailData;
@property(readonly, assign, nonatomic) int mediaDuration;
@property(readonly, assign, nonatomic) unsigned long long fileSize;
@property(retain, nonatomic) NSString* broadcastListName;
@property(retain, nonatomic) NSArray* broadcastListRecipientJIDs;
@property(retain, nonatomic) NSNumber* mediaHeight;
@property(retain, nonatomic) NSNumber* mediaWidth;
@property(retain, nonatomic) NSData* imageRepresentationData;
@property(readonly, assign, nonatomic) WAMessageMetadata* metadata;
@property(retain, nonatomic) NSString* locationUrl;
@property(retain, nonatomic) NSString* locationName;
@property(retain, nonatomic) NSNumber* longitude;
@property(retain, nonatomic) NSNumber* latitude;
@property(retain, nonatomic) NSString* vCardString;
@property(retain, nonatomic) NSString* vCardName;
@property(copy, nonatomic) NSString* mediaCollectionName;
@property(assign, nonatomic) int multiSendMediaCount;
@property(assign, nonatomic) int multiSendMediaIndex;
@property(readonly, assign, nonatomic) NSURL* fileURL;
@property(readonly, copy, nonatomic) NSString* text;
@property(retain, nonatomic) NSString* toJID;
@property(readonly, assign, nonatomic) NSDate* creationDate;
-(void).cxx_destruct;
-(void)didChangeOutboxToURL:(id)url;
-(void)replaceMediaWithMediaAtPath:(id)path;
-(void)prepareForUploadWithCompletionHandler:(id)completionHandler;
-(void)prepareForSavingWithOutboxURL:(id)outboxURL;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)initWithAudioFileURL:(id)audioFileURL;
-(id)initWithPlace:(id)place;
-(id)initWithVCard:(id)vcard;
-(id)initWithText:(id)text metadata:(id)metadata;
-(id)initWithVideoFileURL:(id)videoFileURL caption:(id)caption;
-(id)initWithImageFileURL:(id)imageFileURL caption:(id)caption;
-(id)init;
@end

