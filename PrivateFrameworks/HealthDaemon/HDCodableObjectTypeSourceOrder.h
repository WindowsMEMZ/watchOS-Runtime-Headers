//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCodableObjectTypeSourceOrder_h
#define HDCodableObjectTypeSourceOrder_h
@import Foundation;

#include "PBCodable.h"
#include "HDCodableSyncIdentity.h"
#include "NSCopying-Protocol.h"

@class NSData;

@interface HDCodableObjectTypeSourceOrder : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 objectType; unsigned int x :1 userOrdered; } _has;
}

@property (nonatomic) BOOL hasObjectType;
@property (nonatomic) long long objectType;
@property (nonatomic) BOOL hasUserOrdered;
@property (nonatomic) BOOL userOrdered;
@property (readonly, nonatomic) BOOL hasSourceUUIDs;
@property (retain, nonatomic) NSData *sourceUUIDs;
@property (readonly, nonatomic) unsigned long long modificationDatesCount;
@property (readonly, nonatomic) double * modificationDates;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

/* instance methods */
- (long long)decodedDataTypeCode;
- (void)dealloc;
- (void)clearModificationDates;
- (void)addModificationDates:(double)dates;
- (double)modificationDatesAtIndex:(unsigned long long)index;
- (void)setModificationDates:(double *)dates count:(unsigned long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* HDCodableObjectTypeSourceOrder_h */
