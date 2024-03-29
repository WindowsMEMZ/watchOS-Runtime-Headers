//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDMerchantBrandLookupResponse_h
#define GEOPDMerchantBrandLookupResponse_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDMerchantBrandLookupResponse : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_muid; unsigned int x :1 has_relatedGlobalBrandMuid; unsigned int x :1 has_isPrimaryVariant; unsigned int x :1 read_unknownFields; unsigned int x :1 read_abstractOfBrandMuids; unsigned int x :1 read_childBrandMuids; unsigned int x :1 read_variantBrandMuids; unsigned int x :1 read_geoHashs; unsigned int x :1 read_scope; unsigned int x :1 wrote_anyField; } _flags;
}

@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) BOOL hasScope;
@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSMutableArray *geoHashs;
@property (readonly, nonatomic) unsigned long long childBrandMuidsCount;
@property (readonly, nonatomic) unsigned long long * childBrandMuids;
@property (readonly, nonatomic) unsigned long long variantBrandMuidsCount;
@property (readonly, nonatomic) unsigned long long * variantBrandMuids;
@property (nonatomic) BOOL hasIsPrimaryVariant;
@property (nonatomic) BOOL isPrimaryVariant;
@property (nonatomic) BOOL hasRelatedGlobalBrandMuid;
@property (nonatomic) unsigned long long relatedGlobalBrandMuid;
@property (readonly, nonatomic) unsigned long long abstractOfBrandMuidsCount;
@property (readonly, nonatomic) unsigned long long * abstractOfBrandMuids;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (Class)geoHashType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)dealloc;
- (void)clearGeoHashs;
- (void)addGeoHash:(id)hash;
- (unsigned long long)geoHashsCount;
- (id)geoHashAtIndex:(unsigned long long)index;
- (void)clearChildBrandMuids;
- (void)addChildBrandMuid:(unsigned long long)muid;
- (unsigned long long)childBrandMuidAtIndex:(unsigned long long)index;
- (void)setChildBrandMuids:(unsigned long long *)muids count:(unsigned long long)count;
- (void)clearVariantBrandMuids;
- (void)addVariantBrandMuid:(unsigned long long)muid;
- (unsigned long long)variantBrandMuidAtIndex:(unsigned long long)index;
- (void)setVariantBrandMuids:(unsigned long long *)muids count:(unsigned long long)count;
- (void)clearAbstractOfBrandMuids;
- (void)addAbstractOfBrandMuid:(unsigned long long)muid;
- (unsigned long long)abstractOfBrandMuidAtIndex:(unsigned long long)index;
- (void)setAbstractOfBrandMuids:(unsigned long long *)muids count:(unsigned long long)count;
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

#endif /* GEOPDMerchantBrandLookupResponse_h */
