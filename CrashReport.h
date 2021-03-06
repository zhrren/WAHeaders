/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>


__attribute__((visibility("hidden")))
@interface CrashReport : NSObject {
}
+(void)sendRequestedLogs;
+(void)logCriticalEventWithName:(id)name crashDetails:(id)details useActiveLog:(BOOL)log discretionary:(BOOL)discretionary;
+(void)logCriticalEventWithName:(id)name useActiveLog:(BOOL)log discretionary:(BOOL)discretionary;
+(void)logCriticalEventWithName:(id)name useActiveLog:(BOOL)log;
+(void)logCriticalEventWithName:(id)name discretionary:(BOOL)discretionary;
+(void)logCriticalEventWithName:(id)name callStackAddresses:(id)addresses symbols:(id)symbols;
+(void)logCriticalEventWithName:(id)name;
+(void)initializeHandlers;
+(id)signalNumberToString:(int)string;
+(id)callStackDetailsWithName:(id)name reason:(id)reason addresses:(id)addresses symbols:(id)symbols;
+(id)parseNameFromLine:(id)line;
+(id)callStackDetailsWithName:(id)name reason:(id)reason;
+(id)callStackDetailsForCriticalEventWithName:(id)name addresses:(id)addresses symbols:(id)symbols;
+(void)checkForInstallProblemWithName:(id)name;
@end

