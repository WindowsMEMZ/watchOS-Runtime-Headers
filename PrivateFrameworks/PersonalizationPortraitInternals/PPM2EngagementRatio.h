//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPM2EngagementRatio_h
#define PPM2EngagementRatio_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface PPM2EngagementRatio : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 domain; unsigned int x :1 engagedCount; unsigned int x :1 evaluatedCount; unsigned int x :1 k; unsigned int x :1 offeredCount; unsigned int x :1 rejectedCount; } _has;
}

@property (nonatomic) BOOL hasK;
@property (nonatomic) unsigned int k;
@property (nonatomic) BOOL hasEvaluatedCount;
@property (nonatomic) unsigned int evaluatedCount;
@property (nonatomic) BOOL hasEngagedCount;
@property (nonatomic) unsigned int engagedCount;
@property (nonatomic) BOOL hasRejectedCount;
@property (nonatomic) unsigned int rejectedCount;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) int domain;
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;
@property (nonatomic) BOOL hasOfferedCount;
@property (nonatomic) unsigned int offeredCount;
@property (readonly, nonatomic) BOOL hasMappingId;
@property (retain, nonatomic) NSString *mappingId;

/* instance methods */
- (id)domainAsString:(int)string;
- (int)StringAsDomain:(id)domain;
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

#endif /* PPM2EngagementRatio_h */
