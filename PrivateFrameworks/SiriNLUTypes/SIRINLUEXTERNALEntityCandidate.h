//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUEXTERNALEntityCandidate_h
#define SIRINLUEXTERNALEntityCandidate_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "SIRICOMMONDoubleValue.h"
#include "SIRICOMMONStringValue.h"
#include "SIRINLUEXTERNALRRGroupIdentifier.h"
#include "SIRINLUEXTERNALRRMetadata.h"
#include "SIRINLUEXTERNALUsoGraph.h"

@class NSMutableArray;

@interface SIRINLUEXTERNALEntityCandidate : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasEntity;
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *entity;
@property (readonly, nonatomic) BOOL hasScore;
@property (retain, nonatomic) SIRICOMMONDoubleValue *score;
@property (readonly, nonatomic) BOOL hasEntityId;
@property (retain, nonatomic) SIRICOMMONStringValue *entityId;
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (retain, nonatomic) SIRICOMMONStringValue *appBundleId;
@property (readonly, nonatomic) BOOL hasGroupId;
@property (retain, nonatomic) SIRINLUEXTERNALRRGroupIdentifier *groupId;
@property (retain, nonatomic) NSMutableArray *annotations;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) SIRINLUEXTERNALRRMetadata *metadata;

/* class methods */
+ (Class)annotationsType;

/* instance methods */
- (void)clearAnnotations;
- (void)addAnnotations:(id)annotations;
- (unsigned long long)annotationsCount;
- (id)annotationsAtIndex:(unsigned long long)index;
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

#endif /* SIRINLUEXTERNALEntityCandidate_h */
