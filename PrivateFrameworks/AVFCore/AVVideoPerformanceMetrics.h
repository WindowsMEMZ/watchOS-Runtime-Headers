//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVVideoPerformanceMetrics_h
#define AVVideoPerformanceMetrics_h
@import Foundation;

#include "AVVideoPerformanceMetricsInternal.h"

@interface AVVideoPerformanceMetrics : NSObject {
  /* instance variables */
  AVVideoPerformanceMetricsInternal *_performanceMetricsInternal;
}

@property (readonly, nonatomic) unsigned long long totalNumberOfVideoFrames;
@property (readonly, nonatomic) unsigned long long numberOfDroppedVideoFrames;
@property (readonly, nonatomic) unsigned long long numberOfCorruptedVideoFrames;
@property (readonly, nonatomic) unsigned long long numberOfDisplayCompositedVideoFrames;
@property (readonly, nonatomic) unsigned long long numberOfNonDisplayCompositedVideoFrames;
@property (readonly, nonatomic) double totalFrameDelay;

/* instance methods */
- (id)init;
- (id)initWithDictionary:(id)dictionary;
- (void)dealloc;
@end

#endif /* AVVideoPerformanceMetrics_h */
