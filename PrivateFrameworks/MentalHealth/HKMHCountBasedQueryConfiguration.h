//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMHCountBasedQueryConfiguration_h
#define HKMHCountBasedQueryConfiguration_h
@import Foundation;

#include "HKQueryServerConfiguration.h"

@class NSCalendar;

@interface HKMHCountBasedQueryConfiguration : HKQueryServerConfiguration

@property (nonatomic) struct { long long x0; long long x1; } dayIndexRange;
@property (retain, nonatomic) NSCalendar *gregorianCalendar;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HKMHCountBasedQueryConfiguration_h */
