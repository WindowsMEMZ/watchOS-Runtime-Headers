//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef FLOWSchemaFLOWServerEvent_h
#define FLOWSchemaFLOWServerEvent_h
@import Foundation;

#include "SISchemaTopLevelUnionType.h"
#include "FLOWSchemaFLOWEventMetadata.h"
#include "FLOWSchemaFLOWStep.h"
#include "SISchemaInnerEventContainer-Protocol.h"
#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface FLOWSchemaFLOWServerEvent : SISchemaTopLevelUnionType<SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) FLOWSchemaFLOWEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) FLOWSchemaFLOWStep *flowStep;
@property (nonatomic) BOOL hasFlowStep;
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
- (void)deleteFlowStep;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* FLOWSchemaFLOWServerEvent_h */
