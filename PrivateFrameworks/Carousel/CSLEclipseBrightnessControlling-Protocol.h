//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLEclipseBrightnessControlling_Protocol_h
#define CSLEclipseBrightnessControlling_Protocol_h
@import Foundation;

@protocol CSLEclipseBrightnessControlling <NSObject>
/* instance methods */
- (void)beginBrightnessControlling;
- (void)setBrightnessFactor:(double)factor;
- (void)endBrightnessControlling;
@end

#endif /* CSLEclipseBrightnessControlling_Protocol_h */
