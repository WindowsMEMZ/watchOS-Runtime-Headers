//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableTextToSpeechSpeechFeatureModelIdentifier_h
#define FTMutableTextToSpeechSpeechFeatureModelIdentifier_h
@import Foundation;

#include "FTTextToSpeechSpeechFeatureModelIdentifier.h"

@class NSString;

@interface FTMutableTextToSpeechSpeechFeatureModelIdentifier : FTTextToSpeechSpeechFeatureModelIdentifier

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *name;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableTextToSpeechSpeechFeatureModelIdentifier_h */
