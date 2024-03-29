//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKTrafficIncidentFeature_h
#define VKTrafficIncidentFeature_h
@import Foundation;

#include "VKTrafficFeature.h"

@class GEOFormattedString, GEOPBTransitArtwork, GEORestrictionInfo, NSArray, NSDate, NSString;
@protocol struct optional<gss::IncidentDataSource> { BOOL x0; union ValueUnion { unsigned char x0[1] unsigned char x1; } x1; }, {optional<gss::IncidentDataSource>="_hasValue"B"_value"(ValueUnion="data"[1C]"type"C)};

@interface VKTrafficIncidentFeature : VKTrafficFeature {
  /* instance variables */
  GEORestrictionInfo *_restrictionInfo;
}

@property (readonly, nonatomic) struct optional<gss::IncidentDataSource> { BOOL x0; union ValueUnion { unsigned char x0[1] unsigned char x1; } x1; } dataSource;
@property (readonly, nonatomic) float elevationMinZoom;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *uniqueString;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL isNotForDisplay;
@property (nonatomic) long long routeRelevance;
@property (nonatomic) BOOL isOnSelectedRoute;
@property (readonly, nonatomic) NSString *street;
@property (readonly, nonatomic) NSString *crossStreet;
@property (readonly, nonatomic) NSString *info;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDate *lastUpdatedDate;
@property (readonly, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) GEOFormattedString *effectiveTimeRange;
@property (readonly, nonatomic) NSArray *restrictionDetails;
@property (readonly, nonatomic) GEOFormattedString *formattedTitle;
@property (readonly, nonatomic) GEOFormattedString *formattedSubtitle;
@property (readonly, nonatomic) long long significance;

/* class methods */
+ (long long)incidentTypeForGeoRouteIncident:(id)incident;
+ (id)stringForIncidentType:(long long)type;
+ (id)stringForRouteRelevance:(long long)relevance;
+ (id)stringForIncidentSignificance:(long long)significance;

/* instance methods */
- (BOOL)hasSameIdentifier:(id)identifier;
- (id)initWithIncidentData:(const void *)data;
- (id)initWithRouteIncident:(id)incident routeOffsetInMeters:(unsigned int)meters routeRelevance:(long long)relevance onRoute:(id)route;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)populateDebugNode:(void *)node;
@end

#endif /* VKTrafficIncidentFeature_h */
