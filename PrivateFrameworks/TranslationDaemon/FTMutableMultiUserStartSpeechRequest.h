//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableMultiUserStartSpeechRequest_h
#define FTMutableMultiUserStartSpeechRequest_h
@import Foundation;

#include "FTMultiUserStartSpeechRequest.h"
#include "FTStartSpeechRequest.h"

@class NSArray, NSString;

@interface FTMutableMultiUserStartSpeechRequest : FTMultiUserStartSpeechRequest

@property (copy, nonatomic) FTStartSpeechRequest *start_speech_request;
@property (copy, nonatomic) NSArray *user_parameters;
@property (copy, nonatomic) NSString *primary_speech_id;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableMultiUserStartSpeechRequest_h */
