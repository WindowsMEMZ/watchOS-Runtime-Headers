//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAddCarKeyPassConfiguration_h
#define PKAddCarKeyPassConfiguration_h
@import Foundation;

#include "PKAddSecureElementPassConfiguration.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface PKAddCarKeyPassConfiguration : PKAddSecureElementPassConfiguration<NSSecureCoding>

@property (nonatomic) unsigned long long referralSource;
@property (copy, nonatomic) NSString *pairedEntityIdentifier;
@property (copy, nonatomic) NSString *productPlanIdentifier;
@property (copy, nonatomic) NSString *vehicleName;
@property (nonatomic) BOOL ownerKeyPairingAvailable;
@property (nonatomic) BOOL proofOfOwnershipPresent;
@property (nonatomic) BOOL onlineServicesActivated;
@property (readonly, nonatomic) NSString *pairedReaderIdentifier;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) unsigned long long supportedRadioTechnologies;
@property (copy, nonatomic) NSString *manufacturerIdentifier;
@property (retain, nonatomic) NSString *provisioningTemplateIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)vehicleInitiatedPairingLaunchURL;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* PKAddCarKeyPassConfiguration_h */
