//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentAuthorizationCoordinatorDelegate_Protocol_h
#define PKPaymentAuthorizationCoordinatorDelegate_Protocol_h
@import Foundation;

@protocol PKPaymentAuthorizationCoordinatorDelegate <NSObject>
/* instance methods */
- (void)paymentAuthorizationCoordinator:(id)coordinator didAuthorizePayment:(id)payment handler:(id /* block */)handler;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)finish;
@optional
/* instance methods */
- (void)paymentAuthorizationCoordinator:(id)coordinator didAuthorizePayment:(id)payment completion:(id /* block */)completion;
- (void)paymentAuthorizationCoordinatorWillAuthorizePayment:(id)payment;
- (void)paymentAuthorizationCoordinator:(id)coordinator didRequestMerchantSessionUpdate:(id /* block */)update;
- (void)paymentAuthorizationCoordinator:(id)coordinator didSelectShippingMethod:(id)method handler:(id /* block */)handler;
- (void)paymentAuthorizationCoordinator:(id)coordinator didSelectShippingAddress:(id)address handler:(id /* block */)handler;
- (void)paymentAuthorizationCoordinator:(id)coordinator didSelectPaymentMethod:(id)method handler:(id /* block */)handler;
- (void)paymentAuthorizationCoordinator:(id)coordinator didChangeCouponCode:(id)code handler:(id /* block */)handler;
- (void)paymentAuthorizationCoordinator:(id)coordinator didSelectShippingMethod:(id)method completion:(id /* block */)completion;
- (void)paymentAuthorizationCoordinator:(id)coordinator didSelectShippingAddress:(id)address completion:(id /* block */)completion;
- (void)paymentAuthorizationCoordinator:(id)coordinator didSelectPaymentMethod:(id)method completion:(id /* block */)completion;
- (id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)coordinator;
- (id)presentationSceneBundleIdentifierForPaymentAuthorizationCoordinator:(id)coordinator;
@end

#endif /* PKPaymentAuthorizationCoordinatorDelegate_Protocol_h */
