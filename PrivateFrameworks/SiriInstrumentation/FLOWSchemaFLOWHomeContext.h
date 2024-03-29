//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef FLOWSchemaFLOWHomeContext_h
#define FLOWSchemaFLOWHomeContext_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface FLOWSchemaFLOWHomeContext : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 homeCount; unsigned int x :1 homePodCount; unsigned int x :1 appleTvCount; unsigned int x :1 hasCurrentHome; } _has;
}

@property (nonatomic) unsigned int homeCount;
@property (nonatomic) BOOL hasHomeCount;
@property (nonatomic) unsigned int homePodCount;
@property (nonatomic) BOOL hasHomePodCount;
@property (nonatomic) unsigned int appleTvCount;
@property (nonatomic) BOOL hasAppleTvCount;
@property (nonatomic) BOOL hasCurrentHome;
@property (nonatomic) BOOL hasHasCurrentHome;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteHomeCount;
- (void)deleteHomePodCount;
- (void)deleteAppleTvCount;
- (void)deleteHasCurrentHome;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* FLOWSchemaFLOWHomeContext_h */
