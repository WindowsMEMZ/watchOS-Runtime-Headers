//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentTransactionDetailsFactory_h
#define PKPaymentTransactionDetailsFactory_h
@import Foundation;

@class PKContactResolver, PKPeerPaymentWebService;
@protocol PKPaymentDataProvider;

@interface PKPaymentTransactionDetailsFactory : NSObject {
  /* instance variables */
  PKContactResolver *_contactResolver;
  PKPeerPaymentWebService *_peerPaymentWebService;
  NSObject<PKPaymentDataProvider> *_paymentServiceDataProvider;
  long long _detailViewStyle;
}

/* instance methods */
- (id)initWithContactResolver:(id)resolver peerPaymentWebService:(id)service paymentServiceDataProvider:(id)provider detailViewStyle:(long long)style;
- (BOOL)canShowTransactionHistoryForTransaction:(id)transaction transactionSourceCollection:(id)collection;
- (id)_transactionFetcherWithTransactionSourceCollection:(id)collection transaction:(id)transaction;
- (id)detailViewControllerForTransaction:(id)transaction transactionSourceCollection:(id)collection familyCollection:(id)collection account:(id)account accountUserCollection:(id)collection physicalCards:(id)cards;
- (id)historyViewControllerForTransaction:(id)transaction transactionSourceCollection:(id)collection familyCollection:(id)collection account:(id)account accountUserCollection:(id)collection physicalCards:(id)cards;
- (void)historyViewControllerForTransaction:(id)transaction transactionSourceCollection:(id)collection familyCollection:(id)collection account:(id)account accountUserCollection:(id)collection physicalCards:(id)cards completion:(id /* block */)completion;
@end

#endif /* PKPaymentTransactionDetailsFactory_h */
