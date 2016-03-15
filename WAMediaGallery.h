/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"

@class WAMediaManager, NSIndexPath;

@protocol WAMediaGallery <NSObject>
@property(retain, nonatomic) NSIndexPath* indexPathOfMessageToScrollToWhenAppearing;
@property(retain, nonatomic) WAMediaManager* mediaManager;
-(void)presentMediaAtIndexPath:(id)indexPath;
@end

