//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentProvisioningControllerCredentialQueue_h
#define PKPaymentProvisioningControllerCredentialQueue_h
@import Foundation;

@class NSMutableArray;

@interface PKPaymentProvisioningControllerCredentialQueue : NSObject {
  /* instance variables */
  NSMutableArray *_credentials;
  NSMutableArray *_completedCredentials;
  unsigned long long _currentIndex;
}

/* instance methods */
- (id)init;
- (void)setCredentialsToProvision:(id)provision;
- (void)removeCredential:(id)credential;
- (id)nextCredentialToProvision;
- (void)setCurrentCredential:(id)credential;
- (unsigned long long)count;
- (unsigned long long)remaining;
- (unsigned long long)completedCount;
- (id)credentials;
- (id)completedCredentials;
@end

#endif /* PKPaymentProvisioningControllerCredentialQueue_h */
