/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol WAChatSessionCellDelegate <NSObject>
- (void)chatSessionCellMarkAsReadOrUnread:(id)fp8;
- (void)chatSessionCellPerformArchiveAction:(id)fp8;
- (void)chatSessionCellShowMoreOptions:(id)fp8;
- (void)chatSessionCellDidEndChangingSideButtons:(id)fp8 buttonsVisible:(BOOL)fp12;
- (void)chatSessionCellDidStartChangingSideButtons:(id)fp8;
@end
