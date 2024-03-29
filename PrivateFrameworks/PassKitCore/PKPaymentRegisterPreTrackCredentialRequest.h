//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentRegisterPreTrackCredentialRequest_h
#define PKPaymentRegisterPreTrackCredentialRequest_h
@import Foundation;

#include "PKPaymentRegisterCredentialRequest.h"

@class NSDictionary;

@interface PKPaymentRegisterPreTrackCredentialRequest : PKPaymentRegisterCredentialRequest {
  /* instance variables */
  NSDictionary *_encryptedVehicleDataRequest;
}

/* instance methods */
- (id)initWithCredential:(id)credential metadata:(id)metadata;
- (id)initWithCredential:(id)credential encryptedVehicleDataRequest:(id)request metadata:(id)metadata;
- (void)buildRequestBody:(id)body;
@end

#endif /* PKPaymentRegisterPreTrackCredentialRequest_h */
