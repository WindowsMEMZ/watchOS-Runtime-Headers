//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1394.60.57.0.0
//
#ifndef LAAuthenticationBiometricMethodObserver_Protocol_h
#define LAAuthenticationBiometricMethodObserver_Protocol_h
@import Foundation;

@protocol LAAuthenticationBiometricMethodObserver <LAAuthenticationMethodObserver>
@optional
/* instance methods */
- (void)authenticationBiometricsMethodDidReceiveNoMatch:(id)match;
- (void)authenticationBiometricsMethod:(id)method didReceiveFeedback:(long long)feedback;
@end

#endif /* LAAuthenticationBiometricMethodObserver_Protocol_h */
