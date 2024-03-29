//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLogMsgEventPeriodicSettingsSummary_h
#define GEOLogMsgEventPeriodicSettingsSummary_h
@import Foundation;

#include "PBCodable.h"
#include "GEOLogMsgStateAccount.h"
#include "GEOLogMsgStateDeviceConnection.h"
#include "GEOLogMsgStateDeviceSettings.h"
#include "GEOLogMsgStateMapSettings.h"
#include "GEOLogMsgStateMapUIShown.h"
#include "GEOLogMsgStateMapsFeatures.h"
#include "GEOLogMsgStateMapsUserSettings.h"
#include "GEOLogMsgStateRoutingSettings.h"
#include "NSCopying-Protocol.h"

@class PBDataReader;

@interface GEOLogMsgEventPeriodicSettingsSummary : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_electricVehicleCount; unsigned int x :1 has_favoritesCount; unsigned int x :1 has_licensePlateCount; unsigned int x :1 has_personalCollectionsCount; unsigned int x :1 has_homeFavoriteSet; unsigned int x :1 has_learnFromAppEnabled; unsigned int x :1 has_notificationsEnabled; unsigned int x :1 has_siriSuggestionsEnabled; unsigned int x :1 has_workFavoriteSet; unsigned int x :1 read_account; unsigned int x :1 read_deviceConnection; unsigned int x :1 read_deviceSettings; unsigned int x :1 read_mapSettings; unsigned int x :1 read_mapUiShown; unsigned int x :1 read_mapsFeatures; unsigned int x :1 read_mapsUserSettings; unsigned int x :1 read_routingSettings; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasMapSettings;
@property (retain, nonatomic) GEOLogMsgStateMapSettings *mapSettings;
@property (readonly, nonatomic) BOOL hasMapUiShown;
@property (retain, nonatomic) GEOLogMsgStateMapUIShown *mapUiShown;
@property (nonatomic) BOOL hasNotificationsEnabled;
@property (nonatomic) BOOL notificationsEnabled;
@property (nonatomic) BOOL hasHomeFavoriteSet;
@property (nonatomic) BOOL homeFavoriteSet;
@property (nonatomic) BOOL hasWorkFavoriteSet;
@property (nonatomic) BOOL workFavoriteSet;
@property (nonatomic) BOOL hasFavoritesCount;
@property (nonatomic) unsigned int favoritesCount;
@property (nonatomic) BOOL hasPersonalCollectionsCount;
@property (nonatomic) unsigned int personalCollectionsCount;
@property (nonatomic) BOOL hasElectricVehicleCount;
@property (nonatomic) unsigned int electricVehicleCount;
@property (nonatomic) BOOL hasLicensePlateCount;
@property (nonatomic) unsigned int licensePlateCount;
@property (nonatomic) BOOL hasSiriSuggestionsEnabled;
@property (nonatomic) BOOL siriSuggestionsEnabled;
@property (nonatomic) BOOL hasLearnFromAppEnabled;
@property (nonatomic) BOOL learnFromAppEnabled;
@property (readonly, nonatomic) BOOL hasAccount;
@property (retain, nonatomic) GEOLogMsgStateAccount *account;
@property (readonly, nonatomic) BOOL hasDeviceConnection;
@property (retain, nonatomic) GEOLogMsgStateDeviceConnection *deviceConnection;
@property (readonly, nonatomic) BOOL hasMapsUserSettings;
@property (retain, nonatomic) GEOLogMsgStateMapsUserSettings *mapsUserSettings;
@property (readonly, nonatomic) BOOL hasRoutingSettings;
@property (retain, nonatomic) GEOLogMsgStateRoutingSettings *routingSettings;
@property (readonly, nonatomic) BOOL hasMapsFeatures;
@property (retain, nonatomic) GEOLogMsgStateMapsFeatures *mapsFeatures;
@property (readonly, nonatomic) BOOL hasDeviceSettings;
@property (retain, nonatomic) GEOLogMsgStateDeviceSettings *deviceSettings;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
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

#endif /* GEOLogMsgEventPeriodicSettingsSummary_h */
