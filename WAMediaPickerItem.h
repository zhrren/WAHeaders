/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class UIImage, NSURL;

__attribute__((visibility("hidden")))
@interface WAMediaPickerItem : NSObject {
	BOOL _isVideo;
	id _identifier;
	NSURL* _videoURL;
	UIImage* _image;
	NSURL* _fileURL;
}
@property(readonly, assign, nonatomic) BOOL isFileFormatSupported;
@property(assign, nonatomic) BOOL isVideo;
@property(retain, nonatomic) NSURL* fileURL;
@property(retain, nonatomic) UIImage* image;
@property(retain, nonatomic) NSURL* videoURL;
@property(retain, nonatomic) id identifier;
-(void).cxx_destruct;
@end

