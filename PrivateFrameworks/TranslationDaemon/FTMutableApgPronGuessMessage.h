//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableApgPronGuessMessage_h
#define FTMutableApgPronGuessMessage_h
@import Foundation;

#include "FTApgPronGuessMessage.h"
#include "FTAudioPacket.h"
#include "FTCancelRequest.h"
#include "FTFinishAudio.h"
#include "FTPronGuessResponse.h"
#include "FTStartPronGuessRequest.h"

@protocol FLTBFBufferAccessor><NSCopying;

@interface FTMutableApgPronGuessMessage : FTApgPronGuessMessage

@property (nonatomic) long long session_message_type;
@property (copy, nonatomic) FTStartPronGuessRequest *session_messageAsFTStartPronGuessRequest;
@property (copy, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (copy, nonatomic) FTCancelRequest *session_messageAsFTCancelRequest;
@property (copy, nonatomic) FTPronGuessResponse *session_messageAsFTPronGuessResponse;
@property (copy, @dynamic, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;

/* class methods */
+ (Class)session_message_mutableClassForType:(long long)type;
+ (long long)session_message_typeForMutableObject:(id)object;
+ (long long)session_message_typeForObject:(id)object;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableApgPronGuessMessage_h */
