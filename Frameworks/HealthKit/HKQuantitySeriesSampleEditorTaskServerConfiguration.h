//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKQuantitySeriesSampleEditorTaskServerConfiguration_h
#define HKQuantitySeriesSampleEditorTaskServerConfiguration_h
@import Foundation;

#include "HKTaskConfiguration.h"
#include "HKQuantitySample.h"

@interface HKQuantitySeriesSampleEditorTaskServerConfiguration : HKTaskConfiguration

@property (copy, nonatomic) HKQuantitySample *quantitySample;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithQuantitySample:(id)sample;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HKQuantitySeriesSampleEditorTaskServerConfiguration_h */
