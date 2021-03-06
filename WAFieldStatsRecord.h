/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WAFieldStatsRecord : NSObject {
	BOOL _written;
	int _type;
	int _uniqueId;
	unsigned _timestamp;
	NSString* _stringValue;
	double _numericValue;
}
@property(assign) BOOL written;
@property(assign) double numericValue;
@property(retain) NSString* stringValue;
@property(assign) unsigned timestamp;
@property(assign) int uniqueId;
@property(assign) int type;
+(id)typeToString:(int)string;
-(void).cxx_destruct;
-(id)description;
-(BOOL)isEqualToRecord:(id)record;
-(BOOL)isDimension;
-(id)initWithType:(int)type uniqueId:(int)anId timestamp:(unsigned)timestamp;
-(id)initWithType:(int)type uniqueId:(int)anId value:(double)value;
-(id)initWithType:(int)type uniqueId:(int)anId stringValue:(id)value;
@end

