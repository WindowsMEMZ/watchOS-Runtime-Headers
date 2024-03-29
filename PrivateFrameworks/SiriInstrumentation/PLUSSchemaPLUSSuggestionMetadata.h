//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef PLUSSchemaPLUSSuggestionMetadata_h
#define PLUSSchemaPLUSSuggestionMetadata_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface PLUSSchemaPLUSSuggestionMetadata : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 surfacedBeforeStatus; } _has;
}

@property (nonatomic) int surfacedBeforeStatus;
@property (nonatomic) BOOL hasSurfacedBeforeStatus;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteSurfacedBeforeStatus;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* PLUSSchemaPLUSSuggestionMetadata_h */
