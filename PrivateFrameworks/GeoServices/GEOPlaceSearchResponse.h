//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPlaceSearchResponse_h
#define GEOPlaceSearchResponse_h
@import Foundation;

#include "PBCodable.h"
#include "GEOMapRegion.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPlaceSearchResponse : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_turnaroundTime; unsigned int x :1 has_statusCodeInfo; unsigned int x :1 has_isChainResultSet; unsigned int x :1 read_unknownFields; unsigned int x :1 read_mapRegion; unsigned int x :1 read_namedFeatures; unsigned int x :1 read_nearbySectionHeader; unsigned int x :1 read_placeResults; unsigned int x :1 read_suggestionEntryLists; unsigned int x :1 read_suggestionMetadata; unsigned int x :1 wrote_anyField; } _flags;
}

@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *placeResults;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (retain, nonatomic) NSMutableArray *suggestionEntryLists;
@property (readonly, nonatomic) BOOL hasSuggestionMetadata;
@property (retain, nonatomic) NSData *suggestionMetadata;
@property (retain, nonatomic) NSMutableArray *namedFeatures;
@property (nonatomic) BOOL hasStatusCodeInfo;
@property (nonatomic) int statusCodeInfo;
@property (nonatomic) BOOL hasTurnaroundTime;
@property (nonatomic) double turnaroundTime;
@property (readonly, nonatomic) BOOL hasNearbySectionHeader;
@property (retain, nonatomic) NSString *nearbySectionHeader;
@property (nonatomic) BOOL hasIsChainResultSet;
@property (nonatomic) BOOL isChainResultSet;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (Class)placeResultType;
+ (Class)suggestionEntryListsType;
+ (Class)namedFeaturesType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)statusAsString:(int)string;
- (int)StringAsStatus:(id)status;
- (void)clearPlaceResults;
- (void)addPlaceResult:(id)result;
- (unsigned long long)placeResultsCount;
- (id)placeResultAtIndex:(unsigned long long)index;
- (void)clearSuggestionEntryLists;
- (void)addSuggestionEntryLists:(id)lists;
- (unsigned long long)suggestionEntryListsCount;
- (id)suggestionEntryListsAtIndex:(unsigned long long)index;
- (void)clearNamedFeatures;
- (void)addNamedFeatures:(id)features;
- (unsigned long long)namedFeaturesCount;
- (id)namedFeaturesAtIndex:(unsigned long long)index;
- (id)statusCodeInfoAsString:(int)string;
- (int)StringAsStatusCodeInfo:(id)info;
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
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOPlaceSearchResponse_h */
