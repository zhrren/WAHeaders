/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSURLRequest, NSData;

__attribute__((visibility("hidden")))
@interface WAHTTPFetcher : NSObject {
	BOOL _validateServerCertificate;
	BOOL _overrideUserAgent;
	BOOL _shouldFetchInBackground;
	NSURLRequest* _request;
	NSData* _postData;
	id _completionHandler;
}
@property(copy, nonatomic) id completionHandler;
@property(assign, nonatomic) BOOL shouldFetchInBackground;
@property(assign, nonatomic) BOOL overrideUserAgent;
@property(assign, nonatomic) BOOL validateServerCertificate;
@property(retain) NSData* postData;
@property(copy, nonatomic) NSURLRequest* request;
+(id)httpErrorForStatusCode:(int)statusCode;
+(id)fetcherWithURLString:(id)urlstring;
+(id)fetcherWithURL:(id)url;
+(id)fetcherWithRequest:(id)request;
-(void).cxx_destruct;
-(void)stopFetching;
-(void)beginFetchOnQueue:(id)queue completion:(id)completion;
-(void)beginFetchWithCompletionHandler:(id)completionHandler;
-(id)description;
-(id)initWithRequest:(id)request;
-(id)init;
@end

