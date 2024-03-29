//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOCelestialRiseTransitSet_h
#define GEOCelestialRiseTransitSet_h
@import Foundation;

@class NSDate;

@interface GEOCelestialRiseTransitSet : NSObject

@property (readonly, nonatomic) double julianDay;
@property (readonly, nonatomic) struct CAARiseTransitSetDetails { BOOL x0; double x1; BOOL x2; BOOL x3; double x4; BOOL x5; double x6; } riseTransitSet;
@property (readonly, nonatomic) BOOL isTransitAboveHorizon;
@property (readonly, nonatomic) NSDate *rise;
@property (readonly, nonatomic) NSDate *transit;
@property (readonly, nonatomic) NSDate *set;

/* instance methods */
- (id)initWithJulianDay:(double)day riseTransitSet:(struct CAARiseTransitSetDetails { BOOL x0; double x1; BOOL x2; BOOL x3; double x4; BOOL x5; double x6; })set;
- (id)_dateFromOffset:(double)offset;
- (int)_numberOfEvents;
- (double)_oldestEventInJulianDay;
- (id)description;
@end

#endif /* GEOCelestialRiseTransitSet_h */
