//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableBlazarMultilingualMessage_h
#define FTMutableBlazarMultilingualMessage_h
@import Foundation;

#include "FTBlazarMultilingualMessage.h"
#include "FTAudioLimitExceeded.h"
#include "FTAudioPacket.h"
#include "FTFinalBlazarResponse.h"
#include "FTFinalSpeechRecognitionResponse.h"
#include "FTFinishAudio.h"
#include "FTLanguageDetected.h"
#include "FTPartialSpeechRecognitionResponse.h"
#include "FTRecognitionCandidate.h"
#include "FTRequestStatsResponse.h"
#include "FTSetRequestOrigin.h"
#include "FTSetSpeechContext.h"
#include "FTSetSpeechProfile.h"
#include "FTStartMultilingualSpeechRequest.h"
#include "FTUpdateAudioInfo.h"

@protocol FLTBFBufferAccessor><NSCopying;

@interface FTMutableBlazarMultilingualMessage : FTBlazarMultilingualMessage

@property (nonatomic) long long session_message_type;
@property (copy, nonatomic) FTStartMultilingualSpeechRequest *session_messageAsFTStartMultilingualSpeechRequest;
@property (copy, nonatomic) FTUpdateAudioInfo *session_messageAsFTUpdateAudioInfo;
@property (copy, nonatomic) FTSetRequestOrigin *session_messageAsFTSetRequestOrigin;
@property (copy, nonatomic) FTSetSpeechContext *session_messageAsFTSetSpeechContext;
@property (copy, nonatomic) FTSetSpeechProfile *session_messageAsFTSetSpeechProfile;
@property (copy, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (copy, nonatomic) FTLanguageDetected *session_messageAsFTLanguageDetected;
@property (copy, nonatomic) FTFinalSpeechRecognitionResponse *session_messageAsFTFinalSpeechRecognitionResponse;
@property (copy, nonatomic) FTPartialSpeechRecognitionResponse *session_messageAsFTPartialSpeechRecognitionResponse;
@property (copy, nonatomic) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property (copy, nonatomic) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property (copy, nonatomic) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property (copy, nonatomic) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property (copy, @dynamic, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;

/* class methods */
+ (Class)session_message_mutableClassForType:(long long)type;
+ (long long)session_message_typeForMutableObject:(id)object;
+ (long long)session_message_typeForObject:(id)object;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableBlazarMultilingualMessage_h */
