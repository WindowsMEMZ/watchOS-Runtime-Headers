//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKWalletTransactionSignal_h
#define PKWalletTransactionSignal_h
@import Foundation;

@interface PKWalletTransactionSignal : NSObject
/* class methods */
+ (void)donateSignalForPass:(id)pass transaction:(id)transaction queue:(id)queue completion:(id /* block */)completion;
+ (void)donateSignalForPass:(id)pass transactionType:(int)type queue:(id)queue completion:(id /* block */)completion;
+ (BOOL)walletTransactionTriggerEnabled;
+ (void)_donateSignalForPass:(id)pass transactionType:(int)type transactionDate:(id)date transactionID:(id)id merchantCategory:(long long)category merchantDetailedCategory:(id)category queue:(id)queue completion:(id /* block */)completion;
@end

#endif /* PKWalletTransactionSignal_h */
