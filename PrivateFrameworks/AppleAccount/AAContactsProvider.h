//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AAContactsProvider_h
#define AAContactsProvider_h
@import Foundation;

#include "AAContactsManager.h"
#include "AACustodianController.h"
#include "AAInheritanceContactsViewModel.h"

@interface AAContactsProvider : NSObject {
  /* instance variables */
  AACustodianController *_custodianController;
  AAContactsManager *_contactsManager;
  AAInheritanceContactsViewModel *_inheritanceViewModelProvider;
}

/* instance methods */
- (id)init;
- (void)fetchCustodiansAndBeneficiaries:(id /* block */)beneficiaries;
- (void)fetchCustodianshipsAndBenefactors:(id /* block */)benefactors;
- (void)fetchSuggestedCustodians:(id /* block */)custodians;
- (void)fetchMyCustodians:(id /* block */)custodians;
- (void)fetchMyHealthyCustodians:(id /* block */)custodians;
- (void)fetchMyWalrusEligibleCustodians:(id /* block */)custodians;
- (void)fetchMyCustodianshipOwners:(id /* block */)owners;
- (void)fetchSuggestedBeneficiaries:(id /* block */)beneficiaries;
- (void)fetchMyBeneficiaries:(id /* block */)beneficiaries;
- (void)fetchMyBenefactors:(id /* block */)benefactors;
- (id)_localContactsForCustodians:(id)custodians;
- (id)_localContactsForCustodianshipOwners:(id)owners;
@end

#endif /* AAContactsProvider_h */
