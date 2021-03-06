/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "GPBMessage.h"

@class WAPBMessage_ImageMessage, WAPBMessage_ContactMessage, WAPBMessage_LocationMessage, WAPBMessage_ExtendedTextMessage, NSString, WAPBMessage_DocumentMessage, WAPBMessage_AudioMessage, WAPBMessage_Call, WAPBMessage_SenderKeyDistributionMessage;

@interface WAPBMessage : GPBMessage {
}
@property(retain, nonatomic) WAPBMessage_Call* call;
@property(assign, nonatomic) BOOL hasCall;
@property(retain, nonatomic) WAPBMessage_AudioMessage* audioMessage;
@property(assign, nonatomic) BOOL hasAudioMessage;
@property(retain, nonatomic) WAPBMessage_DocumentMessage* documentMessage;
@property(assign, nonatomic) BOOL hasDocumentMessage;
@property(retain, nonatomic) WAPBMessage_ExtendedTextMessage* extendedTextMessage;
@property(assign, nonatomic) BOOL hasExtendedTextMessage;
@property(retain, nonatomic) WAPBMessage_LocationMessage* locationMessage;
@property(assign, nonatomic) BOOL hasLocationMessage;
@property(retain, nonatomic) WAPBMessage_ContactMessage* contactMessage;
@property(assign, nonatomic) BOOL hasContactMessage;
@property(retain, nonatomic) WAPBMessage_ImageMessage* imageMessage;
@property(assign, nonatomic) BOOL hasImageMessage;
@property(retain, nonatomic) WAPBMessage_SenderKeyDistributionMessage* senderKeyDistributionMessage;
@property(assign, nonatomic) BOOL hasSenderKeyDistributionMessage;
@property(copy, nonatomic) NSString* conversation;
@property(assign, nonatomic) BOOL hasConversation;
+(id)descriptor;
@end

