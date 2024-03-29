//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUEXTERNALUsoNode_h
#define SIRINLUEXTERNALUsoNode_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "SIRICOMMONInt64Value.h"
#include "SIRICOMMONStringValue.h"
#include "SIRICOMMONUInt32Value.h"

@class NSMutableArray, NSString;

@interface SIRINLUEXTERNALUsoNode : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 usoElementId; } _has;
}

@property (nonatomic) BOOL hasUsoElementId;
@property (nonatomic) unsigned int usoElementId;
@property (readonly, nonatomic) BOOL hasStringPayload;
@property (retain, nonatomic) SIRICOMMONStringValue *stringPayload;
@property (readonly, nonatomic) BOOL hasIntegerPayload;
@property (retain, nonatomic) SIRICOMMONInt64Value *integerPayload;
@property (readonly, nonatomic) BOOL hasUsoVerbElementId;
@property (retain, nonatomic) SIRICOMMONUInt32Value *usoVerbElementId;
@property (readonly, nonatomic) BOOL hasEntityLabel;
@property (retain, nonatomic) NSString *entityLabel;
@property (readonly, nonatomic) BOOL hasVerbLabel;
@property (retain, nonatomic) NSString *verbLabel;
@property (retain, nonatomic) NSMutableArray *normalizedStringPayloads;

/* class methods */
+ (Class)normalizedStringPayloadsType;

/* instance methods */
- (void)clearNormalizedStringPayloads;
- (void)addNormalizedStringPayloads:(id)payloads;
- (unsigned long long)normalizedStringPayloadsCount;
- (id)normalizedStringPayloadsAtIndex:(unsigned long long)index;
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

#endif /* SIRINLUEXTERNALUsoNode_h */
