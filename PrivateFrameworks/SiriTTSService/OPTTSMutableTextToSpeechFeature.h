//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.19.1.2.1
//
#ifndef OPTTSMutableTextToSpeechFeature_h
#define OPTTSMutableTextToSpeechFeature_h
@import Foundation;

#include "OPTTSTextToSpeechFeature.h"

@class NSArray;

@interface OPTTSMutableTextToSpeechFeature : OPTTSTextToSpeechFeature

@property (copy, nonatomic) NSArray *normalized_text;
@property (copy, nonatomic) NSArray *phoneme_sequence;
@property (copy, nonatomic) NSArray *prompts;
@property (copy, nonatomic) NSArray *replacement;
@property (copy, nonatomic) NSArray *neural_phoneme_sequence;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* OPTTSMutableTextToSpeechFeature_h */
