//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef RFSchemaRFClientEvent_h
#define RFSchemaRFClientEvent_h
@import Foundation;

#include "SISchemaTopLevelUnionType.h"
#include "RFSchemaRFClientEventMetadata.h"
#include "RFSchemaRFComponentShown.h"
#include "RFSchemaRFInteractionPerformed.h"
#include "RFSchemaRFPatternExecuted.h"
#include "RFSchemaRFSnippetRenderingContext.h"
#include "SISchemaInnerEventContainer-Protocol.h"
#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface RFSchemaRFClientEvent : SISchemaTopLevelUnionType<SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) RFSchemaRFClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) RFSchemaRFPatternExecuted *patternExecuted;
@property (nonatomic) BOOL hasPatternExecuted;
@property (retain, nonatomic) RFSchemaRFInteractionPerformed *interactionPerformed;
@property (nonatomic) BOOL hasInteractionPerformed;
@property (retain, nonatomic) RFSchemaRFComponentShown *componentShown;
@property (nonatomic) BOOL hasComponentShown;
@property (retain, nonatomic) RFSchemaRFSnippetRenderingContext *snippetRenderingContext;
@property (nonatomic) BOOL hasSnippetRenderingContext;
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
- (void)deletePatternExecuted;
- (void)deleteInteractionPerformed;
- (void)deleteComponentShown;
- (void)deleteSnippetRenderingContext;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* RFSchemaRFClientEvent_h */
