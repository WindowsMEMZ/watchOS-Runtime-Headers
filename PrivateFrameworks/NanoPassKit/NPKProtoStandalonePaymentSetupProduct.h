//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKProtoStandalonePaymentSetupProduct_h
#define NPKProtoStandalonePaymentSetupProduct_h
@import Foundation;

#include "PBCodable.h"
#include "NPKProtoStandalonePaymentSetupProductImageAssetURLs.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface NPKProtoStandalonePaymentSetupProduct : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 flags; unsigned int x :1 hsa2Requirement; unsigned int x :1 supportedProvisioningMethods; unsigned int x :1 suppressPendingPurchases; } _has;
}

@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSMutableArray *regions;
@property (readonly, nonatomic) BOOL hasProductIdentifier;
@property (retain, nonatomic) NSString *productIdentifier;
@property (readonly, nonatomic) BOOL hasPartnerIdentifier;
@property (retain, nonatomic) NSString *partnerIdentifier;
@property (readonly, nonatomic) BOOL hasPartnerName;
@property (retain, nonatomic) NSString *partnerName;
@property (retain, nonatomic) NSMutableArray *requiredFields;
@property (retain, nonatomic) NSMutableArray *supportedProtocols;
@property (readonly, nonatomic) BOOL hasTermsURL;
@property (retain, nonatomic) NSString *termsURL;
@property (nonatomic) BOOL hasSupportedProvisioningMethods;
@property (nonatomic) long long supportedProvisioningMethods;
@property (readonly, nonatomic) BOOL hasReaderModeMetadataJson;
@property (retain, nonatomic) NSString *readerModeMetadataJson;
@property (nonatomic) BOOL hasFlags;
@property (nonatomic) long long flags;
@property (nonatomic) BOOL hasHsa2Requirement;
@property (nonatomic) long long hsa2Requirement;
@property (readonly, nonatomic) BOOL hasImageAssetURLs;
@property (retain, nonatomic) NPKProtoStandalonePaymentSetupProductImageAssetURLs *imageAssetURLs;
@property (nonatomic) BOOL hasSuppressPendingPurchases;
@property (nonatomic) BOOL suppressPendingPurchases;
@property (retain, nonatomic) NSMutableArray *paymentOptions;
@property (retain, nonatomic) NSMutableArray *requestedProvisioningMethods;

/* class methods */
+ (Class)regionsType;
+ (Class)requiredFieldsType;
+ (Class)supportedProtocolsType;
+ (Class)paymentOptionsType;
+ (Class)requestedProvisioningMethodsType;

/* instance methods */
- (void)clearRegions;
- (void)addRegions:(id)regions;
- (unsigned long long)regionsCount;
- (id)regionsAtIndex:(unsigned long long)index;
- (void)clearRequiredFields;
- (void)addRequiredFields:(id)fields;
- (unsigned long long)requiredFieldsCount;
- (id)requiredFieldsAtIndex:(unsigned long long)index;
- (void)clearSupportedProtocols;
- (void)addSupportedProtocols:(id)protocols;
- (unsigned long long)supportedProtocolsCount;
- (id)supportedProtocolsAtIndex:(unsigned long long)index;
- (void)clearPaymentOptions;
- (void)addPaymentOptions:(id)options;
- (unsigned long long)paymentOptionsCount;
- (id)paymentOptionsAtIndex:(unsigned long long)index;
- (void)clearRequestedProvisioningMethods;
- (void)addRequestedProvisioningMethods:(id)methods;
- (unsigned long long)requestedProvisioningMethodsCount;
- (id)requestedProvisioningMethodsAtIndex:(unsigned long long)index;
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

#endif /* NPKProtoStandalonePaymentSetupProduct_h */
