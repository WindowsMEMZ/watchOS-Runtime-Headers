//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef NSDate_GEOCelestial_h
#define NSDate_GEOCelestial_h
@import Foundation;

@interface NSDate (GEOCelestial)
/* class methods */
+ (id)geo_dateWithJulianDay:(double)day;
+ (id)_geo_calendar;

/* instance methods */
- (double)geo_julianDay;
- (double)geo_hoursAndMinutes;
@end

#endif /* NSDate_GEOCelestial_h */
