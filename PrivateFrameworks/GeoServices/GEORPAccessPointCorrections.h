//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORPAccessPointCorrections_h
#define GEORPAccessPointCorrections_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPAccessPointCorrections : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 read_unknownFields; unsigned int x :1 read_addeds; unsigned int x :1 read_editeds; unsigned int x :1 read_removeds; unsigned int x :1 wrote_anyField; } _flags;
}

@property (retain, nonatomic) NSMutableArray *addeds;
@property (retain, nonatomic) NSMutableArray *removeds;
@property (retain, nonatomic) NSMutableArray *editeds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (Class)addedType;
+ (Class)removedType;
+ (Class)editedType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)clearAddeds;
- (void)addAdded:(id)added;
- (unsigned long long)addedsCount;
- (id)addedAtIndex:(unsigned long long)index;
- (void)clearRemoveds;
- (void)addRemoved:(id)removed;
- (unsigned long long)removedsCount;
- (id)removedAtIndex:(unsigned long long)index;
- (void)clearEditeds;
- (void)addEdited:(id)edited;
- (unsigned long long)editedsCount;
- (id)editedAtIndex:(unsigned long long)index;
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

#endif /* GEORPAccessPointCorrections_h */
