//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterBusinessChatTopicComposer_h
#define PKPayLaterBusinessChatTopicComposer_h
@import Foundation;

@class PKAccount, PKAccountService, PKPayLaterFinancingPlan, PKPayLaterInstallment, PKPayLaterPayment, PKPaymentPass, PKPaymentWebService;

@interface PKPayLaterBusinessChatTopicComposer : NSObject {
  /* instance variables */
  PKAccountService *_accountService;
  PKPaymentWebService *_paymentWebService;
  PKPayLaterFinancingPlan *_financingPlan;
  PKAccount *_payLaterAccount;
  PKPaymentPass *_payLaterPass;
  PKPayLaterInstallment *_installment;
  PKPayLaterPayment *_payment;
}

/* instance methods */
- (id)initWithPayLaterAccount:(id)account payLaterPass:(id)pass financingPlan:(id)plan installment:(id)installment payment:(id)payment;
- (void)releventTopicsForContext:(unsigned long long)context completion:(id /* block */)completion;
- (void)_releventTopicsForPassContextWithCompletion:(id /* block */)completion;
- (void)_allBusinessChatTopicsForContext:(unsigned long long)context completion:(id /* block */)completion;
- (void)_dynamicBusinessChatTopicsForContext:(unsigned long long)context completion:(id /* block */)completion;
- (id)_staticBusinessChatTopicsForContext:(unsigned long long)context;
- (id)_staticPassContextBusinessChatTopics;
- (id)_staticFinancingPlanContextBusinessChatTopics;
- (id)_staticFinancingPlanPaymentContextBusinessChatTopics;
@end

#endif /* PKPayLaterBusinessChatTopicComposer_h */
