//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSubcredentialProvisioningTrackCredentialOperation_h
#define PKSubcredentialProvisioningTrackCredentialOperation_h
@import Foundation;

#include "PKSubcredentialProvisioningPairingSessionOperation.h"
#include "PKAppletSubcredential.h"

@class NSData;

@interface PKSubcredentialProvisioningTrackCredentialOperation : PKSubcredentialProvisioningPairingSessionOperation {
  /* instance variables */
  BOOL _performingOperation;
  BOOL _hasTrackedCredential;
  BOOL _firstTransactionCompleted;
  PKAppletSubcredential *_subcredential;
  NSData *_trackingAttestation;
  id /* block */ _completionHandler;
}

/* instance methods */
- (id)initWithConfiguration:(id)configuration context:(id)context delegate:(id)delegate;
- (void)performOperation;
- (void)performOperationWithCompletion:(id /* block */)completion;
- (void)trackCredentialWithAttestation;
- (void)session:(id)session didChangeState:(unsigned long long)state;
- (void)appletSubcredentialPairingSessionDidFirstTransaction:(id)transaction withError:(id)error;
@end

#endif /* PKSubcredentialProvisioningTrackCredentialOperation_h */
