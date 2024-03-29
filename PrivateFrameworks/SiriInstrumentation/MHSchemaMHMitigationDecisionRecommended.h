//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef MHSchemaMHMitigationDecisionRecommended_h
#define MHSchemaMHMitigationDecisionRecommended_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface MHSchemaMHMitigationDecisionRecommended : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 isMitigationRecommended; } _has;
}

@property (nonatomic) BOOL isMitigationRecommended;
@property (nonatomic) BOOL hasIsMitigationRecommended;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteIsMitigationRecommended;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* MHSchemaMHMitigationDecisionRecommended_h */
