/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface WAChatPushConfig : NSManagedObject {
}
@property(retain, nonatomic) NSDate* mutedUntil;
@property(retain, nonatomic) NSString* ringtone;
@property(retain, nonatomic) NSString* sound;
@property(assign, nonatomic) short alerts;
@property(retain, nonatomic) NSString* jid;
@end

