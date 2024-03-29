//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef NLXSchemaCDMXPCEventProcessingContext_h
#define NLXSchemaCDMXPCEventProcessingContext_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "NLXSchemaCDMXPCEventProcessingEnded.h"
#include "NLXSchemaCDMXPCEventProcessingFailed.h"
#include "NLXSchemaCDMXPCEventProcessingStarted.h"
#include "SISchemaUUID.h"

@class NSData;

@interface NLXSchemaCDMXPCEventProcessingContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMXPCEventProcessingStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) NLXSchemaCDMXPCEventProcessingEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) NLXSchemaCDMXPCEventProcessingFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteStartedOrChanged;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteContextId;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* NLXSchemaCDMXPCEventProcessingContext_h */
