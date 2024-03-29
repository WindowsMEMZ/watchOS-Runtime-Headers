//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBBusTrip_Protocol_h
#define _INPBBusTrip_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBBusTrip-Protocol.h"
#include "_INPBDateTimeRange.h"
#include "_INPBLocationValue.h"

@class NSString;

@protocol _INPBBusTrip <NSObject>

@property (retain, nonatomic) _INPBLocationValue *arrivalBusStopLocation;
@property (readonly, nonatomic) BOOL hasArrivalBusStopLocation;
@property (copy, nonatomic) NSString *arrivalPlatform;
@property (readonly, nonatomic) BOOL hasArrivalPlatform;
@property (copy, nonatomic) NSString *busName;
@property (readonly, nonatomic) BOOL hasBusName;
@property (copy, nonatomic) NSString *busNumber;
@property (readonly, nonatomic) BOOL hasBusNumber;
@property (retain, nonatomic) _INPBLocationValue *departureBusStopLocation;
@property (readonly, nonatomic) BOOL hasDepartureBusStopLocation;
@property (copy, nonatomic) NSString *departurePlatform;
@property (readonly, nonatomic) BOOL hasDeparturePlatform;
@property (copy, nonatomic) NSString *provider;
@property (readonly, nonatomic) BOOL hasProvider;
@property (retain, nonatomic) _INPBDateTimeRange *tripDuration;
@property (readonly, nonatomic) BOOL hasTripDuration;

@end

#endif /* _INPBBusTrip_Protocol_h */
