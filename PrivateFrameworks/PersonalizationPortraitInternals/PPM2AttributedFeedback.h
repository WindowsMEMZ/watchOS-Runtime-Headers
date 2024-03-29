//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPM2AttributedFeedback_h
#define PPM2AttributedFeedback_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface PPM2AttributedFeedback : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 algorithm; unsigned int x :1 category; unsigned int x :1 domain; unsigned int x :1 source; unsigned int x :1 type; unsigned int x :1 isRemote; } _has;
}

@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasAlgorithm;
@property (nonatomic) int algorithm;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) int domain;
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;
@property (readonly, nonatomic) BOOL hasClientId;
@property (retain, nonatomic) NSString *clientId;
@property (readonly, nonatomic) BOOL hasMappingId;
@property (retain, nonatomic) NSString *mappingId;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) int category;
@property (readonly, nonatomic) BOOL hasDynamicCategory;
@property (retain, nonatomic) NSString *dynamicCategory;
@property (nonatomic) BOOL hasIsRemote;
@property (nonatomic) BOOL isRemote;

/* class methods */
+ (id)options;

/* instance methods */
- (id)sourceAsString:(int)string;
- (int)StringAsSource:(id)source;
- (id)algorithmAsString:(int)string;
- (int)StringAsAlgorithm:(id)algorithm;
- (id)domainAsString:(int)string;
- (int)StringAsDomain:(id)domain;
- (id)typeAsString:(int)string;
- (int)StringAsType:(id)type;
- (id)categoryAsString:(int)string;
- (int)StringAsCategory:(id)category;
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

#endif /* PPM2AttributedFeedback_h */
