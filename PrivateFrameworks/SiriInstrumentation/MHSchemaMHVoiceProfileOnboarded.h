//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef MHSchemaMHVoiceProfileOnboarded_h
#define MHSchemaMHVoiceProfileOnboarded_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSArray, NSData;

@interface MHSchemaMHVoiceProfileOnboarded : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 voiceProfilePitchInHz; } _has;
}

@property (nonatomic) unsigned int voiceProfilePitchInHz;
@property (nonatomic) BOOL hasVoiceProfilePitchInHz;
@property (copy, nonatomic) NSArray *confusionScoresForEnrollmentUtterances;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteVoiceProfilePitchInHz;
- (void)clearConfusionScoresForEnrollmentUtterance;
- (void)deleteConfusionScoresForEnrollmentUtterance;
- (void)addConfusionScoresForEnrollmentUtterance:(id)utterance;
- (unsigned long long)confusionScoresForEnrollmentUtteranceCount;
- (id)confusionScoresForEnrollmentUtteranceAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* MHSchemaMHVoiceProfileOnboarded_h */
