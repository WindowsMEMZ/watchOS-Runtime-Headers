//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOEVInfo_h
#define GEOEVInfo_h
@import Foundation;

#include "PBCodable.h"
#include "GEOChargerPlugsInfo.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOEVInfo : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_criticalBatteryCharge; unsigned int x :1 has_currentBatteryCharge; unsigned int x :1 has_currentBatteryPercentage; unsigned int x :1 has_lastSocUpdateDate; unsigned int x :1 has_lowBatteryCharge; unsigned int x :1 has_maxBatteryCharge; unsigned int x :1 has_maxRange; unsigned int x :1 has_minBatteryCharge; unsigned int x :1 has_isCharging; unsigned int x :1 read_unknownFields; unsigned int x :1 read_chargerPlugsInfo; unsigned int x :1 read_chargingArguments; unsigned int x :1 read_consumptionArguments; unsigned int x :1 read_vehicleArguments; unsigned int x :1 read_vehicleIdentifier; unsigned int x :1 wrote_anyField; } _flags;
}

@property (nonatomic) BOOL hasCurrentBatteryPercentage;
@property (nonatomic) unsigned int currentBatteryPercentage;
@property (nonatomic) BOOL hasMaxRange;
@property (nonatomic) unsigned int maxRange;
@property (readonly, nonatomic) BOOL hasConsumptionArguments;
@property (retain, nonatomic) NSString *consumptionArguments;
@property (readonly, nonatomic) BOOL hasChargingArguments;
@property (retain, nonatomic) NSString *chargingArguments;
@property (nonatomic) BOOL hasCurrentBatteryCharge;
@property (nonatomic) unsigned int currentBatteryCharge;
@property (nonatomic) BOOL hasMaxBatteryCharge;
@property (nonatomic) unsigned int maxBatteryCharge;
@property (nonatomic) BOOL hasIsCharging;
@property (nonatomic) BOOL isCharging;
@property (nonatomic) BOOL hasMinBatteryCharge;
@property (nonatomic) unsigned int minBatteryCharge;
@property (readonly, nonatomic) BOOL hasVehicleIdentifier;
@property (retain, nonatomic) NSString *vehicleIdentifier;
@property (readonly, nonatomic) BOOL hasChargerPlugsInfo;
@property (retain, nonatomic) GEOChargerPlugsInfo *chargerPlugsInfo;
@property (nonatomic) BOOL hasLastSocUpdateDate;
@property (nonatomic) unsigned int lastSocUpdateDate;
@property (nonatomic) BOOL hasLowBatteryCharge;
@property (nonatomic) unsigned int lowBatteryCharge;
@property (nonatomic) BOOL hasCriticalBatteryCharge;
@property (nonatomic) unsigned int criticalBatteryCharge;
@property (readonly, nonatomic) BOOL hasVehicleArguments;
@property (retain, nonatomic) NSString *vehicleArguments;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOEVInfo_h */
