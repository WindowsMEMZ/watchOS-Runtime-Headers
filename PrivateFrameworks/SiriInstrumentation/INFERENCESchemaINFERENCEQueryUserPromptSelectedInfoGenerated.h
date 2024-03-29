//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef INFERENCESchemaINFERENCEQueryUserPromptSelectedInfoGenerated_h
#define INFERENCESchemaINFERENCEQueryUserPromptSelectedInfoGenerated_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "SISchemaUUID.h"

@class NSData, NSString;

@interface INFERENCESchemaINFERENCEQueryUserPromptSelectedInfoGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originalResolutionContextId;
@property (nonatomic) BOOL hasOriginalResolutionContextId;
@property (retain, nonatomic) SISchemaUUID *queryId;
@property (nonatomic) BOOL hasQueryId;
@property (nonatomic) int disambiguationResolution;
@property (nonatomic) BOOL hasDisambiguationResolution;
@property (nonatomic) int confirmationResolution;
@property (nonatomic) BOOL hasConfirmationResolution;
@property (copy, nonatomic) NSString *anonymizedSelectedEntityIdentifier;
@property (nonatomic) BOOL hasAnonymizedSelectedEntityIdentifier;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichResolutiontype;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteOriginalResolutionContextId;
- (void)deleteQueryId;
- (void)deleteDisambiguationResolution;
- (void)deleteConfirmationResolution;
- (void)deleteAnonymizedSelectedEntityIdentifier;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* INFERENCESchemaINFERENCEQueryUserPromptSelectedInfoGenerated_h */
