//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORPContainmentCorrection_h
#define GEORPContainmentCorrection_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class PBDataReader, PBUnknownFields;

@interface GEORPContainmentCorrection : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 read_unknownFields; unsigned int x :1 read_addedMuids; unsigned int x :1 read_originalMuids; unsigned int x :1 read_removedMuids; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) unsigned long long addedMuidsCount;
@property (readonly, nonatomic) unsigned long long * addedMuids;
@property (readonly, nonatomic) unsigned long long removedMuidsCount;
@property (readonly, nonatomic) unsigned long long * removedMuids;
@property (readonly, nonatomic) unsigned long long originalMuidsCount;
@property (readonly, nonatomic) unsigned long long * originalMuids;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)dealloc;
- (void)clearAddedMuids;
- (void)addAddedMuid:(unsigned long long)muid;
- (unsigned long long)addedMuidAtIndex:(unsigned long long)index;
- (void)setAddedMuids:(unsigned long long *)muids count:(unsigned long long)count;
- (void)clearRemovedMuids;
- (void)addRemovedMuid:(unsigned long long)muid;
- (unsigned long long)removedMuidAtIndex:(unsigned long long)index;
- (void)setRemovedMuids:(unsigned long long *)muids count:(unsigned long long)count;
- (void)clearOriginalMuids;
- (void)addOriginalMuid:(unsigned long long)muid;
- (unsigned long long)originalMuidAtIndex:(unsigned long long)index;
- (void)setOriginalMuids:(unsigned long long *)muids count:(unsigned long long)count;
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

#endif /* GEORPContainmentCorrection_h */
