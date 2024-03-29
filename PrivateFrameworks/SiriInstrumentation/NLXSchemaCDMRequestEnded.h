//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef NLXSchemaCDMRequestEnded_h
#define NLXSchemaCDMRequestEnded_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "NLXSchemaCDMLanguageVariantResult.h"

@class NSArray, NSData;

@interface NLXSchemaCDMRequestEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *parses;
@property (retain, nonatomic) NLXSchemaCDMLanguageVariantResult *languageVariantClassifierResult;
@property (nonatomic) BOOL hasLanguageVariantClassifierResult;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)clearParses;
- (void)deleteParses;
- (void)addParses:(id)parses;
- (unsigned long long)parsesCount;
- (id)parsesAtIndex:(unsigned long long)index;
- (void)deleteLanguageVariantClassifierResult;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* NLXSchemaCDMRequestEnded_h */
