/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import </libobjc.A.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface WADocumentAttachment : NSObject {
	BOOL _ownsFile;
	NSURL* _fileURL;
	NSString* _MIMEType;
	NSString* _originalFilename;
	NSString* _name;
	int _pageCount;
	unsigned long long _fileSize;
}
@property(readonly, assign, nonatomic) int pageCount;
@property(readonly, assign, nonatomic) unsigned long long fileSize;
@property(readonly, assign, nonatomic) NSString* name;
@property(readonly, assign, nonatomic) NSString* originalFilename;
@property(readonly, assign, nonatomic) NSString* MIMEType;
@property(readonly, assign, nonatomic) NSURL* fileURL;
+(id)thumbnailForMicrosoftXMLDocumentAtURL:(id)url MIMEType:(id)type preferredWidth:(float)width;
+(id)temporaryFileURL;
+(id)thumbnailForPDF:(CGPDFDocumentRef)pdf preferredWidth:(float)width;
+(id)thumbnailForPDFAtURL:(id)url preferredWidth:(float)width;
+(id)thumbnailForDocumentAtURL:(id)url MIMEType:(id)type preferredWidth:(float)width;
+(float)preferredThumbnailWidthInPixelsForChat;
+(id)localizedPageCountStringForMIMEType:(id)mimetype pageCount:(int)count;
+(id)localizedDescriptionForMIMEType:(id)mimetype;
+(id)allSupportedMIMETypes;
+(id)allSupportedTypeIdentifiers;
+(id)MIMETypeForDocumentType:(id)documentType;
+(id)MIMETypeForExtension:(id)extension;
+(id)extensionForMIMEType:(id)mimetype;
+(id)typeIdentifierForExtension:(id)extension;
+(void)initialize;
-(void).cxx_destruct;
-(void)processMSFTDocXWithCompletionHandler:(id)completionHandler;
-(void)processPDFWithCompletionHandler:(id)completionHandler;
-(void)processWithCompletionHandler:(id)completionHandler;
-(void)dealloc;
-(id)initWithFileURL:(id)fileURL transferFileOwnership:(BOOL)ownership;
-(id)init;
@end

