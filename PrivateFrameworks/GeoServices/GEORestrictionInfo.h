//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORestrictionInfo_h
#define GEORestrictionInfo_h
@import Foundation;

#include "PBCodable.h"
#include "GEOFormattedString.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORestrictionInfo : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 read_unknownFields; unsigned int x :1 read_effectiveTimeRange; unsigned int x :1 read_restrictionDetails; unsigned int x :1 read_subTitleString; unsigned int x :1 read_titleString; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasTitleString;
@property (retain, nonatomic) GEOFormattedString *titleString;
@property (readonly, nonatomic) BOOL hasSubTitleString;
@property (retain, nonatomic) GEOFormattedString *subTitleString;
@property (readonly, nonatomic) BOOL hasEffectiveTimeRange;
@property (retain, nonatomic) GEOFormattedString *effectiveTimeRange;
@property (retain, nonatomic) NSMutableArray *restrictionDetails;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (Class)restrictionDetailsType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)clearRestrictionDetails;
- (void)addRestrictionDetails:(id)details;
- (unsigned long long)restrictionDetailsCount;
- (id)restrictionDetailsAtIndex:(unsigned long long)index;
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

#endif /* GEORestrictionInfo_h */
