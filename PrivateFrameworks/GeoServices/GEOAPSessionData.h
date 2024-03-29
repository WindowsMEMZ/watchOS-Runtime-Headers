//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOAPSessionData_h
#define GEOAPSessionData_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface GEOAPSessionData : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_sessionId; unsigned int x :1 has_createTimeInUse; unsigned int x :1 has_createTime; unsigned int x :1 has_mapsUserStartDate; unsigned int x :1 has_sessionEpoch; unsigned int x :1 has_opaqueAppId; unsigned int x :1 has_sessionHasRotated; } _flags;
}

@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionId;
@property (nonatomic) BOOL hasCreateTime;
@property (nonatomic) double createTime;
@property (nonatomic) BOOL hasSessionEpoch;
@property (nonatomic) unsigned long long sessionEpoch;
@property (nonatomic) BOOL hasMapsUserStartDate;
@property (nonatomic) double mapsUserStartDate;
@property (nonatomic) BOOL hasOpaqueAppId;
@property (nonatomic) unsigned int opaqueAppId;
@property (readonly, nonatomic) BOOL hasOriginHardwareClass;
@property (retain, nonatomic) NSString *originHardwareClass;
@property (nonatomic) BOOL hasCreateTimeInUse;
@property (nonatomic) double createTimeInUse;
@property (nonatomic) BOOL hasSessionHasRotated;
@property (nonatomic) BOOL sessionHasRotated;

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

#endif /* GEOAPSessionData_h */
