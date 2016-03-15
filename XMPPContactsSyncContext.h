/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class XMPPContactsSyncResponse, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface XMPPContactsSyncContext : NSObject {
	NSMutableArray* _phoneNumbers;
	NSMutableArray* _deletedJIDs;
	unsigned _mode;
	unsigned _context;
	NSString* _sid;
	unsigned _batchSize;
	XMPPContactsSyncResponse* _response;
	id _completionHandler;
	unsigned _batchIndex;
	double _timeout;
}
@property(readonly, assign, nonatomic) unsigned batchIndex;
@property(readonly, assign, nonatomic) BOOL hasMoreData;
@property(copy, nonatomic) id completionHandler;
@property(readonly, assign, nonatomic) XMPPContactsSyncResponse* response;
@property(assign, nonatomic) double timeout;
@property(assign, nonatomic) unsigned batchSize;
@property(retain, nonatomic) NSString* sid;
@property(assign, nonatomic) unsigned context;
@property(assign, nonatomic) unsigned mode;
-(void).cxx_destruct;
-(void)getNextPhoneNumberSetInto:(id*)into deletedJIDs:(id*)jids;
-(void)setDeletedJIDs:(id)jids;
-(void)setPhoneNumbers:(id)numbers;
-(id)init;
@end

