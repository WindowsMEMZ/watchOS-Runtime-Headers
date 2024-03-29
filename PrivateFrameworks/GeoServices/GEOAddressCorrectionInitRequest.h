//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOAddressCorrectionInitRequest_h
#define GEOAddressCorrectionInitRequest_h
@import Foundation;

#include "PBRequest.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader;

@interface GEOAddressCorrectionInitRequest : PBRequest<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_supportsCollectionByRegion; unsigned int x :1 has_supportsMultipleAddresses; unsigned int x :1 read_personID; unsigned int x :1 read_token; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasToken;
@property (retain, nonatomic) NSString *token;
@property (readonly, nonatomic) BOOL hasPersonID;
@property (retain, nonatomic) NSString *personID;
@property (nonatomic) BOOL hasSupportsMultipleAddresses;
@property (nonatomic) BOOL supportsMultipleAddresses;
@property (nonatomic) BOOL hasSupportsCollectionByRegion;
@property (nonatomic) BOOL supportsCollectionByRegion;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* GEOAddressCorrectionInitRequest_h */
