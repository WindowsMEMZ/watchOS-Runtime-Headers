//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDAutocompleteFilter_h
#define GEOPDAutocompleteFilter_h
@import Foundation;

#include "PBCodable.h"
#include "GEOPDPoiIconCategoryFilter.h"
#include "NSCopying-Protocol.h"

@class PBDataReader, PBUnknownFields;

@interface GEOPDAutocompleteFilter : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 read_unknownFields; unsigned int x :1 read_placeTypeFilters; unsigned int x :1 read_requestedEntryTypes; unsigned int x :1 read_poiIconCategoryFilter; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) unsigned long long requestedEntryTypesCount;
@property (readonly, nonatomic) int * requestedEntryTypes;
@property (readonly, nonatomic) BOOL hasPoiIconCategoryFilter;
@property (retain, nonatomic) GEOPDPoiIconCategoryFilter *poiIconCategoryFilter;
@property (readonly, nonatomic) unsigned long long placeTypeFiltersCount;
@property (readonly, nonatomic) int * placeTypeFilters;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)dealloc;
- (void)clearRequestedEntryTypes;
- (void)addRequestedEntryType:(int)type;
- (int)requestedEntryTypeAtIndex:(unsigned long long)index;
- (void)setRequestedEntryTypes:(int *)types count:(unsigned long long)count;
- (id)requestedEntryTypesAsString:(int)string;
- (int)StringAsRequestedEntryTypes:(id)types;
- (void)clearPlaceTypeFilters;
- (void)addPlaceTypeFilter:(int)filter;
- (int)placeTypeFilterAtIndex:(unsigned long long)index;
- (void)setPlaceTypeFilters:(int *)filters count:(unsigned long long)count;
- (id)placeTypeFiltersAsString:(int)string;
- (int)StringAsPlaceTypeFilters:(id)filters;
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

#endif /* GEOPDAutocompleteFilter_h */
