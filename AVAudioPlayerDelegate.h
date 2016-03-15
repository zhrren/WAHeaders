/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol AVAudioPlayerDelegate <NSObject>
@optional
-(void)audioPlayerEndInterruption:(id)interruption;
-(void)audioPlayerEndInterruption:(id)interruption withFlags:(unsigned)flags;
-(void)audioPlayerEndInterruption:(id)interruption withOptions:(unsigned)options;
-(void)audioPlayerBeginInterruption:(id)interruption;
-(void)audioPlayerDecodeErrorDidOccur:(id)audioPlayerDecodeError error:(id)error;
-(void)audioPlayerDidFinishPlaying:(id)audioPlayer successfully:(BOOL)successfully;
@end

