//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef PETSchemaPETAggregationKey_h
#define PETSchemaPETAggregationKey_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "PETSchemaPETRawMessage.h"

@class NSData;

@interface PETSchemaPETAggregationKey : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 type; unsigned int x :1 datestamp; unsigned int x :1 bucket; } _has;
}

@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int datestamp;
@property (nonatomic) BOOL hasDatestamp;
@property (nonatomic) double bucket;
@property (nonatomic) BOOL hasBucket;
@property (retain, nonatomic) PETSchemaPETRawMessage *raw_message;
@property (nonatomic) BOOL hasRaw_message;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteType;
- (void)deleteDatestamp;
- (void)deleteBucket;
- (void)deleteRaw_message;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* PETSchemaPETAggregationKey_h */
