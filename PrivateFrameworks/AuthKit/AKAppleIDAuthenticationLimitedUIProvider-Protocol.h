//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKAppleIDAuthenticationLimitedUIProvider_Protocol_h
#define AKAppleIDAuthenticationLimitedUIProvider_Protocol_h
@import Foundation;

@protocol AKAppleIDAuthenticationLimitedUIProvider <NSObject>
/* instance methods */
- (void)presentBasicLoginUIWithCompletion:(id /* block */)completion;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)completion;
- (void)presentLoginAlertWithError:(id)error title:(id)title message:(id)message completion:(id /* block */)completion;
- (void)presentSecondFactorUIWithCompletion:(id /* block */)completion;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)completion;
- (void)presentSecondFactorAlertWithError:(id)error title:(id)title message:(id)message completion:(id /* block */)completion;
@optional
/* instance methods */
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)id completion:(id /* block */)completion;
@end

#endif /* AKAppleIDAuthenticationLimitedUIProvider_Protocol_h */
