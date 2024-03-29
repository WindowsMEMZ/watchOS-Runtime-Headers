//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef SuddenChangeParameters_h
#define SuddenChangeParameters_h
@import Foundation;

@interface SuddenChangeParameters : NSObject

@property (nonatomic) int margin;
@property (nonatomic) int minSamplesCount;
@property (nonatomic) int minSamplesCountFastBandwidthEstimation;
@property (nonatomic) int minMarginRequired;
@property (nonatomic) double percentage;
@property (nonatomic) double durationThresholdUpward;
@property (nonatomic) double durationThresholdDownward;

@end

#endif /* SuddenChangeParameters_h */
