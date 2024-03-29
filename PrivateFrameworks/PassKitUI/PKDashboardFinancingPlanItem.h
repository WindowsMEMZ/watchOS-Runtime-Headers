//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDashboardFinancingPlanItem_h
#define PKDashboardFinancingPlanItem_h
@import Foundation;

#include "PKDashboardItem-Protocol.h"

@class NSString, PKAccount, PKPayLaterFinancingPlan, PKPayLaterPaymentIntentController;

@interface PKDashboardFinancingPlanItem : NSObject<PKDashboardItem>

@property (readonly, nonatomic) PKPayLaterFinancingPlan *financingPlan;
@property (readonly, nonatomic) PKAccount *payLaterAccount;
@property (readonly, nonatomic) PKPayLaterPaymentIntentController *paymentIntentController;
@property (readonly, copy, nonatomic) NSString *pageTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)identifier;

/* instance methods */
- (id)initWithFinancingPlan:(id)plan payLaterAccount:(id)account paymentIntentController:(id)controller pageTag:(id)tag;
@end

#endif /* PKDashboardFinancingPlanItem_h */
