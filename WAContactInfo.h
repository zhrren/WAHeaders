/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSMutableDictionary, NSManagedObjectID, NSString, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface WAContactInfo : NSObject {
	NSMutableDictionary* _userInfo;
	BOOL _disabled;
	BOOL _blocked;
	BOOL _selected;
	int _addressBookID;
	NSString* _displayNameLong;
	NSString* _displayNameMedium;
	NSString* _displayNameShort;
	NSString* _jid;
	NSString* _highlightedName;
	NSString* _statusText;
	NSString* _detailText;
	NSArray* _tokens;
	NSManagedObjectID* _waContactObjectID;
}
@property(retain, nonatomic) NSManagedObjectID* waContactObjectID;
@property(copy, nonatomic) NSDictionary* userInfo;
@property(assign, nonatomic, getter=isSelected) BOOL selected;
@property(assign, nonatomic, getter=isBlocked) BOOL blocked;
@property(assign, nonatomic, getter=isDisabled) BOOL disabled;
@property(retain, nonatomic) NSArray* tokens;
@property(copy, nonatomic) NSString* detailText;
@property(copy, nonatomic) NSString* statusText;
@property(copy, nonatomic) NSString* highlightedName;
@property(copy, nonatomic) NSString* jid;
@property(copy, nonatomic) NSString* displayNameShort;
@property(copy, nonatomic) NSString* displayNameMedium;
@property(copy, nonatomic) NSString* displayNameLong;
@property(assign, nonatomic) int addressBookID;
-(void).cxx_destruct;
-(void)setUserInfoObject:(id)object forKey:(id)key;
-(id)parentContact;
-(id)initWithChatSession:(id)chatSession;
-(id)initWithContact:(id)contact;
-(id)initWithWAContactObjectID:(id)wacontactObjectID;
@end

