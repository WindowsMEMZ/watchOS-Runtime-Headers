//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TISKSingleMetricSample_h
#define TISKSingleMetricSample_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSMutableArray;

@interface TISKSingleMetricSample : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSMutableArray *samples;

/* class methods */
+ (id)makeMetric;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (void)addSample:(id)sample;
- (double)average;
- (double)variance;
- (double)sum;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (unsigned long long)size;
- (BOOL)isEmpty;
- (void)merge:(id)merge;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)generateDataForSR:(id)sr dropSampleSize:(BOOL)size;
@end

#endif /* TISKSingleMetricSample_h */
