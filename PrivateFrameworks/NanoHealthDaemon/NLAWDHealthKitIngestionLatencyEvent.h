//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef NLAWDHealthKitIngestionLatencyEvent_h
#define NLAWDHealthKitIngestionLatencyEvent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface NLAWDHealthKitIngestionLatencyEvent : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 endDate; unsigned int x :1 indexInSession; unsigned int x :1 maxDelayUs; unsigned int x :1 meanDelayUs; unsigned int x :1 minDelayUs; unsigned int x :1 sampleCount; unsigned int x :1 startDate; unsigned int x :1 stdDelayUs; unsigned int x :1 timestamp; unsigned int x :1 typeIdentifier; unsigned int x :1 inSession; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasTypeIdentifier;
@property (nonatomic) long long typeIdentifier;
@property (nonatomic) BOOL hasInSession;
@property (nonatomic) BOOL inSession;
@property (nonatomic) BOOL hasMinDelayUs;
@property (nonatomic) long long minDelayUs;
@property (nonatomic) BOOL hasMaxDelayUs;
@property (nonatomic) long long maxDelayUs;
@property (nonatomic) BOOL hasMeanDelayUs;
@property (nonatomic) long long meanDelayUs;
@property (nonatomic) BOOL hasStdDelayUs;
@property (nonatomic) long long stdDelayUs;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) long long startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) long long endDate;
@property (nonatomic) BOOL hasSampleCount;
@property (nonatomic) long long sampleCount;
@property (nonatomic) BOOL hasIndexInSession;
@property (nonatomic) long long indexInSession;

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

#endif /* NLAWDHealthKitIngestionLatencyEvent_h */
