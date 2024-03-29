//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef IDENTITYSchemaIDENTITYVoiceScoreCard_h
#define IDENTITYSchemaIDENTITYVoiceScoreCard_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSArray, NSData;

@interface IDENTITYSchemaIDENTITYVoiceScoreCard : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 classification; } _has;
}

@property (copy, nonatomic) NSArray *identityScores;
@property (nonatomic) int classification;
@property (nonatomic) BOOL hasClassification;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)clearIdentityScores;
- (void)deleteIdentityScores;
- (void)addIdentityScores:(id)scores;
- (unsigned long long)identityScoresCount;
- (id)identityScoresAtIndex:(unsigned long long)index;
- (void)deleteClassification;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* IDENTITYSchemaIDENTITYVoiceScoreCard_h */
