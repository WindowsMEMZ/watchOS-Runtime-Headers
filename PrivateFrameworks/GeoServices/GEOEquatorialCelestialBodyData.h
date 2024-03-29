//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOEquatorialCelestialBodyData_h
#define GEOEquatorialCelestialBodyData_h
@import Foundation;

@interface GEOEquatorialCelestialBodyData : NSObject

@property (readonly, nonatomic) double rightAscension;
@property (readonly, nonatomic) double declination;

/* instance methods */
- (id)initWithDate:(id)date body:(long long)body;
- (id)initWithDate:(id)date body:(long long)body useHighPrecision:(BOOL)precision;
- (id)initWithJulianDay:(double)day body:(long long)body;
- (id)initWithJulianDay:(double)day body:(long long)body useHighPrecision:(BOOL)precision;
@end

#endif /* GEOEquatorialCelestialBodyData_h */
