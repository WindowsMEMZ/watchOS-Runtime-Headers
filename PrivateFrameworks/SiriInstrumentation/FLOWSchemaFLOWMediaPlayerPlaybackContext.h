//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef FLOWSchemaFLOWMediaPlayerPlaybackContext_h
#define FLOWSchemaFLOWMediaPlayerPlaybackContext_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "FLOWSchemaFLOWMediaPlayerPlaylistContext.h"
#include "FLOWSchemaFLOWMediaPlayerRadioStationContext.h"
#include "SISchemaUUID.h"

@class NSData;

@interface FLOWSchemaFLOWMediaPlayerPlaybackContext : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 executionSource; unsigned int x :1 endpoint; unsigned int x :1 contentSource; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) int executionSource;
@property (nonatomic) BOOL hasExecutionSource;
@property (nonatomic) int endpoint;
@property (nonatomic) BOOL hasEndpoint;
@property (nonatomic) int contentSource;
@property (nonatomic) BOOL hasContentSource;
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerRadioStationContext *radioStationContext;
@property (nonatomic) BOOL hasRadioStationContext;
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerPlaylistContext *playlistContext;
@property (nonatomic) BOOL hasPlaylistContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContenttype;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteLinkId;
- (void)deleteExecutionSource;
- (void)deleteEndpoint;
- (void)deleteContentSource;
- (void)deleteRadioStationContext;
- (void)deletePlaylistContext;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* FLOWSchemaFLOWMediaPlayerPlaybackContext_h */
