//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOQuickETATransitDeparturesInfo_h
#define GEOQuickETATransitDeparturesInfo_h
@import Foundation;

@class NSDate, NSString;

@interface GEOQuickETATransitDeparturesInfo : NSObject

@property (readonly, nonatomic) NSString *direction;
@property (readonly, nonatomic) NSString *headsign;
@property (readonly, nonatomic) BOOL departuresHaveFrequency;
@property (readonly, nonatomic) double departureFrequency;
@property (readonly, nonatomic) NSDate *departureFrequencyValidUntil;

/* instance methods */
- (id)initWithComposedRoute:(id)route;
- (id)description;
- (id)_chooseMostImportantTransitLegInRoute:(id)route;
@end

#endif /* GEOQuickETATransitDeparturesInfo_h */
