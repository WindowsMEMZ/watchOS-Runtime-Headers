//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 707.0.47.0.0
//
#ifndef SRLegacyHeartRateShim_h
#define SRLegacyHeartRateShim_h
@import Foundation;

#include "CMHeartRateData.h"

@interface SRLegacyHeartRateShim : CMHeartRateData
/* instance methods */
- (id)initWithBinarySampleRepresentation:(id)representation metadata:(id)metadata timestamp:(double)timestamp;
@end

#endif /* SRLegacyHeartRateShim_h */
