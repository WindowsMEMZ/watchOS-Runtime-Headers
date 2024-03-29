//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORPPhotoMetadata_h
#define GEORPPhotoMetadata_h
@import Foundation;

#include "PBCodable.h"
#include "GEOLocation.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader;

@interface GEORPPhotoMetadata : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_size; unsigned int x :1 has_source; unsigned int x :1 read_clientImageUuid; unsigned int x :1 read_deviceLensMake; unsigned int x :1 read_deviceLensModel; unsigned int x :1 read_geotag; unsigned int x :1 read_imageDescription; unsigned int x :1 read_mediaType; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasClientImageUuid;
@property (retain, nonatomic) NSString *clientImageUuid;
@property (readonly, nonatomic) BOOL hasImageDescription;
@property (retain, nonatomic) NSString *imageDescription;
@property (readonly, nonatomic) BOOL hasGeotag;
@property (retain, nonatomic) GEOLocation *geotag;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) unsigned long long size;
@property (readonly, nonatomic) BOOL hasMediaType;
@property (retain, nonatomic) NSString *mediaType;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;
@property (readonly, nonatomic) BOOL hasDeviceLensMake;
@property (retain, nonatomic) NSString *deviceLensMake;
@property (readonly, nonatomic) BOOL hasDeviceLensModel;
@property (retain, nonatomic) NSString *deviceLensModel;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)sourceAsString:(int)string;
- (int)StringAsSource:(id)source;
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

#endif /* GEORPPhotoMetadata_h */
