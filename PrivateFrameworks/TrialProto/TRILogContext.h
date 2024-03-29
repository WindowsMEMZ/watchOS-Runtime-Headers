//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRILogContext_h
#define TRILogContext_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "TRILogTime.h"

@class NSString;

@interface TRILogContext : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 processEventIndex; unsigned int x :1 projectId; } _has;
}

@property (nonatomic) BOOL hasProjectId;
@property (nonatomic) unsigned int projectId;
@property (readonly, nonatomic) BOOL hasTrackingId;
@property (retain, nonatomic) NSString *trackingId;
@property (readonly, nonatomic) BOOL hasDeviceLogTime;
@property (retain, nonatomic) TRILogTime *deviceLogTime;
@property (readonly, nonatomic) BOOL hasDeviceTrackingTime;
@property (retain, nonatomic) TRILogTime *deviceTrackingTime;
@property (nonatomic) BOOL hasProcessEventIndex;
@property (nonatomic) unsigned long long processEventIndex;

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

#endif /* TRILogContext_h */
