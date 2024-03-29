//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableFinalSpeechRecognitionResponse_h
#define FTMutableFinalSpeechRecognitionResponse_h
@import Foundation;

#include "FTFinalSpeechRecognitionResponse.h"
#include "FTAudioAnalytics.h"
#include "FTLatnnMitigatorResult.h"
#include "FTRecognitionResult.h"

@class NSString;

@interface FTMutableFinalSpeechRecognitionResponse : FTFinalSpeechRecognitionResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) FTRecognitionResult *recognition_result;
@property (nonatomic) long long lang_profile_recreate_codes;
@property (copy, nonatomic) FTAudioAnalytics *audio_analytics;
@property (nonatomic) long long watermark_detection;
@property (nonatomic) double watermark_peak_average;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) FTLatnnMitigatorResult *latnn_mitigator_result;
@property (copy, nonatomic) NSString *request_locale;
@property (nonatomic) BOOL has_result;
@property (nonatomic) BOOL speech_profile_used;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableFinalSpeechRecognitionResponse_h */
