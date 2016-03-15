/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import </libobjc.A.h>

@class NSURL, NSURLSessionDataTask;

__attribute__((visibility("hidden")))
@interface WAWebPageReader : NSObject {
	id _handler;
	double _startTime;
	NSURLSessionDataTask* _currentDataTask;
	BOOL _invalidated;
	int _handlerInvocationCount;
	int _imageFetchRetryCount;
	NSURL* _webURL;
	double _htmlFetchTimeout;
	double _imageFetchTimeout;
	CGSize _preferredImageSize;
}
@property(assign, nonatomic) CGSize preferredImageSize;
@property(readonly, assign, nonatomic) NSURL* webURL;
@property(assign, nonatomic) double imageFetchTimeout;
@property(assign, nonatomic) double htmlFetchTimeout;
+(void)initialize;
-(void).cxx_destruct;
-(void)cleanUp;
-(void)failWithError:(id)error;
-(void)cancel;
-(void)fetchImageInMetadata:(id)metadata;
-(void)completeReadingWithMetadata:(id)metadata;
-(void)parseHTML:(id)html fromURL:(id)url rawData:(id)data assumedEncoding:(unsigned)encoding reinterpretDataIfNeeded:(BOOL)needed;
-(unsigned)stringEncodingFromCharset:(id)charset;
-(void)loadMetadataWithResultHandler:(id)resultHandler;
-(id)URLRequestWithURL:(id)url timeout:(double)timeout;
-(id)initWithURL:(id)url;
-(id)init;
@end

