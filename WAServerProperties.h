/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import </libobjc.A.h>


__attribute__((visibility("hidden")))
@interface WAServerProperties : NSObject {
}
+(id)tosValue;
+(BOOL)isEndToEndIdentityVerificationEnabled;
+(BOOL)isEndToEndUsesRegularPush;
+(BOOL)isEndToEndEncAudioEnabled;
+(BOOL)isEndToEndEncImagesEnabled;
+(BOOL)isEndToEndEncBroadcastEnabled;
+(BOOL)isEndToEndEncGroupsEnabled;
+(int)encPlaintextReenableThreshold;
+(BOOL)isEncMspesSet;
+(int)videoMaxEdge;
+(CGSize)maxLandscapeVideoFrameSizeForInAppVideoRecording;
+(BOOL)isWebClientEnabled;
+(BOOL)isWhatsAppIDEnabledForVOIP:(id)voip;
+(BOOL)isPTTOpusRecordingEnabled;
+(BOOL)isVOIPE2EEnabled;
+(BOOL)isVOIPEnabled;
+(int)maxListSize;
+(unsigned)placeSource;
+(BOOL)isLocationSharingEnabled;
+(BOOL)isReadReceiptsEnabledForDate:(id)date;
+(BOOL)isAudioSharingEnabled;
+(float)imageQuality;
+(int)imageMaxEdge;
+(int)imageMaxKBytes;
+(BOOL)isDocumentSharingEnabled;
+(id)supportedDocumentTypes;
+(int)maxDocumentSize;
+(int)maxGroupSubjectLength;
+(int)maxGroupParticipants;
+(XXStruct_pwHToB)maxVideoDuration;
+(unsigned long long)maxMediaSize;
+(BOOL)shouldQueryVersion:(id)version;
+(void)setProperties:(id)properties version:(id)version;
+(void)resetToDefaults;
+(void)reloadServerPropertiesFromPreferences;
+(id)prefBundleKey;
+(void)initialize;
@end

