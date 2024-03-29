//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUINTERNALCONTEXTUPDATEReformedTurnInputBundle_h
#define SIRINLUINTERNALCONTEXTUPDATEReformedTurnInputBundle_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "SIRINLUEXTERNALTurnInput.h"

@class NSMutableArray;

@interface SIRINLUINTERNALCONTEXTUPDATEReformedTurnInputBundle : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 type; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasCurrentTurn;
@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *currentTurn;
@property (retain, nonatomic) NSMutableArray *previousTurns;

/* class methods */
+ (Class)previousTurnsType;

/* instance methods */
- (id)typeAsString:(int)string;
- (int)StringAsType:(id)type;
- (void)clearPreviousTurns;
- (void)addPreviousTurns:(id)turns;
- (unsigned long long)previousTurnsCount;
- (id)previousTurnsAtIndex:(unsigned long long)index;
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

#endif /* SIRINLUINTERNALCONTEXTUPDATEReformedTurnInputBundle_h */
