//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKMockPeerPaymentAccountManager_h
#define NPKMockPeerPaymentAccountManager_h
@import Foundation;

#include "NPKPeerPaymentAccountManager.h"

@class PKPeerPaymentAccount;
@protocol OS_dispatch_queue;

@interface NPKMockPeerPaymentAccountManager : NPKPeerPaymentAccountManager {
  /* instance variables */
  PKPeerPaymentAccount *_mockAccount;
  NSObject<OS_dispatch_queue> *_accountQueue;
  unsigned long long _balanceOffset;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initWithPeerPaymentService:(id)service;
- (void)dealloc;
- (void)_updateMockBalance;
- (id)account;
@end

#endif /* NPKMockPeerPaymentAccountManager_h */
