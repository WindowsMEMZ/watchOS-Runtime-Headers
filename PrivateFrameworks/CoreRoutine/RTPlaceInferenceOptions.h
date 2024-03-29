//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 895.0.11.0.2
//
#ifndef RTPlaceInferenceOptions_h
#define RTPlaceInferenceOptions_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "RTLocation.h"

@class NSArray, NSDate, NSString;

@interface RTPlaceInferenceOptions : NSObject<NSSecureCoding>

@property (readonly, nonatomic) unsigned long long fidelityPolicy;
@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) NSArray *accessPoints;
@property (readonly, nonatomic) RTLocation *location;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) long long limit;
@property (readonly, nonatomic) BOOL useBackground;
@property (readonly, nonatomic) NSString *clientIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithFidelityPolicy:(unsigned long long)policy locations:(id)locations accessPoints:(id)points distance:(double)distance location:(id)location startDate:(id)date endDate:(id)date limit:(long long)limit useBackground:(BOOL)background clientIdentifier:(id)identifier;
- (id)initWithFidelityPolicy:(unsigned long long)policy locations:(id)locations accessPoints:(id)points;
- (id)initWithFidelityPolicy:(unsigned long long)policy locations:(id)locations accessPoints:(id)points clientIdentifier:(id)identifier;
- (id)initWithinDistance:(double)distance location:(id)location startDate:(id)date endDate:(id)date;
- (id)initWithinDistance:(double)distance location:(id)location startDate:(id)date endDate:(id)date clientIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* RTPlaceInferenceOptions_h */
