//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef SISchemaDictationTranscriptionMetadata_h
#define SISchemaDictationTranscriptionMetadata_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "SISchemaDictationAlternativesPresent.h"

@class NSData, NSString;

@interface SISchemaDictationTranscriptionMetadata : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 dictationModel; } _has;
}

@property (nonatomic) int dictationModel;
@property (nonatomic) BOOL hasDictationModel;
@property (copy, nonatomic) NSString *dictationModelVersion;
@property (nonatomic) BOOL hasDictationModelVersion;
@property (retain, nonatomic) SISchemaDictationAlternativesPresent *dictationAlternativesPresent;
@property (nonatomic) BOOL hasDictationAlternativesPresent;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteDictationModel;
- (void)deleteDictationModelVersion;
- (void)deleteDictationAlternativesPresent;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* SISchemaDictationTranscriptionMetadata_h */
