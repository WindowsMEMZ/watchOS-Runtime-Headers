//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef __HMDRegisteredAccountIdentity_h
#define __HMDRegisteredAccountIdentity_h
@import Foundation;

#include "__HMDRegisteredIdentity.h"
#include "HMDAccount.h"

@interface __HMDRegisteredAccountIdentity : __HMDRegisteredIdentity

@property (readonly) HMDAccount *account;

/* instance methods */
- (id)initWithIdentity:(id)identity;
- (id)initWithIdentity:(id)identity account:(id)account;
@end

#endif /* __HMDRegisteredAccountIdentity_h */
