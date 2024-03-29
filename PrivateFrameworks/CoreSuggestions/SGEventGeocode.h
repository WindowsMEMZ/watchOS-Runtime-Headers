//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef SGEventGeocode_h
#define SGEventGeocode_h
@import Foundation;

@interface SGEventGeocode : NSObject
/* class methods */
+ (id)_serialQueue;
+ (BOOL)locationIsAirport:(id)airport;
+ (BOOL)locationIsGeocoded:(id)geocoded;
+ (BOOL)isGeocodeCandidateLocation:(id)location forEvent:(id)event;
+ (BOOL)isGeocodeCandidate:(id)candidate;
+ (void)geocodeAddress:(id)address withCallback:(id /* block */)callback;
+ (void)geocodeAddressWithCanonicalSearch:(id)search withCallback:(id /* block */)callback;
+ (void)geocodePOIWithName:(id)name ofTypes:(id)types inRegion:(id)region withCallback:(id /* block */)callback;
+ (void)geocodeLocation:(id)location usingMode:(unsigned long long)mode withGeoFilters:(id)filters withCallback:(id /* block */)callback;
+ (id)dateForUTCDate:(id)utcdate withTimeZone:(id)zone;
+ (id)geocodeEvent:(id)event;
+ (void)geocodeEvent:(id)event withCallback:(id /* block */)callback;
+ (id)poiCategoriesFromString:(id)string;
@end

#endif /* SGEventGeocode_h */
