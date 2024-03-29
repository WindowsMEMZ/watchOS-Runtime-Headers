//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDQuantitySampleAttenuationEngineDelegate_Protocol_h
#define HDQuantitySampleAttenuationEngineDelegate_Protocol_h
@import Foundation;

@protocol HDQuantitySampleAttenuationEngineDelegate 
/* instance methods */
- (long long)loadAttenuationSamples:(struct { double x0; double x1; double x2; BOOL x3; long long x4; } x[1024])samples anchorTime:(double)time errorOut:(id *)out;
@end

#endif /* HDQuantitySampleAttenuationEngineDelegate_Protocol_h */
