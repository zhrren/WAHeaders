/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface WATableRow : NSObject {
	BOOL _editable;
	BOOL _disabled;
	id _editHandler;
	id _handler;
	UITableViewCell* _cell;
	float _height;
}
@property(assign, nonatomic) float height;
@property(assign, nonatomic) BOOL disabled;
@property(assign, nonatomic, getter=isEditable) BOOL editable;
@property(retain, nonatomic) UITableViewCell* cell;
@property(copy, nonatomic) id handler;
@property(copy, nonatomic) id editHandler;
-(void).cxx_destruct;
@end

