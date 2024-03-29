//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORPFeedbackAddressFields_h
#define GEORPFeedbackAddressFields_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader;

@interface GEORPFeedbackAddressFields : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 read_addressBasic; unsigned int x :1 read_addressBuilding; unsigned int x :1 read_addressFloor; unsigned int x :1 read_addressUnit; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasAddressBasic;
@property (retain, nonatomic) NSString *addressBasic;
@property (readonly, nonatomic) BOOL hasAddressUnit;
@property (retain, nonatomic) NSString *addressUnit;
@property (readonly, nonatomic) BOOL hasAddressFloor;
@property (retain, nonatomic) NSString *addressFloor;
@property (readonly, nonatomic) BOOL hasAddressBuilding;
@property (retain, nonatomic) NSString *addressBuilding;

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
@end

#endif /* GEORPFeedbackAddressFields_h */
