//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AAAppleIDLoginPlugin_Protocol_h
#define AAAppleIDLoginPlugin_Protocol_h
@import Foundation;

@protocol AAAppleIDLoginPlugin <NSObject>
/* instance methods */
- (id)serviceIdentifier;
- (id)parametersForIdentityEstablishmentRequest;
- (id)parametersForLoginRequest;
- (void)handleLoginResponse:(id)response completion:(id /* block */)completion;
@end

#endif /* AAAppleIDLoginPlugin_Protocol_h */
