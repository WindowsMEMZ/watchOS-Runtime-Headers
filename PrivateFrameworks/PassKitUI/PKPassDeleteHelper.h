//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassDeleteHelper_h
#define PKPassDeleteHelper_h
@import Foundation;

@interface PKPassDeleteHelper : NSObject
/* class methods */
+ (void)presentDeleteBarcodePassAlertForPass:(id)pass withHandler:(id)handler presentingViewController:(id)controller;
+ (void)deletePaymentPassAlertCopyForPass:(id)pass webService:(id)service paymentServiceDataProvider:(id)provider isBridge:(BOOL)bridge completion:(id /* block */)completion;
+ (void)deletePaymentPassAlertCopyForPass:(id)pass withAccount:(id)account paymentServiceDataProvider:(id)provider transitBalanceModel:(id)model transitPassProperties:(id)properties merchantTokensResponse:(id)response isBridge:(BOOL)bridge completion:(id /* block */)completion;
+ (void)presentDeletePaymentPassAlertForPass:(id)pass withAccount:(id)account paymentServiceDataProvider:(id)provider transitBalanceModel:(id)model transitPassProperties:(id)properties detailViewStyle:(long long)style deleteHander:(id)hander passLibraryDataProvider:(id)provider presentingViewController:(id)controller;
+ (void)presentMerchantTokenDeletePaymentPassAlertForPass:(id)pass withAccount:(id)account merchantTokensResponse:(id)response deleteHander:(id)hander passLibraryDataProvider:(id)provider navigationController:(id)controller presentingViewController:(id)controller isBridge:(BOOL)bridge;
+ (void)deletePaymentPass:(id)pass withDeleteHander:(id)hander passLibraryDataProvider:(id)provider presentingViewController:(id)controller;
+ (BOOL)_canDeletePaymentPass:(id)pass transitPassProperties:(id)properties;
+ (BOOL)hasAppleCashMerchantTokenForMerchantTokensResponse:(id)response;
@end

#endif /* PKPassDeleteHelper_h */
