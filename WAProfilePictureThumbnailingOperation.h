/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WAProfilePictureOperation.h"

@class UIImage;

@interface WAProfilePictureThumbnailingOperation : WAProfilePictureOperation
{
    UIImage *_sourceImage;
    UIImage *_resultImage;
}

+ (id)operationForJID:(id)fp8 image:(id)fp12;
- (void)setResultImage:(id)fp8;
- (id)resultImage;
- (void)setSourceImage:(id)fp8;
- (id)sourceImage;
- (void).cxx_destruct;
- (void)start;

@end

