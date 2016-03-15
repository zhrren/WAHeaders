/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import </libobjc.A.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface WACallEvent : NSObject <NSCoding> {
	BOOL _incoming;
	BOOL _isCallerKnown;
	int _outcome;
	int _medium;
	int _configuration;
	NSDate* _date;
	int _year;
	int _month;
	int _day;
	NSString* _peerDisplayName;
	NSString* _peerJID;
	NSString* _whatsAppID;
	NSString* _detailText;
	unsigned long long _txBytes;
	unsigned long long _rxBytes;
	double _duration;
}
@property(readonly, copy, nonatomic) NSString* callDataUsageForDisplay;
@property(readonly, copy, nonatomic) NSString* detailTextForDisplay;
@property(readonly, copy, nonatomic) NSString* callDurationForDisplay;
@property(readonly, copy, nonatomic) NSString* callTimeForDisplay;
@property(readonly, copy, nonatomic) NSString* callDateForHeader;
@property(readonly, copy, nonatomic) NSString* callDateForDisplay;
@property(readonly, copy, nonatomic) NSString* callDescriptionForVoiceOver;
@property(readonly, copy, nonatomic) NSString* callDescription;
@property(assign, nonatomic) BOOL isCallerKnown;
@property(copy, nonatomic) NSString* detailText;
@property(readonly, copy, nonatomic) NSString* whatsAppID;
@property(copy, nonatomic) NSString* peerJID;
@property(copy, nonatomic) NSString* peerDisplayName;
@property(assign, nonatomic) double duration;
@property(readonly, assign, nonatomic) int day;
@property(readonly, assign, nonatomic) int month;
@property(readonly, assign, nonatomic) int year;
@property(assign, nonatomic) unsigned long long rxBytes;
@property(assign, nonatomic) unsigned long long txBytes;
@property(retain, nonatomic) NSDate* date;
@property(assign, nonatomic) int configuration;
@property(assign, nonatomic) int medium;
@property(assign, nonatomic) int outcome;
@property(assign, nonatomic) BOOL incoming;
-(void).cxx_destruct;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)init;
@end

