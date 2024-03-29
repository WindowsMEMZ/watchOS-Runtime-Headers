//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNNavigationServiceCallback_DidUpdateVehicleParkingInfo_h
#define MNNavigationServiceCallback_DidUpdateVehicleParkingInfo_h
@import Foundation;

#include "MNNavigationServiceCallbackParameters.h"
#include "MNVehicleParkingInfo.h"

@interface MNNavigationServiceCallback_DidUpdateVehicleParkingInfo : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) MNVehicleParkingInfo *vehicleParkingInfo;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (unsigned long long)type;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* MNNavigationServiceCallback_DidUpdateVehicleParkingInfo_h */
