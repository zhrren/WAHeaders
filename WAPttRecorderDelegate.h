/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol WAPttRecorderDelegate <NSObject>
-(void)pttRecorderWasInterrupted:(id)interrupted;
-(void)pttRecorder:(id)recorder didFinishRecordingSuccessfully:(BOOL)successfully filePath:(id)path;
-(void)pttRecorderDidFailToRecord:(id)pttRecorder;
-(void)pttRecorderDidStartRecording:(id)pttRecorder;
-(void)pttRecordWillStartRecording:(id)pttRecord;
@end

