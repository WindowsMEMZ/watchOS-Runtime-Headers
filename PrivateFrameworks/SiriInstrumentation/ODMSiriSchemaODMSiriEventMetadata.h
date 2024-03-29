//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef ODMSiriSchemaODMSiriEventMetadata_h
#define ODMSiriSchemaODMSiriEventMetadata_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "ODMSiriSchemaODMTrialExperimentIdentifiers.h"
#include "SISchemaUUID.h"

@class NSData, NSString;

@interface ODMSiriSchemaODMSiriEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *odmId;
@property (nonatomic) BOOL hasOdmId;
@property (copy, nonatomic) NSString *pluginVersion;
@property (nonatomic) BOOL hasPluginVersion;
@property (retain, nonatomic) ODMSiriSchemaODMTrialExperimentIdentifiers *trialExperimentIdentifiers;
@property (nonatomic) BOOL hasTrialExperimentIdentifiers;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteOdmId;
- (void)deletePluginVersion;
- (void)deleteTrialExperimentIdentifiers;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* ODMSiriSchemaODMSiriEventMetadata_h */
