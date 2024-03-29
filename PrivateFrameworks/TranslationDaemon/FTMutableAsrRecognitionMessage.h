//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableAsrRecognitionMessage_h
#define FTMutableAsrRecognitionMessage_h
@import Foundation;

#include "FTAsrRecognitionMessage.h"
#include "FTAudioLimitExceeded.h"
#include "FTAudioPacket.h"
#include "FTCheckForSpeechRequest.h"
#include "FTCheckForSpeechResponse.h"
#include "FTClientSetupInfo.h"
#include "FTEndPointCandidate.h"
#include "FTEndPointLikelihood.h"
#include "FTFinalSpeechRecognitionResponse.h"
#include "FTFinishAudio.h"
#include "FTMultiUserFinalSpeechRecognitionResponse.h"
#include "FTMultiUserRecognitionCandidate.h"
#include "FTPartialSpeechRecognitionResponse.h"
#include "FTRecognitionCandidate.h"
#include "FTRecognitionProgress.h"
#include "FTRequestStatsResponse.h"
#include "FTResetServerEndpointer.h"
#include "FTServerEndpointFeatures.h"
#include "FTSetAlternateRecognitionSausage.h"
#include "FTSetEndpointerState.h"
#include "FTSetRequestOrigin.h"
#include "FTSetSpeechContext.h"
#include "FTSetSpeechProfile.h"
#include "FTStartSpeechRequest.h"
#include "FTUpdateAudioInfo.h"
#include "FTUpdatedAcousticProfile.h"

@protocol FLTBFBufferAccessor><NSCopying;

@interface FTMutableAsrRecognitionMessage : FTAsrRecognitionMessage

@property (nonatomic) long long session_message_type;
@property (copy, nonatomic) FTStartSpeechRequest *session_messageAsFTStartSpeechRequest;
@property (copy, nonatomic) FTUpdateAudioInfo *session_messageAsFTUpdateAudioInfo;
@property (copy, nonatomic) FTSetRequestOrigin *session_messageAsFTSetRequestOrigin;
@property (copy, nonatomic) FTSetSpeechContext *session_messageAsFTSetSpeechContext;
@property (copy, nonatomic) FTSetSpeechProfile *session_messageAsFTSetSpeechProfile;
@property (copy, nonatomic) FTSetEndpointerState *session_messageAsFTSetEndpointerState;
@property (copy, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property (copy, nonatomic) FTResetServerEndpointer *session_messageAsFTResetServerEndpointer;
@property (copy, nonatomic) FTCheckForSpeechRequest *session_messageAsFTCheckForSpeechRequest;
@property (copy, nonatomic) FTSetAlternateRecognitionSausage *session_messageAsFTSetAlternateRecognitionSausage;
@property (copy, nonatomic) FTFinalSpeechRecognitionResponse *session_messageAsFTFinalSpeechRecognitionResponse;
@property (copy, nonatomic) FTMultiUserFinalSpeechRecognitionResponse *session_messageAsFTMultiUserFinalSpeechRecognitionResponse;
@property (copy, nonatomic) FTPartialSpeechRecognitionResponse *session_messageAsFTPartialSpeechRecognitionResponse;
@property (copy, nonatomic) FTUpdatedAcousticProfile *session_messageAsFTUpdatedAcousticProfile;
@property (copy, nonatomic) FTEndPointLikelihood *session_messageAsFTEndPointLikelihood;
@property (copy, nonatomic) FTEndPointCandidate *session_messageAsFTEndPointCandidate;
@property (copy, nonatomic) FTRecognitionProgress *session_messageAsFTRecognitionProgress;
@property (copy, nonatomic) FTCheckForSpeechResponse *session_messageAsFTCheckForSpeechResponse;
@property (copy, nonatomic) FTRecognitionCandidate *session_messageAsFTRecognitionCandidate;
@property (copy, nonatomic) FTMultiUserRecognitionCandidate *session_messageAsFTMultiUserRecognitionCandidate;
@property (copy, nonatomic) FTRequestStatsResponse *session_messageAsFTRequestStatsResponse;
@property (copy, nonatomic) FTServerEndpointFeatures *session_messageAsFTServerEndpointFeatures;
@property (copy, nonatomic) FTClientSetupInfo *session_messageAsFTClientSetupInfo;
@property (copy, nonatomic) FTAudioLimitExceeded *session_messageAsFTAudioLimitExceeded;
@property (copy, @dynamic, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;

/* class methods */
+ (Class)session_message_mutableClassForType:(long long)type;
+ (long long)session_message_typeForMutableObject:(id)object;
+ (long long)session_message_typeForObject:(id)object;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableAsrRecognitionMessage_h */
