//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPlaceFormattedString_h
#define GEOPlaceFormattedString_h
@import Foundation;

#include "PBCodable.h"
#include "GEOFormattedString.h"
#include "NSCopying-Protocol.h"

@class PBDataReader, PBUnknownFields;

@interface GEOPlaceFormattedString : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 read_unknownFields; unsigned int x :1 read_contactHome; unsigned int x :1 read_contactOther; unsigned int x :1 read_contactWork; unsigned int x :1 read_custom; unsigned int x :1 read_home; unsigned int x :1 read_pointOfInterest; unsigned int x :1 read_streetAddress; unsigned int x :1 read_unknown; unsigned int x :1 read_work; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasHome;
@property (retain, nonatomic) GEOFormattedString *home;
@property (readonly, nonatomic) BOOL hasWork;
@property (retain, nonatomic) GEOFormattedString *work;
@property (readonly, nonatomic) BOOL hasContactWork;
@property (retain, nonatomic) GEOFormattedString *contactWork;
@property (readonly, nonatomic) BOOL hasContactHome;
@property (retain, nonatomic) GEOFormattedString *contactHome;
@property (readonly, nonatomic) BOOL hasContactOther;
@property (retain, nonatomic) GEOFormattedString *contactOther;
@property (readonly, nonatomic) BOOL hasPointOfInterest;
@property (retain, nonatomic) GEOFormattedString *pointOfInterest;
@property (readonly, nonatomic) BOOL hasStreetAddress;
@property (retain, nonatomic) GEOFormattedString *streetAddress;
@property (readonly, nonatomic) BOOL hasUnknown;
@property (retain, nonatomic) GEOFormattedString *unknown;
@property (readonly, nonatomic) BOOL hasCustom;
@property (retain, nonatomic) GEOFormattedString *custom;
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

#endif /* GEOPlaceFormattedString_h */
