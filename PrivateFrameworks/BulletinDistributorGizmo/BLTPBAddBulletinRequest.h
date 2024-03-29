//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTPBAddBulletinRequest_h
#define BLTPBAddBulletinRequest_h
@import Foundation;

#include "PBRequest.h"
#include "BLTPBBulletin.h"
#include "NSCopying-Protocol.h"

@interface BLTPBAddBulletinRequest : PBRequest<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 date; unsigned int x :1 updateType; unsigned int x :1 shouldPlayLightsAndSirens; unsigned int x :1 trafficRestricted; } _has;
}

@property (readonly, nonatomic) BOOL hasBulletin;
@property (retain, nonatomic) BLTPBBulletin *bulletin;
@property (nonatomic) BOOL hasShouldPlayLightsAndSirens;
@property (nonatomic) BOOL shouldPlayLightsAndSirens;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (nonatomic) BOOL hasUpdateType;
@property (nonatomic) unsigned int updateType;
@property (nonatomic) BOOL hasTrafficRestricted;
@property (nonatomic) BOOL trafficRestricted;

/* instance methods */
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

#endif /* BLTPBAddBulletinRequest_h */
