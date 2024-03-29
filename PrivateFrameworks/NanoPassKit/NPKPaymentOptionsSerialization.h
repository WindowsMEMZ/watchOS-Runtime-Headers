//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPaymentOptionsSerialization_h
#define NPKPaymentOptionsSerialization_h
@import Foundation;

@interface NPKPaymentOptionsSerialization : NSObject
/* class methods */
+ (id)setTransactionDefaultsRequest;
+ (void)handleSetTransactionDefaultsRequest:(id)request;
+ (void)_deleteAllDefaultBillingAddresses:(id)addresses;
+ (id)_contactFromEncodedData:(id)data;
+ (id)_billingAddressDictionaryFromEncodedData:(id)data;
@end

#endif /* NPKPaymentOptionsSerialization_h */
