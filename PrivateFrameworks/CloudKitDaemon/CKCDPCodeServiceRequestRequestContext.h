//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKCDPCodeServiceRequestRequestContext_h
#define CKCDPCodeServiceRequestRequestContext_h
@import Foundation;

#include "PBCodable.h"
#include "CKCDPCodeServiceRequestDatabaseOwner.h"
#include "CKCDPCodeServiceRequestOperationGroup.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface CKCDPCodeServiceRequestRequestContext : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 dsid; unsigned int x :1 databaseEnvironment; unsigned int x :1 databaseType; } _has;
}

@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (readonly, nonatomic) BOOL hasContainerName;
@property (retain, nonatomic) NSString *containerName;
@property (nonatomic) BOOL hasDatabaseEnvironment;
@property (nonatomic) int databaseEnvironment;
@property (nonatomic) BOOL hasDatabaseType;
@property (nonatomic) int databaseType;
@property (readonly, nonatomic) BOOL hasDeviceId;
@property (retain, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) BOOL hasApplicationBundleId;
@property (retain, nonatomic) NSString *applicationBundleId;
@property (readonly, nonatomic) BOOL hasClientInfo;
@property (retain, nonatomic) NSString *clientInfo;
@property (nonatomic) BOOL hasDsid;
@property (nonatomic) unsigned long long dsid;
@property (readonly, nonatomic) BOOL hasUserAgent;
@property (retain, nonatomic) NSString *userAgent;
@property (readonly, nonatomic) BOOL hasOperationGroup;
@property (retain, nonatomic) CKCDPCodeServiceRequestOperationGroup *operationGroup;
@property (readonly, nonatomic) BOOL hasDatabaseOwnerId;
@property (retain, nonatomic) CKCDPCodeServiceRequestDatabaseOwner *databaseOwnerId;

/* instance methods */
- (id)databaseEnvironmentAsString:(int)string;
- (int)StringAsDatabaseEnvironment:(id)environment;
- (id)databaseTypeAsString:(int)string;
- (int)StringAsDatabaseType:(id)type;
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

#endif /* CKCDPCodeServiceRequestRequestContext_h */
