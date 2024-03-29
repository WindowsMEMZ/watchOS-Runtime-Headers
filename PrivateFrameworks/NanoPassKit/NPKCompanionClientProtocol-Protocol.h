//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKCompanionClientProtocol_Protocol_h
#define NPKCompanionClientProtocol_Protocol_h
@import Foundation;

@protocol NPKCompanionClientProtocol <NSObject>
/* instance methods */
- (void)paymentPassWithUniqueIdentifier:(id)identifier didEnableTransactionService:(BOOL)service;
- (void)transactionSourceIdentifier:(id)identifier didReceiveTransaction:(id)transaction;
- (void)transactionSourceIdentifier:(id)identifier didRemoveTransactionWithIdentifier:(id)identifier;
- (void)paymentPassWithUniqueIdentifier:(id)identifier didUpdateWithTransitPassProperties:(id)properties;
- (void)paymentPassWithUniqueIdentifier:(id)identifier didUpdateWithBalances:(id)balances;
- (void)paymentPassWithUniqueIdentifier:(id)identifier didUpdateBalanceReminder:(id)reminder forBalance:(id)balance;
- (void)paymentPassWithUniqueIdentifier:(id)identifier didUpdateWithCredentials:(id)credentials;
- (void)paymentPassWithUniqueIdentifier:(id)identifier didEnableMessageService:(BOOL)service;
@end

#endif /* NPKCompanionClientProtocol_Protocol_h */
