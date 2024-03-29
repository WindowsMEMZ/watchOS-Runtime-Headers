//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REFrequencyFeatureTransformer_h
#define REFrequencyFeatureTransformer_h
@import Foundation;

#include "REFeatureTransformer.h"

@interface REFrequencyFeatureTransformer : REFeatureTransformer
/* class methods */
+ (id)frequencyTransformWithCount:(unsigned long long)count;
+ (id)frequencyTransformWithCount:(unsigned long long)count minimumValidCount:(long long)count;

/* instance methods */
- (void)increaseCountForFeatureValue:(id)value;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* REFrequencyFeatureTransformer_h */
