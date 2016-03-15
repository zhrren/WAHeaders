/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "AVAudioRecorderDelegate.h"
#import </libobjc.A.h>

@class NSString, AVAudioRecorder;
@protocol WAPttRecorderDelegate;

__attribute__((visibility("hidden")))
@interface WAPttRecorder : NSObject <AVAudioRecorderDelegate> {
	opusEncodingInfo _opusInfo;
	BOOL _pttRecordingIsActive;
	id _pttRecAudioActivity;
	double _pttRecordedTime;
	OpaqueAudioQueue* _audioQueueRef;
	AudioQueueBuffer* _audioQueueBufferRefs[3];
	AVAudioRecorder* _pttAudioRecorder;
	id<WAPttRecorderDelegate> _delegate;
	NSString* _pathToAudioRecording;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* pathToAudioRecording;
@property(assign, nonatomic) __weak id<WAPttRecorderDelegate> delegate;
-(void).cxx_destruct;
-(void)audioSessionInterrupted:(id)interrupted;
-(void)audioRecorderEncodeErrorDidOccur:(id)audioRecorderEncodeError error:(id)error;
-(void)handleAudioRecordingDidFinishRecordingSuccessfully:(BOOL)handleAudioRecording audioFilePath:(id)path;
-(void)audioRecorderDidFinishRecording:(id)audioRecorder successfully:(BOOL)successfully;
-(void)audioRecorderEndInterruption:(id)interruption;
-(void)audioRecorderBeginInterruption:(id)interruption;
-(void)handleAudtionSessionInterrupted;
-(void)pushToTalkStartRecording;
-(int)finalOpusCleanup;
-(int)cleanupState;
-(int)writeOggOpusFirstPages;
-(double)inProgressRecordTime;
-(void)handleRecordingFailed;
-(void)deactivateAudioSession;
-(BOOL)isActive;
-(void)cancelRecording;
-(void)stopRecording;
-(double)duration;
-(void)record;
-(void)dealloc;
-(id)init;
@end

