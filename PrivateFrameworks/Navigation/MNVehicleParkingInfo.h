//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNVehicleParkingInfo_h
#define MNVehicleParkingInfo_h
@import Foundation;

#include "MNDisplayETAInfo.h"
#include "NSSecureCoding-Protocol.h"

@class GEOComposedRoute, NSUUID;

@interface MNVehicleParkingInfo : NSObject<NSSecureCoding> {
  /* instance variables */
  NSUUID *_routeID;
}

@property (nonatomic) long long parkingType;
@property (retain, nonatomic) GEOComposedRoute *remainingWalkingRoute;
@property (retain, nonatomic) MNDisplayETAInfo *walkingRouteDisplayETAInfo;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* MNVehicleParkingInfo_h */
