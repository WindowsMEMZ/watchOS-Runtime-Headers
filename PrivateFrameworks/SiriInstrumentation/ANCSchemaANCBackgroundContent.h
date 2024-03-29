//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef ANCSchemaANCBackgroundContent_h
#define ANCSchemaANCBackgroundContent_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface ANCSchemaANCBackgroundContent : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 mediaType; unsigned int x :1 isFocusModeEnabled; } _has;
}

@property (nonatomic) int mediaType;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL isFocusModeEnabled;
@property (nonatomic) BOOL hasIsFocusModeEnabled;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteMediaType;
- (void)deleteIsFocusModeEnabled;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* ANCSchemaANCBackgroundContent_h */
