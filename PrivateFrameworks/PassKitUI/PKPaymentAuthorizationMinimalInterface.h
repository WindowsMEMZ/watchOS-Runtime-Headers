//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentAuthorizationMinimalInterface_h
#define PKPaymentAuthorizationMinimalInterface_h
@import Foundation;

#include "PKPaymentAuthorizationInterface-Protocol.h"

@class NSString, UIViewController;

@interface PKPaymentAuthorizationMinimalInterface : NSObject<PKPaymentAuthorizationInterface>

@property (readonly, nonatomic) UIViewController *primaryViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPrimaryViewController:(id)controller;
@end

#endif /* PKPaymentAuthorizationMinimalInterface_h */
