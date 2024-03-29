//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentPassDetailAutoReloadSectionController_h
#define PKPaymentPassDetailAutoReloadSectionController_h
@import Foundation;

#include "PKPaymentPassDetailSectionController.h"

@interface PKPaymentPassDetailAutoReloadSectionController : PKPaymentPassDetailSectionController
/* class methods */
+ (id)autoTopUpActionForPass:(id)pass;
+ (id)enteredValueActionForPass:(id)pass;
+ (id)autoReloadThresholdForPass:(id)pass action:(id)action;
+ (id)autoReloadAmountForPass:(id)pass action:(id)action;
@end

#endif /* PKPaymentPassDetailAutoReloadSectionController_h */
