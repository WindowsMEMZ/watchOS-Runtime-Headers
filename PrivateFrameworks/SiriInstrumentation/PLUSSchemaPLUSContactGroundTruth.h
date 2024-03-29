//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef PLUSSchemaPLUSContactGroundTruth_h
#define PLUSSchemaPLUSContactGroundTruth_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "SISchemaUUID.h"

@class NSData;

@interface PLUSSchemaPLUSContactGroundTruth : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 groundTruthSource; unsigned int x :1 hasSiriResolvedContactForEntity; unsigned int x :1 siriResolvedAndPlusInferredContactComparison; unsigned int x :1 contactSuggestionUsedBySiri; } _has;
}

@property (retain, nonatomic) SISchemaUUID *groundTruthId;
@property (nonatomic) BOOL hasGroundTruthId;
@property (nonatomic) int groundTruthSource;
@property (nonatomic) BOOL hasGroundTruthSource;
@property (nonatomic) BOOL hasSiriResolvedContactForEntity;
@property (nonatomic) BOOL hasHasSiriResolvedContactForEntity;
@property (nonatomic) int siriResolvedAndPlusInferredContactComparison;
@property (nonatomic) BOOL hasSiriResolvedAndPlusInferredContactComparison;
@property (nonatomic) int contactSuggestionUsedBySiri;
@property (nonatomic) BOOL hasContactSuggestionUsedBySiri;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteGroundTruthId;
- (void)deleteGroundTruthSource;
- (void)deleteHasSiriResolvedContactForEntity;
- (void)deleteSiriResolvedAndPlusInferredContactComparison;
- (void)deleteContactSuggestionUsedBySiri;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* PLUSSchemaPLUSContactGroundTruth_h */
