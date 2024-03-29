//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNArrivalInfo_h
#define MNArrivalInfo_h
@import Foundation;

#include "MNVehicleParkingInfo.h"
#include "NSSecureCoding-Protocol.h"

@class GEOComposedWaypoint;

@interface MNArrivalInfo : NSObject<NSSecureCoding>

@property (readonly, nonatomic) long long arrivalState;
@property (readonly, nonatomic) unsigned long long legIndex;
@property (readonly, nonatomic) GEOComposedWaypoint *destination;
@property (readonly, nonatomic) MNVehicleParkingInfo *vehicleParkingInfo;
@property (readonly, nonatomic) BOOL isInArrivalState;
@property (readonly, nonatomic) BOOL isInParkingState;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* MNArrivalInfo_h */
