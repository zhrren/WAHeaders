/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSDate.h>


@interface NSDate (TimeShift)
@property(readonly, assign, nonatomic) double wa_elapsedTimeInterval;
+(double)serverTimeShift;
+(id)wa_serverDate;
-(double)wa_timeIntervalSinceServerNow;
-(id)wa_dateByRemovingShiftCorrection;
-(id)wa_dateByIncludingShiftCorrection;
@end

