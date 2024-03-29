//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORouteIncident_h
#define GEORouteIncident_h
@import Foundation;

#include "PBCodable.h"
#include "GEOLatLng.h"
#include "GEOPBTransitArtwork.h"
#include "GEORestrictionInfo.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORouteIncident : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_endTime; unsigned int x :1 has_startTime; unsigned int x :1 has_updateTime; unsigned int x :1 has_delaySeconds; unsigned int x :1 has_laneClosureCount; unsigned int x :1 has_laneClosureType; unsigned int x :1 has_significance; unsigned int x :1 has_type; unsigned int x :1 has_userReportsCount; unsigned int x :1 has_endTimeReliable; unsigned int x :1 has_shouldDisplayOnMap; unsigned int x :1 read_unknownFields; unsigned int x :1 read_artwork; unsigned int x :1 read_crossStreet; unsigned int x :1 read_incidentId; unsigned int x :1 read_info; unsigned int x :1 read_position; unsigned int x :1 read_restrictionInfo; unsigned int x :1 read_street; unsigned int x :1 read_userReportIds; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasPosition;
@property (retain, nonatomic) GEOLatLng *position;
@property (readonly, nonatomic) BOOL hasIncidentId;
@property (retain, nonatomic) NSString *incidentId;
@property (readonly, nonatomic) BOOL hasInfo;
@property (retain, nonatomic) NSString *info;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasStreet;
@property (retain, nonatomic) NSString *street;
@property (readonly, nonatomic) BOOL hasCrossStreet;
@property (retain, nonatomic) NSString *crossStreet;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) long long startTime;
@property (nonatomic) BOOL hasEndTime;
@property (nonatomic) long long endTime;
@property (nonatomic) BOOL hasUpdateTime;
@property (nonatomic) long long updateTime;
@property (nonatomic) BOOL hasLaneClosureType;
@property (nonatomic) int laneClosureType;
@property (nonatomic) BOOL hasLaneClosureCount;
@property (nonatomic) unsigned int laneClosureCount;
@property (nonatomic) BOOL hasEndTimeReliable;
@property (nonatomic) BOOL endTimeReliable;
@property (nonatomic) BOOL hasSignificance;
@property (nonatomic) int significance;
@property (readonly, nonatomic) BOOL hasRestrictionInfo;
@property (retain, nonatomic) GEORestrictionInfo *restrictionInfo;
@property (nonatomic) BOOL hasUserReportsCount;
@property (nonatomic) unsigned int userReportsCount;
@property (nonatomic) BOOL hasShouldDisplayOnMap;
@property (nonatomic) BOOL shouldDisplayOnMap;
@property (retain, nonatomic) NSMutableArray *userReportIds;
@property (nonatomic) BOOL hasDelaySeconds;
@property (nonatomic) unsigned int delaySeconds;
@property (readonly, nonatomic) BOOL hasArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (Class)userReportIdType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)typeAsString:(int)string;
- (int)StringAsType:(id)type;
- (id)laneClosureTypeAsString:(int)string;
- (int)StringAsLaneClosureType:(id)type;
- (id)significanceAsString:(int)string;
- (int)StringAsSignificance:(id)significance;
- (void)clearUserReportIds;
- (void)addUserReportId:(id)id;
- (unsigned long long)userReportIdsCount;
- (id)userReportIdAtIndex:(unsigned long long)index;
- (id)description;
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
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEORouteIncident_h */
