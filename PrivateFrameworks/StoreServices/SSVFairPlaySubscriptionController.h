//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSVFairPlaySubscriptionController_h
#define SSVFairPlaySubscriptionController_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface SSVFairPlaySubscriptionController : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_accessQueue;
  BOOL _hasValidSubscriptionStatusDidChangeNotifyToken;
  int _subscriptionStatusDidChangeNotifyToken;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)enumerateAccountSubscriptionStatusUsingBlock:(id /* block */)block;
- (id)subscriptionStatusForAccountUniqueIdentifier:(unsigned long long)identifier;
- (BOOL)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(unsigned long long)identifier transactionType:(unsigned int)type machineIDData:(id)iddata returningSubscriptionBagData:(id *)data error:(id *)error;
- (BOOL)generateSubscriptionLeaseRequestWithAccountUniqueID:(unsigned long long)id transactionType:(unsigned int)type certificateData:(id)data assetIDData:(id)iddata returningLeaseData:(id *)data subscriptionBagData:(id *)data error:(id *)error;
- (BOOL)importSubscriptionKeyBagData:(id)data returningError:(id *)error;
- (BOOL)importSubscriptionKeyBagData:(id)data leaseInfoData:(id)data returningError:(id *)error;
- (BOOL)stopSubscriptionLease:(id *)lease;
@end

#endif /* SSVFairPlaySubscriptionController_h */
