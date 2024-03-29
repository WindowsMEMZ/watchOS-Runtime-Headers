//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableSpeechTranslationStreamingResponse_h
#define FTMutableSpeechTranslationStreamingResponse_h
@import Foundation;

#include "FTSpeechTranslationStreamingResponse.h"
#include "FTAudioLimitExceeded.h"
#include "FTClientSetupInfo.h"
#include "FTFinalBlazarResponse.h"
#include "FTRecognitionCandidate.h"
#include "FTRecognitionProgress.h"
#include "FTRequestStatsResponse.h"
#include "FTServerEndpointFeatures.h"
#include "FTSpeechTranslationFinalRecognitionResponse.h"
#include "FTSpeechTranslationMtResponse.h"
#include "FTSpeechTranslationPartialRecognitionResponse.h"
#include "FTSpeechTranslationServerEndpointFeatures.h"
#include "FTSpeechTranslationTextToSpeechResponse.h"

@protocol FLTBFBufferAccessor><NSCopying;

@interface FTMutableSpeechTranslationStreamingResponse : FTSpeechTranslationStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTSpeechTranslationPartialRecognitionResponse *contentAsFTSpeechTranslationPartialRecognitionResponse;
@property (copy, nonatomic) FTSpeechTranslationFinalRecognitionResponse *contentAsFTSpeechTranslationFinalRecognitionResponse;
@property (copy, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property (copy, nonatomic) FTSpeechTranslationMtResponse *contentAsFTSpeechTranslationMtResponse;
@property (copy, nonatomic) FTSpeechTranslationTextToSpeechResponse *contentAsFTSpeechTranslationTextToSpeechResponse;
@property (copy, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property (copy, nonatomic) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property (copy, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property (copy, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property (copy, nonatomic) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property (copy, nonatomic) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property (copy, nonatomic) FTSpeechTranslationServerEndpointFeatures *contentAsFTSpeechTranslationServerEndpointFeatures;
@property (copy, @dynamic, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;

/* class methods */
+ (Class)content_mutableClassForType:(long long)type;
+ (long long)content_typeForMutableObject:(id)object;
+ (long long)content_typeForObject:(id)object;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableSpeechTranslationStreamingResponse_h */
