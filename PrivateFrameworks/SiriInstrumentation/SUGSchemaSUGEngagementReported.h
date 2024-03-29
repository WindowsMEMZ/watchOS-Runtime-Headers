//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef SUGSchemaSUGEngagementReported_h
#define SUGSchemaSUGEngagementReported_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "SUGSchemaSUGInteraction.h"
#include "SUGSchemaSUGUserStatistics.h"

@class NSData;

@interface SUGSchemaSUGEngagementReported : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 performedTimeSince1970InMs; } _has;
}

@property (nonatomic) unsigned long long performedTimeSince1970InMs;
@property (nonatomic) BOOL hasPerformedTimeSince1970InMs;
@property (retain, nonatomic) SUGSchemaSUGUserStatistics *userStatistics;
@property (nonatomic) BOOL hasUserStatistics;
@property (retain, nonatomic) SUGSchemaSUGInteraction *interaction;
@property (nonatomic) BOOL hasInteraction;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deletePerformedTimeSince1970InMs;
- (void)deleteUserStatistics;
- (void)deleteInteraction;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* SUGSchemaSUGEngagementReported_h */
