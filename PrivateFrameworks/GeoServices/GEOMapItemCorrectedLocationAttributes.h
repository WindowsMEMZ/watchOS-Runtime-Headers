//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMapItemCorrectedLocationAttributes_h
#define GEOMapItemCorrectedLocationAttributes_h
@import Foundation;

#include "PBCodable.h"
#include "GEOAddress.h"
#include "GEOLatLng.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOMapItemCorrectedLocationAttributes : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_lastUpdateDate; unsigned int x :1 has_hasSubmittedRAP; unsigned int x :1 read_unknownFields; unsigned int x :1 read_correctedAddressSecondaryStreetLine; unsigned int x :1 read_correctedAddress; unsigned int x :1 read_correctedCoordinate; unsigned int x :1 read_customLabel; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasCorrectedCoordinate;
@property (retain, nonatomic) GEOLatLng *correctedCoordinate;
@property (readonly, nonatomic) BOOL hasCorrectedAddress;
@property (retain, nonatomic) GEOAddress *correctedAddress;
@property (readonly, nonatomic) BOOL hasCorrectedAddressSecondaryStreetLine;
@property (retain, nonatomic) NSString *correctedAddressSecondaryStreetLine;
@property (readonly, nonatomic) BOOL hasCustomLabel;
@property (retain, nonatomic) NSString *customLabel;
@property (nonatomic) BOOL hasLastUpdateDate;
@property (nonatomic) double lastUpdateDate;
@property (nonatomic) BOOL hasHasSubmittedRAP;
@property (nonatomic) BOOL hasSubmittedRAP;
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
- (BOOL)hasGreenTeaWithValue:(BOOL)value;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOMapItemCorrectedLocationAttributes_h */
