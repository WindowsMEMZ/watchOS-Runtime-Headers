//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AATrustedContactDetailsViewModelFactory_h
#define AATrustedContactDetailsViewModelFactory_h
@import Foundation;

@interface AATrustedContactDetailsViewModelFactory : NSObject
/* instance methods */
- (id)viewModelForFlow:(unsigned long long)flow withContact:(id)contact;
- (void)prepareForMyCustodianFlow:(id)flow withContact:(id)contact;
- (void)prepareForCustodianForFlow:(id)flow withContact:(id)contact;
- (void)prepareForMyBeneficiaryFlow:(id)flow withContact:(id)contact;
- (void)prepareForMyBenefactorFlow:(id)flow withContact:(id)contact;
@end

#endif /* AATrustedContactDetailsViewModelFactory_h */
