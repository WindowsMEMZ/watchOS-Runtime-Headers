//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef ANCSchemaANCClientEvent_h
#define ANCSchemaANCClientEvent_h
@import Foundation;

#include "SISchemaTopLevelUnionType.h"
#include "ANCSchemaANCClientEventMetadata.h"
#include "ANCSchemaANCNotificationReceived.h"
#include "ANCSchemaANCNotificationReceivedTier1.h"
#include "ANCSchemaANCUserResponseEvaluated.h"
#include "SISchemaInnerEventContainer-Protocol.h"
#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface ANCSchemaANCClientEvent : SISchemaTopLevelUnionType<SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ANCSchemaANCClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) ANCSchemaANCNotificationReceived *notificationReceived;
@property (nonatomic) BOOL hasNotificationReceived;
@property (retain, nonatomic) ANCSchemaANCUserResponseEvaluated *userResponseEvaluated;
@property (nonatomic) BOOL hasUserResponseEvaluated;
@property (retain, nonatomic) ANCSchemaANCNotificationReceivedTier1 *notificationReceivedTier1;
@property (nonatomic) BOOL hasNotificationReceivedTier1;
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
- (void)deleteNotificationReceived;
- (void)deleteUserResponseEvaluated;
- (void)deleteNotificationReceivedTier1;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* ANCSchemaANCClientEvent_h */
