//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUINTERNALEMBEDDINGEmbeddingRequest_h
#define SIRINLUINTERNALEMBEDDINGEmbeddingRequest_h
@import Foundation;

#include "PBRequest.h"
#include "NSCopying-Protocol.h"
#include "SIRINLUINTERNALTokenChain.h"

@class NSString;

@interface SIRINLUINTERNALEMBEDDINGEmbeddingRequest : PBRequest<NSCopying>

@property (readonly, nonatomic) BOOL hasText;
@property (retain, nonatomic) NSString *text;
@property (readonly, nonatomic) BOOL hasTokenChain;
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain;

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

#endif /* SIRINLUINTERNALEMBEDDINGEmbeddingRequest_h */
