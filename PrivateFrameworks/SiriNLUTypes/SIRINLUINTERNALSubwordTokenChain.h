//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUINTERNALSubwordTokenChain_h
#define SIRINLUINTERNALSubwordTokenChain_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface SIRINLUINTERNALSubwordTokenChain : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSMutableArray *subwordTokens;

/* class methods */
+ (Class)subwordTokensType;

/* instance methods */
- (void)clearSubwordTokens;
- (void)addSubwordTokens:(id)tokens;
- (unsigned long long)subwordTokensCount;
- (id)subwordTokensAtIndex:(unsigned long long)index;
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

#endif /* SIRINLUINTERNALSubwordTokenChain_h */
