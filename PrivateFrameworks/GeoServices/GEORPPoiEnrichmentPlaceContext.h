//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORPPoiEnrichmentPlaceContext_h
#define GEORPPoiEnrichmentPlaceContext_h
@import Foundation;

#include "PBCodable.h"
#include "GEOLatLng.h"
#include "GEOPDMapsIdentifier.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader;

@interface GEORPPoiEnrichmentPlaceContext : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 read_entityNames; unsigned int x :1 read_localizedAddress; unsigned int x :1 read_mapsCategoryId; unsigned int x :1 read_placeCenter; unsigned int x :1 read_placeId; unsigned int x :1 read_walletCategoryId; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasPlaceId;
@property (retain, nonatomic) GEOPDMapsIdentifier *placeId;
@property (retain, nonatomic) NSMutableArray *entityNames;
@property (readonly, nonatomic) BOOL hasMapsCategoryId;
@property (retain, nonatomic) NSString *mapsCategoryId;
@property (readonly, nonatomic) BOOL hasWalletCategoryId;
@property (retain, nonatomic) NSString *walletCategoryId;
@property (retain, nonatomic) NSMutableArray *localizedAddress;
@property (readonly, nonatomic) BOOL hasPlaceCenter;
@property (retain, nonatomic) GEOLatLng *placeCenter;

/* class methods */
+ (id)buildPlaceContextWithPlaceData:(id)data;
+ (Class)entityNameType;
+ (Class)localizedAddressType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (unsigned long long)muid;
- (id)init;
- (id)initWithData:(id)data;
- (void)clearEntityNames;
- (void)addEntityName:(id)name;
- (unsigned long long)entityNamesCount;
- (id)entityNameAtIndex:(unsigned long long)index;
- (void)clearLocalizedAddress;
- (void)addLocalizedAddress:(id)address;
- (unsigned long long)localizedAddressCount;
- (id)localizedAddressAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)hasGreenTeaWithValue:(BOOL)value;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* GEORPPoiEnrichmentPlaceContext_h */
