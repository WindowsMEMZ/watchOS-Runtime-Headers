//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSheetExperiment_h
#define PKPaymentSheetExperiment_h
@import Foundation;

#include "PKExperiment.h"

@interface PKPaymentSheetExperiment : PKExperiment

@property (readonly, nonatomic) BOOL isAA;
@property (readonly, nonatomic) BOOL isTaggedForHideDoubleClickToPay;
@property (readonly, nonatomic) BOOL shouldHideDoubleClickToPay;
@property (readonly, nonatomic) double timeIntervalToShowDoubleClickToPay;
@property (readonly, nonatomic) BOOL isTaggedForAllowInAppPaymentFailureRetry;
@property (readonly, nonatomic) BOOL shouldAllowInAppPaymentFailureRetry;
@property (readonly, nonatomic) BOOL isTaggedForLineItemsInMainPaymentSheet;
@property (readonly, nonatomic) BOOL shouldShowLineItemsInMainPaymentSheet;

/* instance methods */
- (id)namespaceName;
@end

#endif /* PKPaymentSheetExperiment_h */
