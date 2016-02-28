/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllGroups.h"

@class NSDateFormatter, NSMutableDictionary, NSMutableSet, NSString;

@interface FMDatabase : _ABAddressBookCopyArrayOfAllGroups
{
    struct sqlite3 *_db;
    NSString *_databasePath;
    BOOL _logsErrors;
    BOOL _crashOnErrors;
    BOOL _traceExecution;
    BOOL _checkedOut;
    BOOL _shouldCacheStatements;
    BOOL _isExecutingStatement;
    BOOL _inTransaction;
    double _busyTimeout;
    NSMutableDictionary *_cachedStatements;
    NSMutableSet *_openResultSets;
    NSMutableSet *_openFunctions;
    NSDateFormatter *_dateFormat;
}

+ (id)storeableDateFormat:(id)fp8;
+ (BOOL)isSQLiteThreadSafe;
+ (id)sqliteLibVersion;
+ (id)databaseWithPath:(id)fp8;
- (void)setTraceExecution:(BOOL)fp8;
- (BOOL)traceExecution;
- (void)setCheckedOut:(BOOL)fp8;
- (BOOL)checkedOut;
- (void)setBusyTimeout:(double)fp8;
- (double)busyTimeout;
- (void)setCrashOnErrors:(BOOL)fp8;
- (BOOL)crashOnErrors;
- (void)setLogsErrors:(BOOL)fp8;
- (BOOL)logsErrors;
- (void)setCachedStatements:(id)fp8;
- (id)cachedStatements;
- (void).cxx_destruct;
- (void)makeFunctionNamed:(id)fp8 maximumArguments:(int)fp12 withBlock:(id)fp(null);
- (void)setShouldCacheStatements:(BOOL)fp8;
- (BOOL)shouldCacheStatements;
- (id)inSavePoint:(id)fp(null);
- (BOOL)rollbackToSavePointWithName:(id)fp8 error:(id *)fp12;
- (BOOL)releaseSavePointWithName:(id)fp8 error:(id *)fp12;
- (BOOL)startSavePointWithName:(id)fp8 error:(id *)fp12;
- (BOOL)inTransaction;
- (BOOL)beginTransaction;
- (BOOL)beginDeferredTransaction;
- (BOOL)commit;
- (BOOL)rollback;
- (BOOL)update:(id)fp8 withErrorAndBindings:(id *)fp12;
- (BOOL)executeUpdateWithFormat:(id)fp8;
- (BOOL)executeUpdate:(id)fp8 withVAList:(void *)fp12;
- (BOOL)executeUpdate:(id)fp8 withParameterDictionary:(id)fp12;
- (BOOL)executeUpdate:(id)fp8 withArgumentsInArray:(id)fp12;
- (BOOL)executeUpdate:(id)fp8;
- (BOOL)executeUpdate:(id)fp8 error:(id *)fp12 withArgumentsInArray:(id)fp16 orDictionary:(id)fp20 orVAList:(void *)fp24;
- (id)executeQuery:(id)fp8 withVAList:(void *)fp12;
- (id)executeQuery:(id)fp8 withArgumentsInArray:(id)fp12;
- (id)executeQueryWithFormat:(id)fp8;
- (id)executeQuery:(id)fp8;
- (id)executeQuery:(id)fp8 withArgumentsInArray:(id)fp12 orDictionary:(id)fp16 orVAList:(void *)fp20;
- (id)executeQuery:(id)fp8 withParameterDictionary:(id)fp12;
- (void)extractSQL:(id)fp8 argumentsList:(void *)fp12 intoString:(id)fp16 arguments:(id)fp20;
- (void)bindObject:(id)fp8 toColumn:(int)fp12 inStatement:(struct sqlite3_stmt *)fp16;
- (int)changes;
- (long long)lastInsertRowId;
- (id)lastError;
- (id)errorWithMessage:(id)fp8;
- (int)lastErrorCode;
- (BOOL)hadError;
- (id)lastErrorMessage;
- (BOOL)databaseExists;
- (void)warnInUse;
- (BOOL)goodConnection;
- (id)stringFromDate:(id)fp8;
- (id)dateFromString:(id)fp8;
- (void)setDateFormat:(id)fp8;
- (BOOL)hasDateFormatter;
- (BOOL)setKeyWithData:(id)fp8;
- (BOOL)setKey:(id)fp8;
- (BOOL)rekeyWithData:(id)fp8;
- (BOOL)rekey:(id)fp8;
- (void)setCachedStatement:(id)fp8 forQuery:(id)fp12;
- (id)cachedStatementForQuery:(id)fp8;
- (void)resultSetDidClose:(id)fp8;
- (void)closeOpenResultSets;
- (BOOL)hasOpenResultSets;
- (void)clearCachedStatements;
- (void)setBusyRetryTimeout:(int)fp8;
- (int)busyRetryTimeout;
- (double)retryTimeout;
- (void)setRetryTimeout:(double)fp8;
- (BOOL)close;
- (BOOL)openWithFlags:(int)fp8;
- (BOOL)open;
- (const char *)sqlitePath;
- (struct sqlite3 *)sqliteHandle;
- (id)databasePath;
- (void)dealloc;
- (void)finalize;
- (id)initWithPath:(id)fp8;
- (id)init;
- (BOOL)validateSQL:(id)fp8 error:(id *)fp12;
- (BOOL)columnExists:(id)fp8 columnName:(id)fp12;
- (void)setUserVersion:(unsigned int)fp8;
- (unsigned int)userVersion;
- (void)setApplicationID:(unsigned int)fp8;
- (unsigned int)applicationID;
- (BOOL)columnExists:(id)fp8 inTableWithName:(id)fp12;
- (id)getTableSchema:(id)fp8;
- (id)getSchema;
- (BOOL)tableExists:(id)fp8;
- (id)dateForQuery:(id)fp8;
- (id)dataForQuery:(id)fp8;
- (double)doubleForQuery:(id)fp8;
- (BOOL)boolForQuery:(id)fp8;
- (long)longForQuery:(id)fp8;
- (int)intForQuery:(id)fp8;
- (id)stringForQuery:(id)fp8;

@end

