//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterFinancingPlanPaymentScheduleComposerInstallmentItem_h
#define PKPayLaterFinancingPlanPaymentScheduleComposerInstallmentItem_h
@import Foundation;

#include "PKPayLaterFinancingPlanPaymentScheduleComposerItem-Protocol.h"

@class NSString, PKPayLaterFinancingPlan, PKPayLaterInstallment;

@interface PKPayLaterFinancingPlanPaymentScheduleComposerInstallmentItem : NSObject<PKPayLaterFinancingPlanPaymentScheduleComposerItem>

@property (readonly, nonatomic) PKPayLaterFinancingPlan *financingPlan;
@property (readonly, nonatomic) PKPayLaterInstallment *installment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFinancingPlan:(id)plan installment:(id)installment;
- (void)populateRow:(id)row;
- (unsigned long long)type;
- (id)installmentIdentifier;
- (id)paymentIdentifier;
- (id)date;
@end

#endif /* PKPayLaterFinancingPlanPaymentScheduleComposerInstallmentItem_h */
