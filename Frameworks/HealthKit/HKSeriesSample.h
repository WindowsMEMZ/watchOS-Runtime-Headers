//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSeriesSample_h
#define HKSeriesSample_h
@import Foundation;

#include "HKSample.h"

@interface HKSeriesSample : HKSample

@property (nonatomic) BOOL frozen;
@property (readonly) unsigned long long count;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)_setCount:(unsigned long long)count;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })configuration;
- (id)_validateSample;
- (BOOL)_shouldNotifyOnInsert;
- (id)_valueDescription;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)_isFrozen;
- (void)_setFrozen:(BOOL)frozen;
@end

#endif /* HKSeriesSample_h */
