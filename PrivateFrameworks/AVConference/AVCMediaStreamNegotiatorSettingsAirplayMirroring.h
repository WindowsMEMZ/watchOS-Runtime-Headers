//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef AVCMediaStreamNegotiatorSettingsAirplayMirroring_h
#define AVCMediaStreamNegotiatorSettingsAirplayMirroring_h
@import Foundation;

#include "AVCMediaStreamNegotiatorSettings.h"

@interface AVCMediaStreamNegotiatorSettingsAirplayMirroring : AVCMediaStreamNegotiatorSettings
/* instance methods */
- (id)initWithOptions:(id)options deviceRole:(unsigned char)role error:(id *)error;
- (long long)videoStreamMode;
- (long long)captureSource;
- (int)operatingMode;
- (unsigned long long)maxBandwidth;
- (unsigned char)featureListStringType;
@end

#endif /* AVCMediaStreamNegotiatorSettingsAirplayMirroring_h */
