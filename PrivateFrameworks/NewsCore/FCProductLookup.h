//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCProductLookup_h
#define FCProductLookup_h
@import Foundation;

#include "SKProductsRequestDelegate-Protocol.h"

@class NSError, NSNumber, NSString, SKProduct, SKProductsRequest;
@protocol OS_dispatch_group;

@interface FCProductLookup : NSObject<SKProductsRequestDelegate> {
  /* instance variables */
  NSString *_offerName;
  NSNumber *_appAdamID;
  NSNumber *_storeExternalVersionID;
  NSString *_bundleID;
  NSObject<OS_dispatch_group> *_productRequestGroup;
  SKProductsRequest *_request;
  SKProduct *_product;
  NSError *_productLookupError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)productsRequest:(id)request didReceiveResponse:(id)response;
- (void)requestDidFinish:(id)finish;
- (void)request:(id)request didFailWithError:(id)error;
@end

#endif /* FCProductLookup_h */
