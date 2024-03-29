//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKActivitySummaryQueryServerConfiguration_h
#define HKActivitySummaryQueryServerConfiguration_h
@import Foundation;

#include "HKQueryServerConfiguration.h"

@interface HKActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration

@property (nonatomic) BOOL shouldIncludeActivitySummaryPrivateProperties;
@property (nonatomic) BOOL shouldIncludeActivitySummaryStatistics;
@property (nonatomic) BOOL orderByDateAscending;
@property (nonatomic) unsigned long long limit;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HKActivitySummaryQueryServerConfiguration_h */
