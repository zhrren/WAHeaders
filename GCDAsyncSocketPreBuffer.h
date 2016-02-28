/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@interface GCDAsyncSocketPreBuffer : _ABAddressBookCopyArrayOfAllGroups
{
    char *preBuffer;
    unsigned long preBufferSize;
    char *readPointer;
    char *writePointer;
}

- (void)reset;
- (void)didWrite:(unsigned long)fp8;
- (void)getWriteBuffer:(char **)fp8 availableSpace:(unsigned int *)fp12;
- (char *)writeBuffer;
- (unsigned long)availableSpace;
- (void)didRead:(unsigned long)fp8;
- (void)getReadBuffer:(char **)fp8 availableBytes:(unsigned int *)fp12;
- (char *)readBuffer;
- (unsigned long)availableBytes;
- (void)ensureCapacityForWrite:(unsigned long)fp8;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long)fp8;

@end

