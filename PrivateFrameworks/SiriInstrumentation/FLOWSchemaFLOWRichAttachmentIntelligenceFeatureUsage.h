//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef FLOWSchemaFLOWRichAttachmentIntelligenceFeatureUsage_h
#define FLOWSchemaFLOWRichAttachmentIntelligenceFeatureUsage_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSArray, NSData;

@interface FLOWSchemaFLOWRichAttachmentIntelligenceFeatureUsage : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *isReadingIntelligenceAttempteds;
@property (copy, nonatomic) NSArray *isReadingIntelligenceUseds;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)clearIsReadingIntelligenceAttempted;
- (void)deleteIsReadingIntelligenceAttempted;
- (void)addIsReadingIntelligenceAttempted:(BOOL)attempted;
- (unsigned long long)isReadingIntelligenceAttemptedCount;
- (BOOL)isReadingIntelligenceAttemptedAtIndex:(unsigned long long)index;
- (void)clearIsReadingIntelligenceUsed;
- (void)deleteIsReadingIntelligenceUsed;
- (void)addIsReadingIntelligenceUsed:(BOOL)used;
- (unsigned long long)isReadingIntelligenceUsedCount;
- (BOOL)isReadingIntelligenceUsedAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* FLOWSchemaFLOWRichAttachmentIntelligenceFeatureUsage_h */
