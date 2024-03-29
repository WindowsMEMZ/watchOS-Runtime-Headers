//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountWebServicePassDetailsResponse_h
#define PKAccountWebServicePassDetailsResponse_h
@import Foundation;

#include "PKAccountWebServiceResponse.h"
#include "PKPaymentRemoteCredential.h"

@class NSArray, NSString, NSURL;

@interface PKAccountWebServicePassDetailsResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSString *provisioningIdentifier;
@property (readonly, nonatomic) long long cardType;
@property (nonatomic) long long status;
@property (readonly, copy, nonatomic) NSURL *passURL;
@property (readonly, copy, nonatomic) NSString *passTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *passSerialNumber;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;
@property (readonly, nonatomic) NSArray *postProvisioningContent;
@property (retain, nonatomic) PKPaymentRemoteCredential *remoteCredential;

/* instance methods */
- (id)initWithData:(id)data;
@end

#endif /* PKAccountWebServicePassDetailsResponse_h */
