//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOTransitRouteUpdateRequest_h
#define GEOTransitRouteUpdateRequest_h
@import Foundation;

#include "PBRequest.h"
#include "GEOAdditionalEnabledMarkets.h"
#include "GEOClientCapabilities.h"
#include "GEOPDABClientDatasetMetadata.h"
#include "GEOPrivacyMetadata.h"
#include "GEORouteAttributes.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSData, NSMutableArray, NSString, NSUUID, PBDataReader, PBUnknownFields;

@interface GEOTransitRouteUpdateRequest : PBRequest<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_sessionId; unsigned int x :1 has_sessionRelativeTimestamp; unsigned int x :1 read_unknownFields; unsigned int x :1 read_abClientMetadata; unsigned int x :1 read_directionsResponseId; unsigned int x :1 read_originalAdditionalEnabledMarkets; unsigned int x :1 read_originalClientCapabilities; unsigned int x :1 read_originalRouteAttributes; unsigned int x :1 read_originalWaypoints; unsigned int x :1 read_privacyMetadata; unsigned int x :1 read_requestingAppId; unsigned int x :1 read_routeIdentifiers; unsigned int x :1 read_serviceTags; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) NSUUID *clientRouteID;
@property (readonly, nonatomic) NSArray *allClientRouteIDs;
@property (retain, nonatomic) NSMutableArray *routeIdentifiers;
@property (readonly, nonatomic) BOOL hasOriginalClientCapabilities;
@property (retain, nonatomic) GEOClientCapabilities *originalClientCapabilities;
@property (readonly, nonatomic) BOOL hasAbClientMetadata;
@property (retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata;
@property (retain, nonatomic) NSMutableArray *originalWaypoints;
@property (readonly, nonatomic) BOOL hasOriginalRouteAttributes;
@property (retain, nonatomic) GEORouteAttributes *originalRouteAttributes;
@property (readonly, nonatomic) BOOL hasOriginalAdditionalEnabledMarkets;
@property (retain, nonatomic) GEOAdditionalEnabledMarkets *originalAdditionalEnabledMarkets;
@property (readonly, nonatomic) BOOL hasDirectionsResponseId;
@property (retain, nonatomic) NSData *directionsResponseId;
@property (readonly, nonatomic) BOOL hasRequestingAppId;
@property (retain, nonatomic) NSString *requestingAppId;
@property (readonly, nonatomic) BOOL hasPrivacyMetadata;
@property (retain, nonatomic) GEOPrivacyMetadata *privacyMetadata;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionId;
@property (nonatomic) BOOL hasSessionRelativeTimestamp;
@property (nonatomic) double sessionRelativeTimestamp;
@property (retain, nonatomic) NSMutableArray *serviceTags;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (id)transitRouteUpdateRequestWithDirectionsRequest:(id)request directionsResponse:(id)response;
+ (id)transitRouteUpdateRequestWithDirectionsRequest:(id)request directionsResponse:(id)response composedRoutes:(id)routes;
+ (id)mergedTransitRouteUpdateRequests:(id)requests;
+ (id)splitTransitRouteUpdateRequests:(id)requests;
+ (Class)routeIdentifierType;
+ (Class)originalWaypointType;
+ (Class)serviceTagType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)clearRouteIdentifiers;
- (void)addRouteIdentifier:(id)identifier;
- (unsigned long long)routeIdentifiersCount;
- (id)routeIdentifierAtIndex:(unsigned long long)index;
- (void)clearOriginalWaypoints;
- (void)addOriginalWaypoint:(id)waypoint;
- (unsigned long long)originalWaypointsCount;
- (id)originalWaypointAtIndex:(unsigned long long)index;
- (void)clearServiceTags;
- (void)addServiceTag:(id)tag;
- (unsigned long long)serviceTagsCount;
- (id)serviceTagAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)clearSensitiveFields:(unsigned long long)fields;
- (BOOL)hasGreenTeaWithValue:(BOOL)value;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOTransitRouteUpdateRequest_h */
