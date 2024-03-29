//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CLRacingRouteState_h
#define CLRacingRouteState_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface CLRacingRouteState : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double odometer;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double timeSinceStart;
@property (readonly, nonatomic) double offRouteTime;
@property (readonly, nonatomic) double distanceSinceStart;
@property (readonly, nonatomic) double offRouteDistance;
@property (readonly, nonatomic) double averagePace;
@property (readonly, nonatomic) double distanceAlongReference;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithLatitude:(double)latitude longitude:(double)longitude altitude:(double)altitude odometer:(double)odometer timestamp:(double)timestamp timeSinceStart:(double)start offRouteTime:(double)time distanceSinceStart:(double)start offRouteDistance:(double)distance averagePace:(double)pace distanceAlongReference:(double)reference;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* CLRacingRouteState_h */
