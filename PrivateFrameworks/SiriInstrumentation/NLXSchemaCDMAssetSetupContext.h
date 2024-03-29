//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef NLXSchemaCDMAssetSetupContext_h
#define NLXSchemaCDMAssetSetupContext_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "NLXSchemaCDMAssetSetupEnded.h"
#include "NLXSchemaCDMAssetSetupFailed.h"
#include "NLXSchemaCDMAssetSetupStarted.h"
#include "SISchemaUUID.h"

@class NSData;

@interface NLXSchemaCDMAssetSetupContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (retain, nonatomic) NLXSchemaCDMAssetSetupStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) NLXSchemaCDMAssetSetupEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) NLXSchemaCDMAssetSetupFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteContextId;
- (void)deleteStartedOrChanged;
- (void)deleteEnded;
- (void)deleteFailed;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* NLXSchemaCDMAssetSetupContext_h */
