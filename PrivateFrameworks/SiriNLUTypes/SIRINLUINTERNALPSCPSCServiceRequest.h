//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUINTERNALPSCPSCServiceRequest_h
#define SIRINLUINTERNALPSCPSCServiceRequest_h
@import Foundation;

#include "PBRequest.h"
#include "NSCopying-Protocol.h"
#include "SIRINLUEXTERNALLegacyNLContext.h"
#include "SIRINLUEXTERNALRequestID.h"
#include "SIRINLUEXTERNALTurnInput.h"
#include "SIRINLUEXTERNALUUID.h"
#include "SIRINLUINTERNALNLV4_PARSERTokenisation.h"
#include "SIRINLUINTERNALNLv4EmbeddingTensor.h"

@class NSMutableArray;

@interface SIRINLUINTERNALPSCPSCServiceRequest : PBRequest<NSCopying>

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (readonly, nonatomic) BOOL hasTokenisedUtterance;
@property (retain, nonatomic) SIRINLUINTERNALNLV4_PARSERTokenisation *tokenisedUtterance;
@property (readonly, nonatomic) BOOL hasEmbeddings;
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddings;
@property (retain, nonatomic) NSMutableArray *matchingSpans;
@property (readonly, nonatomic) BOOL hasTurnInput;
@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *turnInput;
@property (readonly, nonatomic) BOOL hasLegacyContext;
@property (retain, nonatomic) SIRINLUEXTERNALLegacyNLContext *legacyContext;
@property (readonly, nonatomic) BOOL hasNluRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *nluRequestId;

/* class methods */
+ (Class)matchingSpansType;

/* instance methods */
- (void)clearMatchingSpans;
- (void)addMatchingSpans:(id)spans;
- (unsigned long long)matchingSpansCount;
- (id)matchingSpansAtIndex:(unsigned long long)index;
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

#endif /* SIRINLUINTERNALPSCPSCServiceRequest_h */
