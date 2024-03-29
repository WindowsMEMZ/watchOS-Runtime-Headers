//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.19.1.2.1
//
#ifndef OPTTSMutableTextToSpeechRequestProsodyTransferConfig_h
#define OPTTSMutableTextToSpeechRequestProsodyTransferConfig_h
@import Foundation;

#include "OPTTSTextToSpeechRequestProsodyTransferConfig.h"
#include "OPTTSTextToSpeechSpeechFeatureInputWave.h"
#include "OPTTSTextToSpeechUserVoiceProfile.h"

@class NSString;

@interface OPTTSMutableTextToSpeechRequestProsodyTransferConfig : OPTTSTextToSpeechRequestProsodyTransferConfig

@property (copy, nonatomic) OPTTSTextToSpeechSpeechFeatureInputWave *wave_data;
@property (copy, nonatomic) OPTTSTextToSpeechUserVoiceProfile *user_voice_profile;
@property (copy, nonatomic) NSString *user_voice_profile_url;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* OPTTSMutableTextToSpeechRequestProsodyTransferConfig_h */
