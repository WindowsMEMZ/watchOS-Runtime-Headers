//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableTextToSpeechUserProfile_h
#define FTMutableTextToSpeechUserProfile_h
@import Foundation;

#include "FTTextToSpeechUserProfile.h"

@class NSArray;

@interface FTMutableTextToSpeechUserProfile : FTTextToSpeechUserProfile

@property (copy, nonatomic) NSArray *resources;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableTextToSpeechUserProfile_h */
