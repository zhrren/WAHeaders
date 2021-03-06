/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSSecureCoding.h"
#import "NSCopying.h"
#import "WhatsApp-Structs.h"
#import </libobjc.A.h>

@class NSURL, NSError;

__attribute__((visibility("hidden")))
@interface WAURLRequestConfig : NSObject <NSSecureCoding, NSCopying> {
	BOOL _allowsCellularAccess;
	NSURL* _remoteURL;
	NSError* _previousError;
	int _maxRetryCount;
	double _timeoutInterval;
}
@property(assign, nonatomic) int maxRetryCount;
@property(assign, nonatomic) double timeoutInterval;
@property(assign, nonatomic) BOOL allowsCellularAccess;
@property(copy, nonatomic) NSError* previousError;
@property(copy, nonatomic) NSURL* remoteURL;
+(BOOL)supportsSecureCoding;
-(void).cxx_destruct;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)init;
@end

