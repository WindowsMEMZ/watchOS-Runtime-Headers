//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSVPBPlayActivityEnqueuerProperties_h
#define SSVPBPlayActivityEnqueuerProperties_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface SSVPBPlayActivityEnqueuerProperties : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 storeAccountID; unsigned int x :1 systemReleaseType; unsigned int x :1 privateListeningEnabled; unsigned int x :1 sBEnabled; } _has;
}

@property (readonly, nonatomic) BOOL hasBuildVersion;
@property (retain, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) BOOL hasDeviceGUID;
@property (retain, nonatomic) NSString *deviceGUID;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) BOOL hasTimeZoneName;
@property (retain, nonatomic) NSString *timeZoneName;
@property (nonatomic) BOOL hasSystemReleaseType;
@property (nonatomic) int systemReleaseType;
@property (nonatomic) BOOL hasSBEnabled;
@property (nonatomic) BOOL sBEnabled;
@property (nonatomic) BOOL hasStoreAccountID;
@property (nonatomic) unsigned long long storeAccountID;
@property (readonly, nonatomic) BOOL hasStoreFrontID;
@property (retain, nonatomic) NSString *storeFrontID;
@property (nonatomic) BOOL hasPrivateListeningEnabled;
@property (nonatomic) BOOL privateListeningEnabled;

/* instance methods */
- (id)systemReleaseTypeAsString:(int)string;
- (int)StringAsSystemReleaseType:(id)type;
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

#endif /* SSVPBPlayActivityEnqueuerProperties_h */
