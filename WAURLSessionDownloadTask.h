/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAURLSessionTask.h"

@class WAURLDownloadTaskData, NSURL;

__attribute__((visibility("hidden")))
@interface WAURLSessionDownloadTask : WAURLSessionTask {
	int _vendCount;
	BOOL _removeFileAtLocationOnDealloc;
	NSURL* _location;
}
@property(readonly, assign, nonatomic) NSURL* location;
@property(readonly, assign, nonatomic) int mediaHeight;
@property(readonly, assign, nonatomic) int mediaWidth;
@property(readonly, copy, nonatomic) WAURLDownloadTaskData* taskData;
+(id)downloadTaskWithURLSessionDownloadTask:(id)urlsessionDownloadTask;
-(void).cxx_destruct;
-(BOOL)moveDownloadedContentToPath:(id)path;
-(void)replaceDownloadedFileWithFileAtURL:(id)url;
-(void)didDownloadFileToURL:(id)url;
-(void)cancelByProducingResumeData:(id)data;
-(float)progress;
-(void)dealloc;
@end

