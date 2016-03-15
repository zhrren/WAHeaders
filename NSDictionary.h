/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSDictionary.h>


@interface NSDictionary (Types)
-(id)wa_arrayForKey:(id)key;
-(id)wa_dictionaryForKey:(id)key;
-(id)wa_dataForKey:(id)key;
-(id)wa_stringForKey:(id)key;
-(id)wa_dateForKey:(id)key;
-(id)wa_numberForKey:(id)key;
-(id)wa_objectForKey:(id)key ofClass:(Class)aClass;
@end

@interface NSDictionary (Callback)
+(id)callbackDictionaryForDelegate:(id)delegate userInfo:(id)info finishedSelector:(SEL)selector failedSelector:(SEL)selector4;
-(SEL)callbackFailedSelector;
-(SEL)callbackFinishedSelector;
-(id)callbackUserInfo;
-(id)callbackDelegate;
@end

@interface NSDictionary (X_WA_Metadata)
-(int)wa_mediaHeight;
-(int)wa_mediaWidth;
-(id)wa_fileHash;
-(id)wa_fileType;
-(id)wa_metadataHeaderValueForKey:(id)key;
-(id)wa_headerValueForKey:(id)key;
-(id)wa_metadata;
@end

