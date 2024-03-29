//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSharingCarKeyInvitation_h
#define PKSharingCarKeyInvitation_h
@import Foundation;

#include "PKSharingCarKeyMessage.h"
#include "PKPassShareActivationOptions.h"
#include "PKSharingMesageProprietaryData.h"

@class NSString;

@interface PKSharingCarKeyInvitation : PKSharingCarKeyMessage

@property (readonly, nonatomic) unsigned long long radioTechnology;
@property (readonly, nonatomic) NSString *vehicleModel;
@property (readonly, nonatomic) NSString *vehicleIssuer;
@property (readonly, nonatomic) NSString *readerIdentifier;
@property (readonly, nonatomic) NSString *partnerIdentifier;
@property (readonly, nonatomic) NSString *brandIdentifier;
@property (readonly, nonatomic) PKSharingMesageProprietaryData *proprietaryData;
@property (readonly, nonatomic) PKPassShareActivationOptions *activationOptions;

/* class methods */
+ (void)_mergeActivationOptions:(id)options intoDictionary:(id)dictionary;
+ (id)_activationOptionsFromDictionary:(id)dictionary;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRawInvite:(id)invite shareIdentifier:(id)identifier radioTechnology:(unsigned long long)technology vehicleModel:(id)model vehicleIssuer:(id)issuer readerIdentifier:(id)identifier partnerIdentifier:(id)identifier brandIdentifier:(id)identifier carKeySharingDict:(id)dict proprietaryData:(id)data activationOptions:(id)options displayInformation:(id)information;
- (BOOL)configureWithContent:(id)content;
@end

#endif /* PKSharingCarKeyInvitation_h */
