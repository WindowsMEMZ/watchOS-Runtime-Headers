//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSEConsistencyCheckRequestedAction_h
#define PKSEConsistencyCheckRequestedAction_h
@import Foundation;

#include "PKSEConsistencyCheckDeviceCredential.h"
#include "PKSECredentialAddress.h"

@interface PKSEConsistencyCheckRequestedAction : NSObject

@property (readonly, nonatomic) long long actions;
@property (readonly, nonatomic) PKSEConsistencyCheckDeviceCredential *deviceCredential;
@property (readonly, nonatomic) PKSECredentialAddress *address;

/* instance methods */
- (id)init;
- (id)initWithActions:(long long)actions deviceCredential:(id)credential address:(id)address;
- (id)description;
@end

#endif /* PKSEConsistencyCheckRequestedAction_h */
