/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "NSObject.h"


@protocol WALocationDataSource <NSObject>
-(id)locationsWithCoordinate:(XXStruct_gLbvpC)coordinate;
-(id)locationDataAtIndex:(int)index;
-(unsigned)numberOfLocations;
@optional
-(id)mapTitle;
@end

