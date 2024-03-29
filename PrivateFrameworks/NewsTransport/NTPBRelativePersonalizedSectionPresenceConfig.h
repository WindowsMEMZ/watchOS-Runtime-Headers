//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBRelativePersonalizedSectionPresenceConfig_h
#define NTPBRelativePersonalizedSectionPresenceConfig_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface NTPBRelativePersonalizedSectionPresenceConfig : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 scalar; } _has;
}

@property (nonatomic) BOOL hasScalar;
@property (nonatomic) double scalar;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBRelativePersonalizedSectionPresenceConfig_h */
