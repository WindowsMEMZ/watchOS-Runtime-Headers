//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDPZoneRetrieveChangesResponse_h
#define CKDPZoneRetrieveChangesResponse_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray;

@interface CKDPZoneRetrieveChangesResponse : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 status; } _has;
}

@property (retain, nonatomic) NSMutableArray *changedZones;
@property (readonly, nonatomic) BOOL hasSyncContinuationToken;
@property (retain, nonatomic) NSData *syncContinuationToken;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;

/* class methods */
+ (Class)changedZonesType;

/* instance methods */
- (void)clearChangedZones;
- (void)addChangedZones:(id)zones;
- (unsigned long long)changedZonesCount;
- (id)changedZonesAtIndex:(unsigned long long)index;
- (id)statusAsString:(int)string;
- (int)StringAsStatus:(id)status;
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

#endif /* CKDPZoneRetrieveChangesResponse_h */
