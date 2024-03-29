//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSBacklightSceneUpdateBacklightRampResponse_h
#define BLSBacklightSceneUpdateBacklightRampResponse_h
@import Foundation;

#include "BSActionResponse.h"

@interface BLSBacklightSceneUpdateBacklightRampResponse : BSActionResponse

@property (readonly, nonatomic) double rampDuration;

/* instance methods */
- (id)initWithRampDuration:(double)duration;
@end

#endif /* BLSBacklightSceneUpdateBacklightRampResponse_h */
