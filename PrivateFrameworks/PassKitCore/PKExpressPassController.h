//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKExpressPassController_h
#define PKExpressPassController_h
@import Foundation;

#include "PKPassLibraryDataProvider-Protocol.h"
#include "PKPaymentDataProvider-Protocol.h"

@interface PKExpressPassController : NSObject {
  /* instance variables */
  NSObject<PKPaymentDataProvider> *_paymentDataProvider;
  NSObject<PKPassLibraryDataProvider> *_passLibraryDataProvider;
  BOOL _isForWatch;
  BOOL _hasSupportsExpressForAutomaticSelectionTechnologyTypeCheck;
}

@property (weak, nonatomic) id presentingViewController;
@property (nonatomic) long long apiVersion;

/* instance methods */
- (id)initWithPaymentDataProvider:(id)provider passLibraryDataProvider:(id)provider isForWatch:(BOOL)watch;
- (id)expressModeSupportedForPass:(id)pass;
- (void)conflictingExpressPassesWithPassInformation:(id)information completion:(id /* block */)completion;
- (BOOL)isExpressModeEnabledForPass:(id)pass;
- (BOOL)supportsLowPowerExpressMode;
- (id)expressModeUpgradeRequestForPass:(id)pass;
- (id)eligibleExpressUpgradeRequestsForPass:(id)pass;
- (id)validExpressModeUpgradeRequestForPass:(id)pass;
- (BOOL)hasEligibleExpressUpgradeRequestForPass:(id)pass;
- (void)upgradeExpressModeForPass:(id)pass withCredential:(id)credential completion:(id /* block */)completion;
- (void)upgradeExpressModeForPass:(id)pass withCredential:(id)credential resultHandler:(id /* block */)handler;
- (void)enableExpressModeWithPassInformation:(id)information credential:(id)credential completion:(id /* block */)completion;
- (void)_disableExpressModeForPassWithUniqueIdentifier:(id)identifier withCompletion:(id /* block */)completion;
- (void)disableExpressModeForPass:(id)pass withCompletion:(id /* block */)completion;
- (void)disableExpressModeForPassesWithUniqueIdentifiers:(id)identifiers withCompletion:(id /* block */)completion;
- (id)expressState;
- (BOOL)deviceUsesAutomaticAuthorization;
@end

#endif /* PKExpressPassController_h */
