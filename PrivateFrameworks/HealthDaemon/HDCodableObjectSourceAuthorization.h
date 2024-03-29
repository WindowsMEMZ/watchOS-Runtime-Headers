//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCodableObjectSourceAuthorization_h
#define HDCodableObjectSourceAuthorization_h
@import Foundation;

#include "PBCodable.h"
#include "HDCodableSyncIdentity.h"
#include "NSCopying-Protocol.h"

@class NSData;

@interface HDCodableObjectSourceAuthorization : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 authorizationStatus; unsigned int x :1 modificationDate; } _has;
}

@property (readonly, nonatomic) BOOL hasSourceUUID;
@property (retain, nonatomic) NSData *sourceUUID;
@property (nonatomic) BOOL hasAuthorizationStatus;
@property (nonatomic) long long authorizationStatus;
@property (nonatomic) BOOL hasModificationDate;
@property (nonatomic) double modificationDate;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (retain, nonatomic) NSData *sessionUUID;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

/* instance methods */
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

#endif /* HDCodableObjectSourceAuthorization_h */
