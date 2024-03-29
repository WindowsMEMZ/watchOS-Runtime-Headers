//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef DHTSchemaDHTDeleteTrigger_h
#define DHTSchemaDHTDeleteTrigger_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "SISchemaUUID.h"

@class NSData;

@interface DHTSchemaDHTDeleteTrigger : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 deleteTimestampMs; unsigned int x :1 deletionTriggerEvent; } _has;
}

@property (retain, nonatomic) SISchemaUUID *id;
@property (nonatomic) BOOL hasId;
@property (retain, nonatomic) SISchemaUUID *speechId;
@property (nonatomic) BOOL hasSpeechId;
@property (retain, nonatomic) SISchemaUUID *siriDeviceId;
@property (nonatomic) BOOL hasSiriDeviceId;
@property (nonatomic) unsigned long long deleteTimestampMs;
@property (nonatomic) BOOL hasDeleteTimestampMs;
@property (nonatomic) int deletionTriggerEvent;
@property (nonatomic) BOOL hasDeletionTriggerEvent;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteId;
- (void)deleteSpeechId;
- (void)deleteSiriDeviceId;
- (void)deleteDeleteTimestampMs;
- (void)deleteDeletionTriggerEvent;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* DHTSchemaDHTDeleteTrigger_h */
