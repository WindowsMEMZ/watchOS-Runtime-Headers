//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOABAssignmentRequest_h
#define GEOABAssignmentRequest_h
@import Foundation;

#include "PBRequest.h"
#include "GEOPDClientMetadata.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOABAssignmentRequest : PBRequest<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_requestType; unsigned int x :1 read_unknownFields; unsigned int x :1 read_clientMetadata; unsigned int x :1 read_guid; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) int requestType;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (retain, nonatomic) GEOPDClientMetadata *clientMetadata;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)requestTypeAsString:(int)string;
- (int)StringAsRequestType:(id)type;
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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOABAssignmentRequest_h */
