//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMAccessoryAccessCodeConstraintsFetchResponse_h
#define HMAccessoryAccessCodeConstraintsFetchResponse_h
@import Foundation;

#include "HMAccessCodeConstraints.h"
#include "HMAccessory.h"

@class NSError;

@interface HMAccessoryAccessCodeConstraintsFetchResponse : NSObject

@property (readonly) HMAccessory *accessory;
@property (readonly, copy) HMAccessCodeConstraints *constraints;
@property (retain) NSError *error;

/* class methods */
+ (id)responseWithValue:(id)value home:(id)home;

/* instance methods */
- (id)initWithAccessory:(id)accessory constraints:(id)constraints error:(id)error;
@end

#endif /* HMAccessoryAccessCodeConstraintsFetchResponse_h */
