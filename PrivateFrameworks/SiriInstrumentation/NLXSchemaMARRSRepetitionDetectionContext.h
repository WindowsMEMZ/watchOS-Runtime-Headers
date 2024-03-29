//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef NLXSchemaMARRSRepetitionDetectionContext_h
#define NLXSchemaMARRSRepetitionDetectionContext_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "NLXSchemaMARRSRepetitionDetectionEvaluated.h"
#include "NLXSchemaMARRSRepetitionDetectionFailed.h"
#include "NLXSchemaMARRSRepetitionDetectionStarted.h"

@class NSData;

@interface NLXSchemaMARRSRepetitionDetectionContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaMARRSRepetitionDetectionStarted *started;
@property (nonatomic) BOOL hasStarted;
@property (retain, nonatomic) NLXSchemaMARRSRepetitionDetectionEvaluated *evaluated;
@property (nonatomic) BOOL hasEvaluated;
@property (retain, nonatomic) NLXSchemaMARRSRepetitionDetectionFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) NLXSchemaMARRSRepetitionDetectionStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) NLXSchemaMARRSRepetitionDetectionEvaluated *ended;
@property (nonatomic) BOOL hasEnded;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteStarted;
- (void)deleteEvaluated;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (void)deleteEnded;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* NLXSchemaMARRSRepetitionDetectionContext_h */
