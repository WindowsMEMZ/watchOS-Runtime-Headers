//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFMutableAggregatedCharacteristicReadPolicy_h
#define HFMutableAggregatedCharacteristicReadPolicy_h
@import Foundation;

#include "HFAggregatedCharacteristicReadPolicy.h"

@interface HFMutableAggregatedCharacteristicReadPolicy : HFAggregatedCharacteristicReadPolicy
/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)pushPolicy:(id)policy;
- (id)popPolicy;
- (void)setPolicies:(id)policies;
@end

#endif /* HFMutableAggregatedCharacteristicReadPolicy_h */
