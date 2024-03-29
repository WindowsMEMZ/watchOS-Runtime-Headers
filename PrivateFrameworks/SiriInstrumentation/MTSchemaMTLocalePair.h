//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef MTSchemaMTLocalePair_h
#define MTSchemaMTLocalePair_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface MTSchemaMTLocalePair : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 sourceLocale; unsigned int x :1 targetLocale; } _has;
}

@property (nonatomic) int sourceLocale;
@property (nonatomic) BOOL hasSourceLocale;
@property (nonatomic) int targetLocale;
@property (nonatomic) BOOL hasTargetLocale;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteSourceLocale;
- (void)deleteTargetLocale;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* MTSchemaMTLocalePair_h */
