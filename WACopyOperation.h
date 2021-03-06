/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WABackupOperation.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WACopyOperation : WABackupOperation {
	unsigned long long _bytesWritten;
	unsigned long long _bytesToWrite;
	BOOL _succeeded;
	BOOL _overwrite;
	BOOL _atomic;
	BOOL _remove;
	BOOL _optional;
	NSString* _source;
	NSString* _destination;
}
@property(retain) NSString* destination;
@property(retain) NSString* source;
@property(assign) BOOL optional;
@property(assign) BOOL remove;
@property(assign) BOOL atomic;
@property(assign) BOOL overwrite;
+(unsigned)copyFromHandle:(id)handle toHandle:(id)handle2 withMaximumByteCount:(unsigned long long)maximumByteCount bytesWritten:(out unsigned long long*)written andCancellationBlock:(id)block;
-(void).cxx_destruct;
-(unsigned)chunkedCopyFromPath:(id)path toPath:(id)path2;
-(unsigned)copyFile;
-(void)run;
-(float)progress;
-(BOOL)succeeded;
-(id)initWithSource:(id)source andDestination:(id)destination;
-(id)initWithDependenciesRequired:(BOOL)dependenciesRequired;
@end

