/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "GPBMessage.h"

@class NSMutableArray, NSString, GPBInt32Array;

@interface GPBSourceCodeInfo_Location : GPBMessage {
}
@property(readonly, assign, nonatomic) unsigned leadingDetachedCommentsArray_Count;
@property(retain, nonatomic) NSMutableArray* leadingDetachedCommentsArray;
@property(copy, nonatomic) NSString* trailingComments;
@property(assign, nonatomic) BOOL hasTrailingComments;
@property(copy, nonatomic) NSString* leadingComments;
@property(assign, nonatomic) BOOL hasLeadingComments;
@property(readonly, assign, nonatomic) unsigned spanArray_Count;
@property(retain, nonatomic) GPBInt32Array* spanArray;
@property(readonly, assign, nonatomic) unsigned pathArray_Count;
@property(retain, nonatomic) GPBInt32Array* pathArray;
+(id)descriptor;
@end

