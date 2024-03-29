//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef EKTravelEngineHypothesis_h
#define EKTravelEngineHypothesis_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSString;

@interface EKTravelEngineHypothesis : NSObject<NSCopying, NSMutableCopying, NSSecureCoding>

@property (readonly, nonatomic) int transportType;
@property (readonly, copy, nonatomic) NSDate *conservativeDepartureDate;
@property (readonly, nonatomic) double conservativeTravelTime;
@property (readonly, copy, nonatomic) NSDate *suggestedDepartureDate;
@property (readonly, nonatomic) double estimatedTravelTime;
@property (readonly, copy, nonatomic) NSDate *aggressiveDepartureDate;
@property (readonly, nonatomic) double aggressiveTravelTime;
@property (readonly, copy, nonatomic) NSString *routeName;
@property (readonly, nonatomic) BOOL supportsLiveTraffic;
@property (readonly, nonatomic) unsigned long long currentTrafficDensity;
@property (readonly, copy, nonatomic) NSString *trafficDensityDescription;
@property (readonly, nonatomic) long long travelState;
@property (readonly, copy, nonatomic) NSDate *creationDate;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)syntheticHypothesisWithStartDate:(id)date conservativeTravelTime:(double)time estimatedTravelTime:(double)time aggressiveTravelTime:(double)time;

/* instance methods */
- (id)initWithTransportType:(int)type conservativeDepartureDate:(id)date conservativeTravelTime:(double)time suggestedDepartureDate:(id)date estimatedTravelTime:(double)time aggressiveDepartureDate:(id)date aggressiveTravelTime:(double)time routeName:(id)name supportsLiveTraffic:(BOOL)traffic currentTrafficDensity:(unsigned long long)density trafficDensityDescription:(id)description travelState:(long long)state;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToHypothesis:(id)hypothesis;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* EKTravelEngineHypothesis_h */
