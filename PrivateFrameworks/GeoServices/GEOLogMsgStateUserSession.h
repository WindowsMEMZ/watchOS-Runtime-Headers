//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLogMsgStateUserSession_h
#define GEOLogMsgStateUserSession_h
@import Foundation;

#include "PBCodable.h"
#include "GEOLocalTime.h"
#include "NSCopying-Protocol.h"

@interface GEOLogMsgStateUserSession : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_deviceLocalSessionId; unsigned int x :1 has_initialDeviceSessionId; unsigned int x :1 has_navSessionId; unsigned int x :1 has_preSyncSessionId; unsigned int x :1 has_sessionId; unsigned int x :1 has_ageOfSessionIdInSeconds; unsigned int x :1 has_lastIcloudSyncDate; unsigned int x :1 has_navSessionRelativeTimestamp; unsigned int x :1 has_relativeTimestamp; unsigned int x :1 has_sessionEpoch; unsigned int x :1 has_sequenceNumber; unsigned int x :1 has_userCohortValue; unsigned int x :1 has_didPreviouslyRotate; } _flags;
}

@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionId;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) BOOL hasRelativeTimestamp;
@property (nonatomic) double relativeTimestamp;
@property (nonatomic) BOOL hasNavSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } navSessionId;
@property (nonatomic) BOOL hasNavSessionRelativeTimestamp;
@property (nonatomic) double navSessionRelativeTimestamp;
@property (readonly, nonatomic) BOOL hasEventTime;
@property (retain, nonatomic) GEOLocalTime *eventTime;
@property (nonatomic) BOOL hasSessionEpoch;
@property (nonatomic) unsigned long long sessionEpoch;
@property (nonatomic) BOOL hasAgeOfSessionIdInSeconds;
@property (nonatomic) double ageOfSessionIdInSeconds;
@property (nonatomic) BOOL hasPreSyncSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } preSyncSessionId;
@property (nonatomic) BOOL hasInitialDeviceSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } initialDeviceSessionId;
@property (nonatomic) BOOL hasLastIcloudSyncDate;
@property (nonatomic) double lastIcloudSyncDate;
@property (nonatomic) BOOL hasDidPreviouslyRotate;
@property (nonatomic) BOOL didPreviouslyRotate;
@property (nonatomic) BOOL hasDeviceLocalSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } deviceLocalSessionId;
@property (nonatomic) BOOL hasUserCohortValue;
@property (nonatomic) unsigned int userCohortValue;

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

#endif /* GEOLogMsgStateUserSession_h */
