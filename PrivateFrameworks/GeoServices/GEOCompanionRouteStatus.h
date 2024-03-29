//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOCompanionRouteStatus_h
#define GEOCompanionRouteStatus_h
@import Foundation;

#include "PBCodable.h"
#include "GEOCompanionCompatibility-Protocol.h"
#include "GEOCompanionTransitAlightMessage.h"
#include "GEOLatLng.h"
#include "GEOLocation.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSData, NSString, PBDataReader;

@interface GEOCompanionRouteStatus : PBCodable<GEOCompanionCompatibility, NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_timestamp; unsigned int x :1 has_displayedStepID; unsigned int x :1 has_distanceRemainingOnRoute; unsigned int x :1 has_distanceToManeuver; unsigned int x :1 has_distanceToRoute; unsigned int x :1 has_feedbackType; unsigned int x :1 has_hapticsType; unsigned int x :1 has_remainingTime; unsigned int x :1 has_routeLocationIndex; unsigned int x :1 has_routeLocationOffset; unsigned int x :1 has_stepID; unsigned int x :1 has_guidancePromptsEnabled; unsigned int x :1 has_isConnectedToCarplay; unsigned int x :1 has_isOffline; unsigned int x :1 has_lowGuidanceNavigation; unsigned int x :1 read_selectedRideIndexs; unsigned int x :1 read_alightMessage; unsigned int x :1 read_location; unsigned int x :1 read_routeID; unsigned int x :1 read_routeMatchCoordinate; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isNavigating;
@property (readonly, nonatomic) BOOL isRecalculating;
@property (readonly, nonatomic) BOOL hasEffectiveStepID;
@property (readonly, nonatomic) unsigned int effectiveStepID;
@property (readonly, nonatomic) BOOL hasEffectiveDistanceToManeuver;
@property (readonly, nonatomic) unsigned int effectiveDistanceToManeuver;
@property (readonly, nonatomic) NSArray *selectedRideIndices;
@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic) int feedbackType;
@property (nonatomic) BOOL hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) BOOL hasDistanceToManeuver;
@property (nonatomic) unsigned int distanceToManeuver;
@property (nonatomic) BOOL hasDistanceToRoute;
@property (nonatomic) unsigned int distanceToRoute;
@property (nonatomic) BOOL hasDistanceRemainingOnRoute;
@property (nonatomic) unsigned int distanceRemainingOnRoute;
@property (nonatomic) BOOL hasRemainingTime;
@property (nonatomic) unsigned int remainingTime;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) BOOL hasRouteLocationIndex;
@property (nonatomic) unsigned int routeLocationIndex;
@property (nonatomic) BOOL hasRouteLocationOffset;
@property (nonatomic) float routeLocationOffset;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasRouteMatchCoordinate;
@property (retain, nonatomic) GEOLatLng *routeMatchCoordinate;
@property (readonly, nonatomic) BOOL hasRouteID;
@property (retain, nonatomic) NSData *routeID;
@property (nonatomic) BOOL hasGuidancePromptsEnabled;
@property (nonatomic) BOOL guidancePromptsEnabled;
@property (readonly, nonatomic) unsigned long long selectedRideIndexsCount;
@property (readonly, nonatomic) unsigned int * selectedRideIndexs;
@property (nonatomic) BOOL hasLowGuidanceNavigation;
@property (nonatomic) BOOL lowGuidanceNavigation;
@property (nonatomic) BOOL hasHapticsType;
@property (nonatomic) int hapticsType;
@property (nonatomic) BOOL hasIsConnectedToCarplay;
@property (nonatomic) BOOL isConnectedToCarplay;
@property (readonly, nonatomic) BOOL hasAlightMessage;
@property (retain, nonatomic) GEOCompanionTransitAlightMessage *alightMessage;
@property (nonatomic) BOOL hasIsOffline;
@property (nonatomic) BOOL isOffline;
@property (nonatomic) BOOL hasDisplayedStepID;
@property (nonatomic) unsigned int displayedStepID;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)initWithRouteID:(id)id;
- (id)initWithRoute:(id)route routeID:(id)id;
- (void)updateWithRoute:(id)route routeID:(id)id;
- (void)updateClusteredSectionSelectedRideIndicesFromRoute:(id)route routeID:(id)id;
- (void)_updateClusteredSectionSelectedRideIndicesFromRoute:(id)route;
- (void)updateFeedbackWithNavigationState:(int)state locationUnreliable:(BOOL)unreliable announcementStage:(unsigned long long)stage nextAnnouncementStage:(unsigned long long)stage nextAnnouncementTime:(double)time;
- (BOOL)hasArrivedAtIntermediateWaypointInRoute:(id)route;
- (unsigned int)effectiveStepIDInRoute:(id)route;
- (id)instanceCompatibleWithProtocolVersion:(unsigned long long)version;
- (id)init;
- (id)initWithData:(id)data;
- (void)dealloc;
- (id)feedbackTypeAsString:(int)string;
- (int)StringAsFeedbackType:(id)type;
- (void)clearSelectedRideIndexs;
- (void)addSelectedRideIndex:(unsigned int)index;
- (unsigned int)selectedRideIndexAtIndex:(unsigned long long)index;
- (void)setSelectedRideIndexs:(unsigned int *)indexs count:(unsigned long long)count;
- (id)hapticsTypeAsString:(int)string;
- (int)StringAsHapticsType:(id)type;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)clearSensitiveFields:(unsigned long long)fields;
- (BOOL)hasGreenTeaWithValue:(BOOL)value;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)mergeFrom:(id)from;
@end

#endif /* GEOCompanionRouteStatus_h */
