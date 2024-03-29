//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOTransitListTimeInstruction_h
#define GEOTransitListTimeInstruction_h
@import Foundation;

#include "PBCodable.h"
#include "GEOComposedRouteStepTransitInstructionMerging-Protocol.h"
#include "GEOFormattedString.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitListTimeInstruction : PBCodable<GEOComposedRouteStepTransitInstructionMerging, NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_hideWhenListCollapsed; unsigned int x :1 read_unknownFields; unsigned int x :1 read_primaryText; unsigned int x :1 read_secondaryText; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasPrimaryText;
@property (retain, nonatomic) GEOFormattedString *primaryText;
@property (readonly, nonatomic) BOOL hasSecondaryText;
@property (retain, nonatomic) GEOFormattedString *secondaryText;
@property (nonatomic) BOOL hasHideWhenListCollapsed;
@property (nonatomic) BOOL hideWhenListCollapsed;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (BOOL)_transit_hasAnyFieldSet;
- (void)_transit_mergeFrom:(id)from;
- (id)init;
- (id)initWithData:(id)data;
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
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOTransitListTimeInstruction_h */
