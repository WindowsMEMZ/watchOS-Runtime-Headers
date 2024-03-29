//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPeerPaymentAccountManager_h
#define NPKPeerPaymentAccountManager_h
@import Foundation;

@class PKPeerPaymentAccount, PKPeerPaymentService;

@interface NPKPeerPaymentAccountManager : NSObject

@property (retain) PKPeerPaymentAccount *account;
@property (readonly, nonatomic) PKPeerPaymentService *peerPaymentService;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initWithPeerPaymentService:(id)service;
- (id)init;
- (void)_handleAccountChanged:(id)changed;
- (void)_updateAccount;
@end

#endif /* NPKPeerPaymentAccountManager_h */
