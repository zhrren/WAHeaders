/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, UIView, UILabel;

__attribute__((visibility("hidden")))
@interface WACallEventsTableViewCell : UITableViewCell {
	UIView* _topEdge;
	NSMutableArray* _customConstraints;
	UILabel* _dateLabel;
	NSMutableArray* _timeLabels;
	NSMutableArray* _eventLabels;
	NSMutableArray* _durationLabels;
}
-(void).cxx_destruct;
-(void)updateConstraints;
-(void)addCustomConstraints:(id)constraints;
-(void)configureWithAggregateCallEvent:(id)aggregateCallEvent;
-(int)indexOfAccessibilityElement:(id)accessibilityElement;
-(id)accessibilityElementAtIndex:(int)index;
-(int)accessibilityElementCount;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

