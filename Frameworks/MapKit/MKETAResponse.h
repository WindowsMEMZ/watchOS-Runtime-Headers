//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKETAResponse_h
#define MKETAResponse_h
@import Foundation;

#include "MKMapItem.h"

@class NSArray, NSDate;

@interface MKETAResponse : NSObject

@property (retain, nonatomic) NSDate *expectedArrivalDate;
@property (retain, nonatomic) NSDate *expectedDepartureDate;
@property (readonly, nonatomic) NSArray *sortedETAs;
@property (readonly, nonatomic) MKMapItem *source;
@property (readonly, nonatomic) MKMapItem *destination;
@property (readonly, nonatomic) double expectedTravelTime;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) unsigned long long transportType;

/* instance methods */
- (id)initWithSource:(id)source destination:(id)destination expectedTravelTime:(double)time distance:(double)distance sortedETAs:(id)etas;
- (unsigned long long)_transportType:(int)type;
- (id)description;
- (id)_sortedETAs;
@end

#endif /* MKETAResponse_h */
