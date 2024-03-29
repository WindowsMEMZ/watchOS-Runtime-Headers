//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef CDPAuthProviderProxy_h
#define CDPAuthProviderProxy_h
@import Foundation;

#include "CDPAuthProviderInternal-Protocol.h"

@class NSString;
@protocol CDPAuthProvider;

@interface CDPAuthProviderProxy : NSObject<CDPAuthProviderInternal> {
  /* instance variables */
  NSObject<CDPAuthProvider> *_authProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)proxyWithAuthProvider:(id)provider;

/* instance methods */
- (void)cdpContext:(id)context performSilentRecoveryTokenRenewal:(id /* block */)renewal;
- (void)cdpContext:(id)context verifyMasterKey:(id)key completion:(id /* block */)completion;
@end

#endif /* CDPAuthProviderProxy_h */
