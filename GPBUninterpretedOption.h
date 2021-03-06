/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString;

@interface GPBUninterpretedOption : GPBMessage {
}
@property(copy, nonatomic) NSString* aggregateValue;
@property(assign, nonatomic) BOOL hasAggregateValue;
@property(copy, nonatomic) NSData* stringValue;
@property(assign, nonatomic) BOOL hasStringValue;
@property(assign, nonatomic) double doubleValue;
@property(assign, nonatomic) BOOL hasDoubleValue;
@property(assign, nonatomic) long long negativeIntValue;
@property(assign, nonatomic) BOOL hasNegativeIntValue;
@property(assign, nonatomic) unsigned long long positiveIntValue;
@property(assign, nonatomic) BOOL hasPositiveIntValue;
@property(copy, nonatomic) NSString* identifierValue;
@property(assign, nonatomic) BOOL hasIdentifierValue;
@property(readonly, assign, nonatomic) unsigned nameArray_Count;
@property(retain, nonatomic) NSMutableArray* nameArray;
+(id)descriptor;
@end

