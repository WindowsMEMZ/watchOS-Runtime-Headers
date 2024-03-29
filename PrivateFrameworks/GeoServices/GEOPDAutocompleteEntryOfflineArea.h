//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDAutocompleteEntryOfflineArea_h
#define GEOPDAutocompleteEntryOfflineArea_h
@import Foundation;

#include "PBCodable.h"
#include "GEOPDMapsIdentifier.h"
#include "NSCopying-Protocol.h"

@class PBUnknownFields;

@interface GEOPDAutocompleteEntryOfflineArea : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_featureId; unsigned int x :1 has_availableForDownload; } _flags;
}

@property (nonatomic) BOOL hasFeatureId;
@property (nonatomic) unsigned long long featureId;
@property (nonatomic) BOOL hasAvailableForDownload;
@property (nonatomic) BOOL availableForDownload;
@property (readonly, nonatomic) BOOL hasMapsId;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
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

#endif /* GEOPDAutocompleteEntryOfflineArea_h */
