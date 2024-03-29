//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef FLOWSchemaFLOWWebAnswerExecution_h
#define FLOWSchemaFLOWWebAnswerExecution_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface FLOWSchemaFLOWWebAnswerExecution : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 answerType; unsigned int x :1 allowListType; unsigned int x :1 fuzzyMatchType; unsigned int x :1 subDomain; unsigned int x :1 quality; unsigned int x :1 answerClass; } _has;
}

@property (nonatomic) unsigned int answerType;
@property (nonatomic) BOOL hasAnswerType;
@property (nonatomic) unsigned int allowListType;
@property (nonatomic) BOOL hasAllowListType;
@property (nonatomic) unsigned int fuzzyMatchType;
@property (nonatomic) BOOL hasFuzzyMatchType;
@property (nonatomic) unsigned int subDomain;
@property (nonatomic) BOOL hasSubDomain;
@property (nonatomic) unsigned int quality;
@property (nonatomic) BOOL hasQuality;
@property (nonatomic) unsigned int answerClass;
@property (nonatomic) BOOL hasAnswerClass;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteAnswerType;
- (void)deleteAllowListType;
- (void)deleteFuzzyMatchType;
- (void)deleteSubDomain;
- (void)deleteQuality;
- (void)deleteAnswerClass;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* FLOWSchemaFLOWWebAnswerExecution_h */
