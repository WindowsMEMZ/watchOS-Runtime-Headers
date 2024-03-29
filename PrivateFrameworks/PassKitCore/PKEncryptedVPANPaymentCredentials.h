//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKEncryptedVPANPaymentCredentials_h
#define PKEncryptedVPANPaymentCredentials_h
@import Foundation;

@class NSData;

@interface PKEncryptedVPANPaymentCredentials : NSObject

@property (readonly, copy, nonatomic) NSData *ephemeralPublicKey;
@property (readonly, copy, nonatomic) NSData *encryptedCardData;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* PKEncryptedVPANPaymentCredentials_h */
