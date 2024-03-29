//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSubcredentialProvisioningPrewarmSessionOperation_h
#define PKSubcredentialProvisioningPrewarmSessionOperation_h
@import Foundation;

#include "PKSubcredentialProvisioningPairingSessionOperation.h"

@interface PKSubcredentialProvisioningPrewarmSessionOperation : PKSubcredentialProvisioningPairingSessionOperation {
  /* instance variables */
  BOOL _operationWasCancelled;
}

/* instance methods */
- (void)performOperation;
- (void)startPrewarming;
- (BOOL)canCancelOperation;
- (void)cancelOperation;
- (id)_manufacturerIdentifier;
- (void)session:(id)session didChangeState:(unsigned long long)state;
- (void)appletSubcredentialPairingSession:(id)session didFinishPreWarmWithResult:(id)result;
@end

#endif /* PKSubcredentialProvisioningPrewarmSessionOperation_h */
