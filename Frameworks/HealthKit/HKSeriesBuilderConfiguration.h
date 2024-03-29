//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSeriesBuilderConfiguration_h
#define HKSeriesBuilderConfiguration_h
@import Foundation;

#include "HKTaskConfiguration.h"
#include "HKDevice.h"

@class NSUUID;

@interface HKSeriesBuilderConfiguration : HKTaskConfiguration

@property (readonly, copy, nonatomic) HKDevice *device;
@property (readonly, copy, nonatomic) NSUUID *workoutBuilderID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDevice:(id)device workoutBuilderID:(id)id;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HKSeriesBuilderConfiguration_h */
