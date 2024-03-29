//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef AWDHomeKitAccessoryPairing_h
#define AWDHomeKitAccessoryPairing_h
@import Foundation;

#include "PBCodable.h"
#include "AWDHomeKitVendorInformation.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface AWDHomeKitAccessoryPairing : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 timestamp; unsigned int x :1 certified; unsigned int x :1 credentialType; unsigned int x :1 duration; unsigned int x :1 errorCode; unsigned int x :1 noeCapabilities; unsigned int x :1 noeOnboardDuration; unsigned int x :1 noeOnboardErrorCode; unsigned int x :1 noeStatus; unsigned int x :1 retryCount; unsigned int x :1 transportType; unsigned int x :1 isAdd; unsigned int x :1 isAddWithOwnershipProof; unsigned int x :1 isAddedViaWAC; unsigned int x :1 isBTOnboard; unsigned int x :1 isFirstHAPAccessoryInAnyHome; unsigned int x :1 isFirstHAPAccessoryInHome; unsigned int x :1 isNetworkRouterAdd; unsigned int x :1 isNetworkRouterReplace; unsigned int x :1 isNoeAccessory; unsigned int x :1 isNoeOnboard; unsigned int x :1 isSecureWAC; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasIsAdd;
@property (nonatomic) BOOL isAdd;
@property (nonatomic) BOOL hasIsAddedViaWAC;
@property (nonatomic) BOOL isAddedViaWAC;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) BOOL hasVendorDetails;
@property (retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails;
@property (nonatomic) BOOL hasCertified;
@property (nonatomic) int certified;
@property (nonatomic) BOOL hasIsSecureWAC;
@property (nonatomic) BOOL isSecureWAC;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) BOOL hasCredentialType;
@property (nonatomic) int credentialType;
@property (nonatomic) BOOL hasIsAddWithOwnershipProof;
@property (nonatomic) BOOL isAddWithOwnershipProof;
@property (nonatomic) BOOL hasIsNetworkRouterAdd;
@property (nonatomic) BOOL isNetworkRouterAdd;
@property (nonatomic) BOOL hasIsNetworkRouterReplace;
@property (nonatomic) BOOL isNetworkRouterReplace;
@property (readonly, nonatomic) BOOL hasAppIdentifier;
@property (retain, nonatomic) NSString *appIdentifier;
@property (nonatomic) BOOL hasIsFirstHAPAccessoryInAnyHome;
@property (nonatomic) BOOL isFirstHAPAccessoryInAnyHome;
@property (nonatomic) BOOL hasIsFirstHAPAccessoryInHome;
@property (nonatomic) BOOL isFirstHAPAccessoryInHome;
@property (nonatomic) BOOL hasIsNoeAccessory;
@property (nonatomic) BOOL isNoeAccessory;
@property (nonatomic) BOOL hasNoeCapabilities;
@property (nonatomic) unsigned int noeCapabilities;
@property (nonatomic) BOOL hasNoeStatus;
@property (nonatomic) unsigned int noeStatus;
@property (nonatomic) BOOL hasIsBTOnboard;
@property (nonatomic) BOOL isBTOnboard;
@property (nonatomic) BOOL hasIsNoeOnboard;
@property (nonatomic) BOOL isNoeOnboard;
@property (nonatomic) BOOL hasNoeOnboardDuration;
@property (nonatomic) unsigned int noeOnboardDuration;
@property (nonatomic) BOOL hasNoeOnboardErrorCode;
@property (nonatomic) int noeOnboardErrorCode;
@property (readonly, nonatomic) BOOL hasNoeOnboardErrorDomain;
@property (retain, nonatomic) NSString *noeOnboardErrorDomain;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;

/* instance methods */
- (id)transportTypeAsString:(int)string;
- (int)StringAsTransportType:(id)type;
- (id)certifiedAsString:(int)string;
- (int)StringAsCertified:(id)certified;
- (id)credentialTypeAsString:(int)string;
- (int)StringAsCredentialType:(id)type;
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

#endif /* AWDHomeKitAccessoryPairing_h */
