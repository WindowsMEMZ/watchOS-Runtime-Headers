//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MSPBookmarkStorage_h
#define MSPBookmarkStorage_h
@import Foundation;

#include "PBCodable.h"
#include "MSPPlaceBookmark.h"
#include "MSPRegionBookmark.h"
#include "MSPRouteBookmark.h"
#include "MSPTransitLineBookmark.h"
#include "NSCopying-Protocol.h"

@class NSString, PBUnknownFields;

@interface MSPBookmarkStorage : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 position; unsigned int x :1 timestamp; unsigned int x :1 type; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasPosition;
@property (nonatomic) double position;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasPlaceBookmark;
@property (retain, nonatomic) MSPPlaceBookmark *placeBookmark;
@property (readonly, nonatomic) BOOL hasRouteBookmark;
@property (retain, nonatomic) MSPRouteBookmark *routeBookmark;
@property (readonly, nonatomic) BOOL hasRegionBookmark;
@property (retain, nonatomic) MSPRegionBookmark *regionBookmark;
@property (readonly, nonatomic) BOOL hasTransitLineBookmark;
@property (retain, nonatomic) MSPTransitLineBookmark *transitLineBookmark;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* instance methods */
- (id)typeAsString:(int)string;
- (int)StringAsType:(id)type;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* MSPBookmarkStorage_h */
