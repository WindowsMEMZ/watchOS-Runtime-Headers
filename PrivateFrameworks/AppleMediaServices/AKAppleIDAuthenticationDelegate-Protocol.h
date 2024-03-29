//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AKAppleIDAuthenticationDelegate_Protocol_h
#define AKAppleIDAuthenticationDelegate_Protocol_h
@import Foundation;

@protocol AKAppleIDAuthenticationDelegate <NSObject>
@optional
/* instance methods */
- (BOOL)authenticationController:(id)controller shouldContinueWithAuthenticationResults:(id)results error:(id)error forContext:(id)context;
- (void)authenticationController:(id)controller shouldContinueWithAuthenticationResults:(id)results error:(id)error forContext:(id)context completion:(id /* block */)completion;
@end

#endif /* AKAppleIDAuthenticationDelegate_Protocol_h */
