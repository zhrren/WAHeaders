/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WAStaticTableViewController.h"

@class WATableRow;

__attribute__((visibility("hidden")))
@interface WADebugFullTextSearchViewController : WAStaticTableViewController {
	unsigned _unindexableMessagesCount;
	unsigned _messagesToIndexCount;
	unsigned _totalMessagesCount;
	WATableRow* _indexedMessagesRow;
	WATableRow* _messagesToIndexRow;
	WATableRow* _completionRow;
	WATableRow* _messagesWithIndexingErrorsRow;
	WATableRow* _searchDatabaseSizeRow;
	WATableRow* _indexRemainingMessagesRow;
	unsigned _inProgressCount;
	double _startTime;
}
-(void).cxx_destruct;
-(void)endIndexingRemainingMessages;
-(void)indexSomeMessages;
-(void)beginIndexingRemainingMessages;
-(void)setupTableView;
-(void)reloadTable;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

