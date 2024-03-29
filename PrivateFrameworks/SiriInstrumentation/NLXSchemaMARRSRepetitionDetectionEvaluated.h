//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef NLXSchemaMARRSRepetitionDetectionEvaluated_h
#define NLXSchemaMARRSRepetitionDetectionEvaluated_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface NLXSchemaMARRSRepetitionDetectionEvaluated : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 repetitionType; unsigned int x :1 ruleType; unsigned int x :1 noRepetitionConfidence; unsigned int x :1 fullRepetitionConfidence; unsigned int x :1 partialRepetitionConfidence; } _has;
}

@property (nonatomic) int repetitionType;
@property (nonatomic) BOOL hasRepetitionType;
@property (nonatomic) int ruleType;
@property (nonatomic) BOOL hasRuleType;
@property (nonatomic) float noRepetitionConfidence;
@property (nonatomic) BOOL hasNoRepetitionConfidence;
@property (nonatomic) float fullRepetitionConfidence;
@property (nonatomic) BOOL hasFullRepetitionConfidence;
@property (nonatomic) float partialRepetitionConfidence;
@property (nonatomic) BOOL hasPartialRepetitionConfidence;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteRepetitionType;
- (void)deleteRuleType;
- (void)deleteNoRepetitionConfidence;
- (void)deleteFullRepetitionConfidence;
- (void)deletePartialRepetitionConfidence;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* NLXSchemaMARRSRepetitionDetectionEvaluated_h */
