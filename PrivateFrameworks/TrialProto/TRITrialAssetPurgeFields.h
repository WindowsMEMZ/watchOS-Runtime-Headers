//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRITrialAssetPurgeFields_h
#define TRITrialAssetPurgeFields_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface TRITrialAssetPurgeFields : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 purgeabilityLevel; } _has;
}

@property (nonatomic) BOOL hasPurgeabilityLevel;
@property (nonatomic) int purgeabilityLevel;

/* class methods */
+ (int)assetPurgeFieldsPurgeabilityLevelFromPurgeabilityLevel:(int)level;

/* instance methods */
- (id)purgeabilityLevelAsString:(int)string;
- (int)StringAsPurgeabilityLevel:(id)level;
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

#endif /* TRITrialAssetPurgeFields_h */
