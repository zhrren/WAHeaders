/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol WAPttRecorderDelegate <NSObject>
- (void)pttRecorderWasInterrupted:(id)fp8;
- (void)pttRecorder:(id)fp8 didFinishRecordingSuccessfully:(BOOL)fp12 filePath:(id)fp16;
- (void)pttRecorderDidFailToRecord:(id)fp8;
- (void)pttRecorderDidStartRecording:(id)fp8;
- (void)pttRecordWillStartRecording:(id)fp8;
@end

