//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 160.0.2.0.0
//
#ifndef CLPPoiTriggerEvent_h
#define CLPPoiTriggerEvent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface CLPPoiTriggerEvent : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 triggerTimestamp; unsigned int x :1 providerIdentifier; unsigned int x :1 triggerSubType; unsigned int x :1 triggerType; } _has;
}

@property (nonatomic) unsigned long long muid;
@property (nonatomic) BOOL hasProviderIdentifier;
@property (nonatomic) int providerIdentifier;
@property (nonatomic) BOOL hasTriggerType;
@property (nonatomic) int triggerType;
@property (nonatomic) BOOL hasTriggerTimestamp;
@property (nonatomic) double triggerTimestamp;
@property (nonatomic) BOOL hasTriggerSubType;
@property (nonatomic) int triggerSubType;

/* instance methods */
- (id)triggerTypeAsString:(int)string;
- (int)StringAsTriggerType:(id)type;
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

#endif /* CLPPoiTriggerEvent_h */
