//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMHValenceDistributionData_h
#define HKMHValenceDistributionData_h
@import Foundation;

#include "HKRedactedDescription-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface HKMHValenceDistributionData : NSObject<HKRedactedDescription, NSCopying, NSSecureCoding>

@property (readonly, nonatomic) double minimumValence;
@property (readonly, nonatomic) double maximumValence;
@property (readonly, nonatomic) long long sampleCount;
@property (readonly, nonatomic) long long reflectiveInterval;
@property (readonly, copy) NSString *hk_redactedDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithMinimumValence:(double)valence maximumValence:(double)valence sampleCount:(long long)count reflectiveInterval:(long long)interval;
- (void)addValenceDistribution:(id)distribution;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HKMHValenceDistributionData_h */
