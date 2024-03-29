//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CTStewieEmergencyTextMessage_h
#define CTStewieEmergencyTextMessage_h
@import Foundation;

#include "CTStewieMessageIncoming-Protocol.h"
#include "CTStewieMessageOutgoing-Protocol.h"

@class NSString;

@interface CTStewieEmergencyTextMessage : NSObject<CTStewieMessageIncoming, CTStewieMessageOutgoing>

@property (nonatomic) long long conversationID;
@property (nonatomic) long long sequenceNum;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long incomingTextNotifyOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)maxLengthInBytesForOutgoingText;
+ (long long)maxLengthInBytesForIncomingText;
+ (long long)maxSequenceNum;
+ (double)estimatedSendTimeForEmergencyText:(id)text;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithConversationIDInternal:(long long)idinternal sequenceNum:(long long)num emergencyText:(id)text maxTextLength:(unsigned long long)length error:(id *)error;
- (id)initWithConversationID:(long long)id sequenceNum:(long long)num emergencyText:(id)text error:(id *)error;
- (id)initIncomingTextMessageWithConversationID:(long long)id sequenceNum:(long long)num emergencyText:(id)text notifyOption:(long long)option error:(id *)error;
- (double)estimatedSendTime;
- (BOOL)isEqualToEmergencyTextMessage:(id)message;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* CTStewieEmergencyTextMessage_h */
