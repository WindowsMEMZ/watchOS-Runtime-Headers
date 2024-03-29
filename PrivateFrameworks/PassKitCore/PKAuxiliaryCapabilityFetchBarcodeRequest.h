//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAuxiliaryCapabilityFetchBarcodeRequest_h
#define PKAuxiliaryCapabilityFetchBarcodeRequest_h
@import Foundation;

#include "PKAuxiliaryCapabilityWebServiceRequest.h"
#include "PKSecureElementSignatureInfo.h"

@class NSArray, NSData, NSString;

@interface PKAuxiliaryCapabilityFetchBarcodeRequest : PKAuxiliaryCapabilityWebServiceRequest

@property (copy, nonatomic) NSString *dpanIdentifier;
@property (nonatomic) long long barcodeCount;
@property (copy, nonatomic) NSString *lastUsedBarcodeIdentifier;
@property (copy, nonatomic) NSArray *encryptionCertificateChain;
@property (nonatomic) long long fetchReason;
@property (copy, nonatomic) NSData *signatureData;
@property (retain, nonatomic) PKSecureElementSignatureInfo *signatureInfo;

/* instance methods */
- (id)_urlRequestWithServiceURL:(id)url deviceIdentifier:(id)identifier appleAccountInformation:(id)information;
- (id)_dataToSign;
@end

#endif /* PKAuxiliaryCapabilityFetchBarcodeRequest_h */
