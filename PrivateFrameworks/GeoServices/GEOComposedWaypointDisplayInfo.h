//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOComposedWaypointDisplayInfo_h
#define GEOComposedWaypointDisplayInfo_h
@import Foundation;

#include "GEOARInfo.h"
#include "GEOComposedRouteEVChargingStationInfo.h"
#include "GEOComposedString.h"
#include "GEOPBTransitArtwork.h"
#include "GEOStyleAttributes.h"
#include "GEOWaypointInfo.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface GEOComposedWaypointDisplayInfo : NSObject<NSSecureCoding>

@property (retain, nonatomic) GEOWaypointInfo *waypointInfo;
@property (readonly, nonatomic) GEOARInfo *arInfo;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) struct { double x0; double x1; } position;
@property (readonly, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) GEOComposedString *waypointCaption;
@property (retain, nonatomic) GEOComposedRouteEVChargingStationInfo *evChargingInfo;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithGeoWaypointInfo:(id)info waypoint:(id)waypoint;
- (void)_initPositionWithGeoWaypointInfo:(id)info waypoint:(id)waypoint;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* GEOComposedWaypointDisplayInfo_h */
