//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUEXTERNALCDMNluRequest_h
#define SIRINLUEXTERNALCDMNluRequest_h
@import Foundation;

#include "PBRequest.h"
#include "NSCopying-Protocol.h"
#include "SIRINLUEXTERNALRequestID.h"
#include "SIRINLUEXTERNALTurnInput.h"

@class NSMutableArray;

@interface SIRINLUEXTERNALCDMNluRequest : PBRequest<NSCopying>

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *requestId;
@property (readonly, nonatomic) BOOL hasCurrentTurnInput;
@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *currentTurnInput;
@property (retain, nonatomic) NSMutableArray *previousTurnInputs;

/* class methods */
+ (Class)previousTurnInputsType;

/* instance methods */
- (void)clearPreviousTurnInputs;
- (void)addPreviousTurnInputs:(id)inputs;
- (unsigned long long)previousTurnInputsCount;
- (id)previousTurnInputsAtIndex:(unsigned long long)index;
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

#endif /* SIRINLUEXTERNALCDMNluRequest_h */
