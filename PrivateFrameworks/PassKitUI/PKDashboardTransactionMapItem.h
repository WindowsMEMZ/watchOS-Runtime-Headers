//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDashboardTransactionMapItem_h
#define PKDashboardTransactionMapItem_h
@import Foundation;

#include "PKDashboardItem-Protocol.h"

@class NSString, PKMerchant, PKPaymentTransaction;

@interface PKDashboardTransactionMapItem : NSObject<PKDashboardItem>

@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (retain, nonatomic) PKMerchant *merchant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)identifier;

/* instance methods */
@end

#endif /* PKDashboardTransactionMapItem_h */
