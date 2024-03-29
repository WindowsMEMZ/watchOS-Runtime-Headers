//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PDInAppPaymentServiceExportedInterface_Protocol_h
#define PDInAppPaymentServiceExportedInterface_Protocol_h
@import Foundation;

@protocol PDInAppPaymentServiceExportedInterface <PDXPCServiceExportedInterface>
/* instance methods */
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)request forHostIdentifier:(id)identifier hostSceneIdentifier:(id)identifier hostSceneBundleIdentifier:(id)identifier orientation:(id)orientation intentTriggered:(BOOL)triggered handler:(id /* block */)handler;
- (void)registerPaymentListenerEndpoint:(id)endpoint forHostIdentifier:(id)identifier handler:(id /* block */)handler;
- (void)retrievePaymentListenerEndpointForHostIdentifier:(id)identifier handler:(id /* block */)handler;
- (void)merchantStatusCheck:(id)check merchantDomain:(id)domain sourceApplicationSecondaryIdentifier:(id)identifier handler:(id /* block */)handler;
- (void)paymentServicesMerchantURLForAPIType:(long long)apitype handler:(id /* block */)handler;
- (void)secureElementStatusWithCompletion:(id /* block */)completion;
- (void)paymentHardwareStatusWithType:(unsigned long long)type completion:(id /* block */)completion;
- (void)cardsAvailableForAMPWithCountryCode:(id)code completion:(id /* block */)completion;
- (void)cardDataForMerchantIdentifier:(id)identifier countryCode:(id)code completion:(id /* block */)completion;
- (void)enrollPaymentPassWithUniqueIdentifier:(id)identifier merchantSession:(id)session completion:(id /* block */)completion;
@end

#endif /* PDInAppPaymentServiceExportedInterface_Protocol_h */
