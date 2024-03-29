//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKReprocessMerchantActivity_h
#define PKReprocessMerchantActivity_h
@import Foundation;

#include "UIActivity.h"

@class PKPaymentPass, PKPaymentTransaction;

@interface PKReprocessMerchantActivity : UIActivity {
  /* instance variables */
  PKPaymentTransaction *_transaction;
  PKPaymentPass *_paymentPass;
}

/* instance methods */
- (id)initWithTransaction:(id)transaction paymentPass:(id)pass;
- (id)activityTitle;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)items;
- (void)prepareWithActivityItems:(id)items;
- (void)performActivity;
@end

#endif /* PKReprocessMerchantActivity_h */
