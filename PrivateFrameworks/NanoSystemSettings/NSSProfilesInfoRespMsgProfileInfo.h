//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 336.0.0.0.0
//
#ifndef NSSProfilesInfoRespMsgProfileInfo_h
#define NSSProfilesInfoRespMsgProfileInfo_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface NSSProfilesInfoRespMsgProfileInfo : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 isInstalledByDeclarativeManagement; } _has;
}

@property (readonly, nonatomic) BOOL hasFriendlyName;
@property (retain, nonatomic) NSString *friendlyName;
@property (readonly, nonatomic) BOOL hasProfileDescription;
@property (retain, nonatomic) NSString *profileDescription;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasUUID;
@property (retain, nonatomic) NSString *uUID;
@property (readonly, nonatomic) BOOL hasOrganization;
@property (retain, nonatomic) NSString *organization;
@property (readonly, nonatomic) BOOL hasExpiryDate;
@property (retain, nonatomic) NSData *expiryDate;
@property (nonatomic) BOOL hasIsInstalledByDeclarativeManagement;
@property (nonatomic) BOOL isInstalledByDeclarativeManagement;

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

#endif /* NSSProfilesInfoRespMsgProfileInfo_h */
