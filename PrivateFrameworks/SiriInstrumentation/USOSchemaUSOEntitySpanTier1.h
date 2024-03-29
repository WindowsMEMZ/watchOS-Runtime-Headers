//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef USOSchemaUSOEntitySpanTier1_h
#define USOSchemaUSOEntitySpanTier1_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSArray, NSData, NSString;

@interface USOSchemaUSOEntitySpanTier1 : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 index; } _has;
}

@property (nonatomic) unsigned int index;
@property (nonatomic) BOOL hasIndex;
@property (copy, nonatomic) NSString *originAppId;
@property (nonatomic) BOOL hasOriginAppId;
@property (copy, nonatomic) NSArray *properties;
@property (copy, nonatomic) NSArray *alternatives;
@property (copy, nonatomic) NSString *originEntityId;
@property (nonatomic) BOOL hasOriginEntityId;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteIndex;
- (void)deleteOriginAppId;
- (void)clearProperties;
- (void)deleteProperties;
- (void)addProperties:(id)properties;
- (unsigned long long)propertiesCount;
- (id)propertiesAtIndex:(unsigned long long)index;
- (void)clearAlternatives;
- (void)deleteAlternatives;
- (void)addAlternatives:(id)alternatives;
- (unsigned long long)alternativesCount;
- (id)alternativesAtIndex:(unsigned long long)index;
- (void)deleteOriginEntityId;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* USOSchemaUSOEntitySpanTier1_h */
