//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef CDPDAuthProviderInternal_Protocol_h
#define CDPDAuthProviderInternal_Protocol_h
@import Foundation;

@protocol CDPDAuthProviderInternal <NSObject>
/* instance methods */
- (void)cdpContext:(id)context persistMasterKeyVerifier:(id)verifier completion:(id /* block */)completion;
- (void)cdpContext:(id)context verifyMasterKey:(id)key completion:(id /* block */)completion;
- (BOOL)isPrimaryAppleIDLoggedIn;
@end

#endif /* CDPDAuthProviderInternal_Protocol_h */
