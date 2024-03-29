//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCodableAuthorization_h
#define HDCodableAuthorization_h
@import Foundation;

#include "PBCodable.h"
#include "HDCodableSyncIdentity.h"
#include "NSCopying-Protocol.h"

@interface HDCodableAuthorization : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 authorizationMode; unsigned int x :1 authorizationRequest; unsigned int x :1 authorizationStatus; unsigned int x :1 modificationDate; unsigned int x :1 modificationEpoch; unsigned int x :1 objectType; } _has;
}

@property (nonatomic) BOOL hasObjectType;
@property (nonatomic) long long objectType;
@property (nonatomic) BOOL hasAuthorizationStatus;
@property (nonatomic) long long authorizationStatus;
@property (nonatomic) BOOL hasAuthorizationRequest;
@property (nonatomic) long long authorizationRequest;
@property (nonatomic) BOOL hasModificationDate;
@property (nonatomic) double modificationDate;
@property (nonatomic) BOOL hasModificationEpoch;
@property (nonatomic) long long modificationEpoch;
@property (nonatomic) BOOL hasAuthorizationMode;
@property (nonatomic) long long authorizationMode;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

/* instance methods */
- (long long)_dataTypeCode;
- (void)_setDataTypeCodeWithObjectType:(id)type;
- (long long)_authorizationStatus;
- (void)_setAuthorizationStatusWithNumber:(id)number;
- (long long)_authorizationRequest;
- (void)_setAuthorizationRequestWithNumber:(id)number;
- (long long)_authorizationMode;
- (void)_setAuthorizationModeWithNumber:(id)number;
- (id)_modificationDate;
- (void)_setModificationDate:(id)date;
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

#endif /* HDCodableAuthorization_h */
