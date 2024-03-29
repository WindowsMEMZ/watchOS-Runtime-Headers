//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef POMMESSchemaPOMMESPegasusSearchQuery_h
#define POMMESSchemaPOMMESPegasusSearchQuery_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "POMMESSchemaPOMMESPegasusSearchQueryAmpUserState.h"

@class NSArray, NSData;

@interface POMMESSchemaPOMMESPegasusSearchQuery : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 hasRewrittenUtterances; unsigned int x :1 hasAudioQueueStateInfo; } _has;
}

@property (nonatomic) BOOL hasRewrittenUtterances;
@property (nonatomic) BOOL hasHasRewrittenUtterances;
@property (copy, nonatomic) NSArray *userSpans;
@property (nonatomic) BOOL hasAudioQueueStateInfo;
@property (nonatomic) BOOL hasHasAudioQueueStateInfo;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusSearchQueryAmpUserState *ampUserState;
@property (nonatomic) BOOL hasAmpUserState;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteHasRewrittenUtterances;
- (void)clearUserSpan;
- (void)deleteUserSpan;
- (void)addUserSpan:(id)span;
- (unsigned long long)userSpanCount;
- (id)userSpanAtIndex:(unsigned long long)index;
- (void)deleteHasAudioQueueStateInfo;
- (void)deleteAmpUserState;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* POMMESSchemaPOMMESPegasusSearchQuery_h */
