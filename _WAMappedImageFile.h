/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _WAMappedImageFile : NSObject {
	NSURL* _fileURL;
	NSString* _key;
	int _width;
	int _height;
}
@property(readonly, assign, nonatomic) int height;
@property(readonly, assign, nonatomic) int width;
@property(readonly, assign, nonatomic) NSString* key;
@property(readonly, assign, nonatomic) NSURL* fileURL;
-(void).cxx_destruct;
-(id)initWithFileURL:(id)fileURL;
@end

