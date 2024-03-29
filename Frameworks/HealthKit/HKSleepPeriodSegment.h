//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSleepPeriodSegment_h
#define HKSleepPeriodSegment_h
@import Foundation;

#include "HKRedactedDescription-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDateInterval, NSString;

@interface HKSleepPeriodSegment : NSObject<HKRedactedDescription, NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSArray *sampleIntervals;
@property (readonly, nonatomic) long long category;
@property (readonly, nonatomic) BOOL containsAppleSleepTrackingData;
@property (readonly, copy) NSString *hk_redactedDescription;

/* class methods */
+ (id)sleepPeriodSegmentWithDateInterval:(id)interval category:(long long)category;
+ (id)sleepPeriodSegmentWithDateInterval:(id)interval sampleIntervals:(id)intervals category:(long long)category;
+ (id)sleepPeriodSegmentWithDateInterval:(id)interval sampleIntervals:(id)intervals category:(long long)category containsAppleSleepTrackingData:(BOOL)data;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)mergingSleepPeriodSegment:(id)segment;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HKSleepPeriodSegment_h */
