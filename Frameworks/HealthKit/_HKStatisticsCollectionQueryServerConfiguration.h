//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKStatisticsCollectionQueryServerConfiguration_h
#define _HKStatisticsCollectionQueryServerConfiguration_h
@import Foundation;

#include "HKQueryServerConfiguration.h"
#include "HKStatisticsCollectionCacheSettings.h"

@class NSDate, NSDateComponents, NSDateInterval;

@interface _HKStatisticsCollectionQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDate *anchorDate;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSDateComponents *intervalComponents;
@property (nonatomic) unsigned long long mergeStrategy;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (copy, nonatomic) HKStatisticsCollectionCacheSettings *cacheSettings;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* _HKStatisticsCollectionQueryServerConfiguration_h */
