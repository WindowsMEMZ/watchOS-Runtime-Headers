//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentRegistrationFlowController_h
#define PKPeerPaymentRegistrationFlowController_h
@import Foundation;

#include "PKPaymentSetupDelegate-Protocol.h"

@class NSString, PKCurrencyAmount, PKPeerPaymentAccount;

@interface PKPeerPaymentRegistrationFlowController : NSObject

@property (readonly, nonatomic) PKPeerPaymentAccount *account;
@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *senderAddress;
@property (readonly, weak, nonatomic) NSObject<PKPaymentSetupDelegate> *setupDelegate;

/* instance methods */
- (id)initWithAccount:(id)account currencyAmount:(id)amount state:(unsigned long long)state senderAddress:(id)address setupDelegate:(id)delegate;
- (id)initWithUserInfo:(id)info setupDelegate:(id)delegate;
- (void)preflightWithCompletion:(id /* block */)completion;
@end

#endif /* PKPeerPaymentRegistrationFlowController_h */
