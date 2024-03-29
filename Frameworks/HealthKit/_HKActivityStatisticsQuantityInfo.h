//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKActivityStatisticsQuantityInfo_h
#define _HKActivityStatisticsQuantityInfo_h
@import Foundation;

#include "HKQuantity.h"
#include "NSSecureCoding-Protocol.h"
#include "_HKJSONObject-Protocol.h"

@class NSDate;

@interface _HKActivityStatisticsQuantityInfo : NSObject<_HKJSONObject, NSSecureCoding>

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) HKQuantity *quantityValue;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)jsonObject;
- (void)encodeWithCoder:(id)coder;
- (id)initWithStartDate:(id)date endDate:(id)date;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* _HKActivityStatisticsQuantityInfo_h */
