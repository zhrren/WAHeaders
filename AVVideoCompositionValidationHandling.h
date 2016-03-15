/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "NSObject.h"


@protocol AVVideoCompositionValidationHandling <NSObject>
@optional
-(BOOL)videoComposition:(id)composition shouldContinueValidatingAfterFindingInvalidTrackIDInInstruction:(id)instruction layerInstruction:(id)instruction3 asset:(id)asset;
-(BOOL)videoComposition:(id)composition shouldContinueValidatingAfterFindingInvalidTimeRangeInInstruction:(id)instruction;
-(BOOL)videoComposition:(id)composition shouldContinueValidatingAfterFindingEmptyTimeRange:(XXStruct_yD8eWC)range;
-(BOOL)videoComposition:(id)composition shouldContinueValidatingAfterFindingInvalidValueForKey:(id)key;
@end
