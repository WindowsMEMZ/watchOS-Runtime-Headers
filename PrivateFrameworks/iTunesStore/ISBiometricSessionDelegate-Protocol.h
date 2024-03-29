//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef ISBiometricSessionDelegate_Protocol_h
#define ISBiometricSessionDelegate_Protocol_h
@import Foundation;

@protocol ISBiometricSessionDelegate <NSObject>
@optional
/* instance methods */
- (void)sender:(id)sender didFallbackToPassword:(BOOL)password;
- (void)sender:(id)sender shouldContinueTouchIDSession:(BOOL)idsession;
- (void)sender:(id)sender willSendChallenge:(id)challenge andSignature:(id)signature andPaymentTokenData:(id)data andFpanID:(id)id isExtendedAction:(BOOL)action isPayment:(BOOL)payment additionalHeaders:(id)headers;
@end

#endif /* ISBiometricSessionDelegate_Protocol_h */
