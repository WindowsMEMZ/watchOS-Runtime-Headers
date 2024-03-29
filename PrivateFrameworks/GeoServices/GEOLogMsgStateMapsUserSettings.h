//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLogMsgStateMapsUserSettings_h
#define GEOLogMsgStateMapsUserSettings_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface GEOLogMsgStateMapsUserSettings : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_locationCadence; unsigned int x :1 has_locationType; unsigned int x :1 has_airQualityShown; unsigned int x :1 has_learnFromAppEnabled; unsigned int x :1 has_notificationsEnabled; unsigned int x :1 has_siriSuggestionsEnabled; unsigned int x :1 has_weatherShown; } _flags;
}

@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) int locationType;
@property (nonatomic) BOOL hasLocationCadence;
@property (nonatomic) int locationCadence;
@property (nonatomic) BOOL hasNotificationsEnabled;
@property (nonatomic) BOOL notificationsEnabled;
@property (nonatomic) BOOL hasSiriSuggestionsEnabled;
@property (nonatomic) BOOL siriSuggestionsEnabled;
@property (nonatomic) BOOL hasLearnFromAppEnabled;
@property (nonatomic) BOOL learnFromAppEnabled;
@property (nonatomic) BOOL hasAirQualityShown;
@property (nonatomic) BOOL airQualityShown;
@property (nonatomic) BOOL hasWeatherShown;
@property (nonatomic) BOOL weatherShown;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)locationTypeAsString:(int)string;
- (int)StringAsLocationType:(id)type;
- (id)locationCadenceAsString:(int)string;
- (int)StringAsLocationCadence:(id)cadence;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* GEOLogMsgStateMapsUserSettings_h */
