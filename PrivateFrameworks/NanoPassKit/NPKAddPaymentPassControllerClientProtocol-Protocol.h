//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKAddPaymentPassControllerClientProtocol_Protocol_h
#define NPKAddPaymentPassControllerClientProtocol_Protocol_h
@import Foundation;

@protocol NPKAddPaymentPassControllerClientProtocol <NSObject>
/* instance methods */
- (void)generateRequestWithCertificateChain:(id)chain nonce:(id)nonce nonceSignature:(id)signature completionHandler:(id /* block */)handler;
- (void)didFinishWithPass:(id)pass error:(id)error;
@end

#endif /* NPKAddPaymentPassControllerClientProtocol_Protocol_h */
