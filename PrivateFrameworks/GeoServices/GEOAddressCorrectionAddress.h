//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOAddressCorrectionAddress_h
#define GEOAddressCorrectionAddress_h
@import Foundation;

#include "PBCodable.h"
#include "GEOLocation.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader;

@interface GEOAddressCorrectionAddress : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_radiusInMeters; unsigned int x :1 read_addressID; unsigned int x :1 read_addressLocation; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasAddressLocation;
@property (retain, nonatomic) GEOLocation *addressLocation;
@property (readonly, nonatomic) BOOL hasAddressID;
@property (retain, nonatomic) NSString *addressID;
@property (nonatomic) BOOL hasRadiusInMeters;
@property (nonatomic) double radiusInMeters;

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
- (void)clearSensitiveFields:(unsigned long long)fields;
- (BOOL)hasGreenTeaWithValue:(BOOL)value;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* GEOAddressCorrectionAddress_h */
