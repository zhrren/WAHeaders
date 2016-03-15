/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCopying.h"
#import "WhatsApp-Structs.h"
#import </libobjc.A.h>

@class NSString, NSDate, NSDictionary;

__attribute__((visibility("hidden")))
@interface WAContactProperty : NSObject <NSCopying> {
	BOOL _readonly;
	BOOL _supressAutomaticPropertyUpdates;
	int _abPropertyID;
	int _abPersonID;
	NSString* _stringValue;
	NSDate* _dateValue;
	NSDictionary* _dictionaryValue;
	NSString* _label;
	NSString* _systemLabel;
	NSDictionary* _userInfo;
}
@property(assign, nonatomic) BOOL supressAutomaticPropertyUpdates;
@property(retain, nonatomic) NSDictionary* userInfo;
@property(copy, nonatomic) NSString* systemLabel;
@property(copy, nonatomic) NSString* label;
@property(retain, nonatomic) NSDictionary* dictionaryValue;
@property(copy, nonatomic) NSDate* dateValue;
@property(copy, nonatomic) NSString* stringValue;
@property(assign, nonatomic, getter=isReadonly) BOOL readonly;
@property(assign, nonatomic) int abPersonID;
@property(assign, nonatomic) int abPropertyID;
+(id)propertyWithABProperty:(int)abproperty;
+(id)stringForAddressDictionary:(id)addressDictionary;
+(id)stringForAddressBookDate:(id)addressBookDate;
-(void).cxx_destruct;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)hash;
-(BOOL)isEqualToProperty:(id)property;
-(BOOL)isEqual:(id)equal;
-(void)addValueAndLabelToABMutableMultiValue:(void*)abmutableMultiValue;
-(void)setDictionaryValue:(id)value forKey:(id)key;
-(id)init;
-(id)initWithABProperty:(int)abproperty;
@end

