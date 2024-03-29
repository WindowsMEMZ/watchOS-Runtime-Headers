//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDOrientedTilePosition_h
#define GEOPDOrientedTilePosition_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface GEOPDOrientedTilePosition : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_altitude; unsigned int x :1 has_pitch; unsigned int x :1 has_roll; unsigned int x :1 has_x; unsigned int x :1 has_yaw; unsigned int x :1 has_y; } _flags;
}

@property (nonatomic) BOOL hasX;
@property (nonatomic) unsigned int x;
@property (nonatomic) BOOL hasY;
@property (nonatomic) unsigned int y;
@property (nonatomic) BOOL hasAltitude;
@property (nonatomic) int altitude;
@property (nonatomic) BOOL hasYaw;
@property (nonatomic) unsigned int yaw;
@property (nonatomic) BOOL hasPitch;
@property (nonatomic) unsigned int pitch;
@property (nonatomic) BOOL hasRoll;
@property (nonatomic) unsigned int roll;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* GEOPDOrientedTilePosition_h */
