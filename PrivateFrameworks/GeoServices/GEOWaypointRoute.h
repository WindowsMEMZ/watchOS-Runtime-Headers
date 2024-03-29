//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOWaypointRoute_h
#define GEOWaypointRoute_h
@import Foundation;

#include "PBCodable.h"
#include "GEOOutOfMapsAlertsInfo.h"
#include "GEORestrictionZoneInfo.h"
#include "GEORoutePlanningInfo.h"
#include "GEOTraversalTimes.h"
#include "GEOWaypointRouteFeatures.h"
#include "NSCopying-Protocol.h"
#include "_GEOEnrouteNoticesProvider-Protocol.h"

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOWaypointRoute : PBCodable<_GEOEnrouteNoticesProvider, NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_distanceMeters; unsigned int x :1 has_drivingSide; unsigned int x :1 has_identifier; unsigned int x :1 has_transportType; unsigned int x :1 has_type; unsigned int x :1 read_unknownFields; unsigned int x :1 read_initialPromptTypes; unsigned int x :1 read_arrivalParameters; unsigned int x :1 read_feature; unsigned int x :1 read_incidentsOnRouteLegs; unsigned int x :1 read_names; unsigned int x :1 read_outOfMapsAlertsInfo; unsigned int x :1 read_restrictionZoneInfo; unsigned int x :1 read_routeLegs; unsigned int x :1 read_routePlanningInfo; unsigned int x :1 read_trafficBannerTexts; unsigned int x :1 read_trafficCameras; unsigned int x :1 read_trafficSignals; unsigned int x :1 read_traversalTimes; unsigned int x :1 read_tripTimes; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (retain, nonatomic) NSMutableArray *routeLegs;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (nonatomic) BOOL hasDrivingSide;
@property (nonatomic) int drivingSide;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *names;
@property (nonatomic) BOOL hasDistanceMeters;
@property (nonatomic) unsigned int distanceMeters;
@property (readonly, nonatomic) BOOL hasTraversalTimes;
@property (retain, nonatomic) GEOTraversalTimes *traversalTimes;
@property (readonly, nonatomic) BOOL hasTripTimes;
@property (retain, nonatomic) GEOTraversalTimes *tripTimes;
@property (readonly, nonatomic) BOOL hasFeature;
@property (retain, nonatomic) GEOWaypointRouteFeatures *feature;
@property (readonly, nonatomic) BOOL hasRoutePlanningInfo;
@property (retain, nonatomic) GEORoutePlanningInfo *routePlanningInfo;
@property (retain, nonatomic) NSMutableArray *arrivalParameters;
@property (retain, nonatomic) NSMutableArray *trafficSignals;
@property (retain, nonatomic) NSMutableArray *trafficCameras;
@property (retain, nonatomic) NSMutableArray *incidentsOnRouteLegs;
@property (readonly, nonatomic) BOOL hasRestrictionZoneInfo;
@property (retain, nonatomic) GEORestrictionZoneInfo *restrictionZoneInfo;
@property (readonly, nonatomic) BOOL hasOutOfMapsAlertsInfo;
@property (retain, nonatomic) GEOOutOfMapsAlertsInfo *outOfMapsAlertsInfo;
@property (retain, nonatomic) NSMutableArray *trafficBannerTexts;
@property (readonly, nonatomic) unsigned long long initialPromptTypesCount;
@property (readonly, nonatomic) int * initialPromptTypes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (Class)routeLegType;
+ (Class)nameType;
+ (Class)arrivalParametersType;
+ (Class)trafficSignalType;
+ (Class)trafficCameraType;
+ (Class)incidentsOnRouteLegsType;
+ (Class)trafficBannerTextType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)_geoTrafficCameras;
- (id)_geoTrafficSignals;
- (id)init;
- (id)initWithData:(id)data;
- (void)dealloc;
- (void)clearRouteLegs;
- (void)addRouteLeg:(id)leg;
- (unsigned long long)routeLegsCount;
- (id)routeLegAtIndex:(unsigned long long)index;
- (id)transportTypeAsString:(int)string;
- (int)StringAsTransportType:(id)type;
- (id)drivingSideAsString:(int)string;
- (int)StringAsDrivingSide:(id)side;
- (id)typeAsString:(int)string;
- (int)StringAsType:(id)type;
- (void)clearNames;
- (void)addName:(id)name;
- (unsigned long long)namesCount;
- (id)nameAtIndex:(unsigned long long)index;
- (void)clearArrivalParameters;
- (void)addArrivalParameters:(id)parameters;
- (unsigned long long)arrivalParametersCount;
- (id)arrivalParametersAtIndex:(unsigned long long)index;
- (void)clearTrafficSignals;
- (void)addTrafficSignal:(id)signal;
- (unsigned long long)trafficSignalsCount;
- (id)trafficSignalAtIndex:(unsigned long long)index;
- (void)clearTrafficCameras;
- (void)addTrafficCamera:(id)camera;
- (unsigned long long)trafficCamerasCount;
- (id)trafficCameraAtIndex:(unsigned long long)index;
- (void)clearIncidentsOnRouteLegs;
- (void)addIncidentsOnRouteLegs:(id)legs;
- (unsigned long long)incidentsOnRouteLegsCount;
- (id)incidentsOnRouteLegsAtIndex:(unsigned long long)index;
- (void)clearTrafficBannerTexts;
- (void)addTrafficBannerText:(id)text;
- (unsigned long long)trafficBannerTextsCount;
- (id)trafficBannerTextAtIndex:(unsigned long long)index;
- (void)clearInitialPromptTypes;
- (void)addInitialPromptType:(int)type;
- (int)initialPromptTypeAtIndex:(unsigned long long)index;
- (void)setInitialPromptTypes:(int *)types count:(unsigned long long)count;
- (id)initialPromptTypesAsString:(int)string;
- (int)StringAsInitialPromptTypes:(id)types;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)hasGreenTeaWithValue:(BOOL)value;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOWaypointRoute_h */
