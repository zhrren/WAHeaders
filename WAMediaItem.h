/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSString, WAMediaItemMetadata;

@interface WAMediaItem : _ABAddressBookCopyArrayOfAllGroups
{
    WAMediaItemMetadata *_decodedMetadata;
    BOOL _mediaSaved;
    NSString *_mediaHostIp;
    int _httpRetryCount;
}

- (void)setHttpRetryCount:(int)fp8;
- (int)httpRetryCount;
- (void)setMediaHostIp:(id)fp8;
- (id)mediaHostIp;
- (void)setMediaSaved:(BOOL)fp8;
- (BOOL)mediaSaved;
- (void).cxx_destruct;
- (id)matchedText;
- (id)canonicalURL;
- (id)snippet;
- (void)setDecodedMetadata:(id)fp8;
- (id)decodedMetadata;

@end

