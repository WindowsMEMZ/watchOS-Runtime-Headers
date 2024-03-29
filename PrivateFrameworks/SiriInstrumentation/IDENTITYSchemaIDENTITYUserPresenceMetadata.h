//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef IDENTITYSchemaIDENTITYUserPresenceMetadata_h
#define IDENTITYSchemaIDENTITYUserPresenceMetadata_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "SISchemaUUID.h"

@class NSData, NSString;

@interface IDENTITYSchemaIDENTITYUserPresenceMetadata : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 userLocation; unsigned int x :1 userLocationSource; } _has;
}

@property (copy, nonatomic) NSString *loggableMultiUserSharedUserId;
@property (nonatomic) BOOL hasLoggableMultiUserSharedUserId;
@property (nonatomic) int userLocation;
@property (nonatomic) BOOL hasUserLocation;
@property (nonatomic) int userLocationSource;
@property (nonatomic) BOOL hasUserLocationSource;
@property (retain, nonatomic) SISchemaUUID *userEphemeralId;
@property (nonatomic) BOOL hasUserEphemeralId;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteLoggableMultiUserSharedUserId;
- (void)deleteUserLocation;
- (void)deleteUserLocationSource;
- (void)deleteUserEphemeralId;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* IDENTITYSchemaIDENTITYUserPresenceMetadata_h */
