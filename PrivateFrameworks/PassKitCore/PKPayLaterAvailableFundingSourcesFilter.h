//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterAvailableFundingSourcesFilter_h
#define PKPayLaterAvailableFundingSourcesFilter_h
@import Foundation;

#include "PKPassLibrary.h"
#include "PKPeerPaymentAccount.h"

@class NSMutableDictionary, NSString;

@interface PKPayLaterAvailableFundingSourcesFilter : NSObject {
  /* instance variables */
  NSMutableDictionary *_availableFundingSources;
  NSString *_defaultPassUniqueIdentifier;
  PKPassLibrary *_passLibrary;
}

@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;

/* instance methods */
- (id)initWithPassLibrary:(id)library peerPaymentAccount:(id)account defaultPassUniqueIdentifier:(id)identifier;
- (id)availableFundingSourcesForFinancingOption:(id)option eligibleBankSources:(id)sources lastUsedFundingSources:(id)sources;
- (void)clearCache;
- (id)availableFundingSourcesForPaymentIntentDetails:(id)details currencyAmount:(id)amount planIdentifier:(id)identifier primaryPaymentSource:(id)source;
- (id)_availableFundingSourcesForSupportedRepaymentTypes:(unsigned long long)types supportedRepaymentCountries:(id)countries supportedRepaymentNetworks:(id)networks eligibleBankSources:(id)sources lastUsedFundingSources:(id)sources installmentAmount:(id)amount;
- (void)_filterCashPassIfNecessaryFromPasses:(id)passes supportedRepaymentTypes:(unsigned long long)types installmentAmount:(id)amount;
- (id)_payLaterPassPaymentSourcesForPasses:(id)passes;
- (void)_addAccountPaymentSourcesToPaymentSourcesIfNecessary:(id)necessary supportedRepaymentTypes:(unsigned long long)types eligibleBankSources:(id)sources;
- (void)_assignPrioritiesToPaymentSources:(id)sources lastUsedFundingSources:(id)sources;
- (id)_filterLastUsedFundingSources:(id)sources paymentSources:(id)sources;
- (void)_prioritizePaymentSource:(id)source inPaymentSources:(id)sources;
- (id)_sortPaymentSources:(id)sources;
@end

#endif /* PKPayLaterAvailableFundingSourcesFilter_h */
