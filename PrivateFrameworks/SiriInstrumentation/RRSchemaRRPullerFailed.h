//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef RRSchemaRRPullerFailed_h
#define RRSchemaRRPullerFailed_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface RRSchemaRRPullerFailed : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 name; unsigned int x :1 isTimeout; } _has;
}

@property (nonatomic) int name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL isTimeout;
@property (nonatomic) BOOL hasIsTimeout;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteName;
- (void)deleteIsTimeout;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* RRSchemaRRPullerFailed_h */
