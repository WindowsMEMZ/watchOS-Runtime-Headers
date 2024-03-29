//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLLocationOfInterestCache_h
#define PLLocationOfInterestCache_h
@import Foundation;

#include "PLLocationOfInterestVisit.h"

@class NSDate, NSMutableDictionary, NSMutableSet;

@interface PLLocationOfInterestCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *visitsCache;
@property (retain, nonatomic) NSMutableSet *allLocationsOfInterest;
@property (retain, nonatomic) NSMutableSet *homeLocations;
@property (retain, nonatomic) NSMutableSet *workLocations;
@property (readonly) unsigned long long numberOfLocationsOfInterest;
@property (readonly) unsigned long long numberOfLocationsOfInterestVisits;
@property (readonly) unsigned long long numberOfLocationsOfInterestTransitions;
@property (readonly) NSDate *earliestVisitStartDate;
@property (readonly) PLLocationOfInterestVisit *lastLocationOfInterestVisit;

/* instance methods */
- (id)init;
- (void)addLocationOfInterest:(id)interest;
- (id)locationsOfInterestOfType:(long long)type;
- (id)closestLocationOfInterestVisitToLocation:(id)location withinDistance:(double)distance inDateInterval:(id)interval;
- (id)locationOfInterestAtLocation:(id)location;
- (id)locationsOfInterestVisitsAtLocation:(id)location inDateInterval:(id)interval;
- (id)locationsOfInterestVisitsInDateInterval:(id)interval;
@end

#endif /* PLLocationOfInterestCache_h */
