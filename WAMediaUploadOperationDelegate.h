/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol WAMediaUploadOperationDelegate <NSObject>
-(void)mediaUploadOperation:(id)operation didFailWithError:(id)error;
-(void)mediaUploadOperationDidFinish:(id)mediaUploadOperation;
@optional
-(void)mediaUploadOperation:(id)operation uploadProgressChanged:(float)changed;
@end

