//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef PEGASUSSchemaPEGASUSIntentArg_h
#define PEGASUSSchemaPEGASUSIntentArg_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "PEGASUSSchemaPEGASUSEntityInfo.h"

@class NSData, NSString;

@interface PEGASUSSchemaPEGASUSIntentArg : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL hasKey;
@property (copy, nonatomic) NSString *attributeType;
@property (nonatomic) BOOL hasAttributeType;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSEntityInfo *entity;
@property (nonatomic) BOOL hasEntity;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteKey;
- (void)deleteAttributeType;
- (void)deleteEntity;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* PEGASUSSchemaPEGASUSIntentArg_h */
