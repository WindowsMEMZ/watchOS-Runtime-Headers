//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PDScheduledActivityCriteria_h
#define PDScheduledActivityCriteria_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSString;

@interface PDScheduledActivityCriteria : NSObject<NSSecureCoding, NSCopying> {
  /* instance variables */
  NSString *_priorityKey;
  long long _gracePeriod;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL requireMainsPower;
@property (nonatomic) BOOL requireScreenSleep;
@property (nonatomic) BOOL requireNetworkConnectivity;
@property (nonatomic) BOOL repeating;
@property (nonatomic) double repeatInterval;
@property (copy, nonatomic) NSString *reason;

/* class methods */
+ (id)priorityActivityCriteriaWithStartDate:(id)date;
+ (id)maintenanceActivityCriteriaWithStartDate:(id)date;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithPriorityKey:(id)key gracePeriod:(long long)period startDate:(id)date;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToScheduledAcivityCriteria:(id)criteria;
- (id)xpcActivityCriteria;
- (BOOL)isRepeating;
@end

#endif /* PDScheduledActivityCriteria_h */
