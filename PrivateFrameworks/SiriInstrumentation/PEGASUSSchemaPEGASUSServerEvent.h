//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef PEGASUSSchemaPEGASUSServerEvent_h
#define PEGASUSSchemaPEGASUSServerEvent_h
@import Foundation;

#include "SISchemaTopLevelUnionType.h"
#include "PEGASUSSchemaPEGASUSRequestContext.h"
#include "PEGASUSSchemaPEGASUSRequestEndedTier1.h"
#include "PEGASUSSchemaPEGASUSRewrittenUtterancesReported.h"
#include "PEGASUSSchemaPEGASUSRewrittenUtterancesReportedTier1.h"
#include "PEGASUSSchemaPEGASUSServerEventMetadata.h"
#include "PEGASUSSchemaPEGASUSUtteranceUnderstandingReported.h"
#include "PEGASUSSchemaPEGASUSUtteranceUnderstandingReportedTier1.h"
#include "SISchemaInnerEventContainer-Protocol.h"
#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface PEGASUSSchemaPEGASUSServerEvent : SISchemaTopLevelUnionType<SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSServerEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSRequestContext *pegasusRequestContext;
@property (nonatomic) BOOL hasPegasusRequestContext;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSRewrittenUtterancesReported *pegasusRewrittenUtterancesReported;
@property (nonatomic) BOOL hasPegasusRewrittenUtterancesReported;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSRewrittenUtterancesReportedTier1 *pegasusRewrittenUtterancesReportedTier1;
@property (nonatomic) BOOL hasPegasusRewrittenUtterancesReportedTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSUtteranceUnderstandingReported *pegasusUtteranceUnderstandingReported;
@property (nonatomic) BOOL hasPegasusUtteranceUnderstandingReported;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSUtteranceUnderstandingReportedTier1 *pegasusUtteranceUnderstandingReportedTier1;
@property (nonatomic) BOOL hasPegasusUtteranceUnderstandingReportedTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSRequestEndedTier1 *pegasusRequestEndedTier1;
@property (nonatomic) BOOL hasPegasusRequestEndedTier1;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

/* class methods */
+ (id)getInnerTypeStringByTag:(unsigned long long)tag;
+ (int)joinability;

/* instance methods */
- (int)getAnyEventType;
- (unsigned long long)whichInnerEventType;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (id)getComponentId;
- (int)componentName;
- (id)qualifiedMessageName;
- (void)deleteEventMetadata;
- (void)deletePegasusRequestContext;
- (void)deletePegasusRewrittenUtterancesReported;
- (void)deletePegasusRewrittenUtterancesReportedTier1;
- (void)deletePegasusUtteranceUnderstandingReported;
- (void)deletePegasusUtteranceUnderstandingReportedTier1;
- (void)deletePegasusRequestEndedTier1;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* PEGASUSSchemaPEGASUSServerEvent_h */
