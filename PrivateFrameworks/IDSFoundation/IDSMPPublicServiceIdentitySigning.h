//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSMPPublicServiceIdentitySigning_h
#define IDSMPPublicServiceIdentitySigning_h
@import Foundation;

#include "IDSMPIdentity.h"

@interface IDSMPPublicServiceIdentitySigning : IDSMPIdentity
/* class methods */
+ (id)publicServiceIdentitySigningWithDataRepresentation:(id)representation publicAccountIdentity:(id)identity error:(id *)error;

/* instance methods */
- (id)dataRepresentationWithError:(id *)error;
@end

#endif /* IDSMPPublicServiceIdentitySigning_h */
