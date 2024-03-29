//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupAssistantController_h
#define PKPaymentSetupAssistantController_h
@import Foundation;

#include "PKPaymentSetupAssistantCoreController.h"
#include "PKSetupAssistantContext.h"

@interface PKPaymentSetupAssistantController : PKPaymentSetupAssistantCoreController

@property (retain, nonatomic) PKSetupAssistantContext *setupAssistantContext;

/* instance methods */
- (id)initWithSetupAssistantContext:(id)context;
- (id)initWithSetupAssistant:(unsigned long long)assistant setupAssistantContext:(id)context;
- (BOOL)setupAssistantNeedsToRunReturningRequirements:(unsigned long long *)requirements;
- (BOOL)isFollowupNeededReturningRequirements:(unsigned long long *)requirements;
- (void)prepareForPresentationWithCompletion:(id /* block */)completion;
- (void)setupAssistantViewControllerWithCompletion:(id /* block */)completion;
- (BOOL)_isExpressSetupAssistant;
- (void)_setupAssistantViewControllerWithCompletion:(id /* block */)completion;
- (void)_bridgeStartingViewControllerForPaymentSetupContext:(long long)context completion:(id /* block */)completion;
- (void)_phoneStartingViewControllerForPaymentSetupContext:(long long)context completion:(id /* block */)completion;
@end

#endif /* PKPaymentSetupAssistantController_h */
