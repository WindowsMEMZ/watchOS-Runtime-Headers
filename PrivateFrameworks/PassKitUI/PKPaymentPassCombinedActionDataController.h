//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentPassCombinedActionDataController_h
#define PKPaymentPassCombinedActionDataController_h
@import Foundation;

#include "PKCombinedActionViewControllerDelegate-Protocol.h"
#include "PKRemoteActionGroupViewControllerDelegate-Protocol.h"

@class NSArray, NSString, PKPaymentPass, PKPaymentWebService, PKTransitBalanceModel, UIViewController;
@protocol PKPaymentDataProvider;

@interface PKPaymentPassCombinedActionDataController : NSObject<PKCombinedActionViewControllerDelegate, PKRemoteActionGroupViewControllerDelegate> {
  /* instance variables */
  PKPaymentPass *_pass;
  NSArray *_actionGroups;
  NSObject<PKPaymentDataProvider> *_paymentDataProvider;
  PKPaymentWebService *_webService;
  PKTransitBalanceModel *_transitBalanceModel;
  unsigned long long _mode;
}

@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPass:(id)pass actionGroups:(id)groups paymentDataProvider:(id)provider webService:(id)service balanceModel:(id)model mode:(unsigned long long)mode;
- (void)combinedActionViewControllerDidCancel:(id)cancel;
- (void)combinedActionViewControllerDidFinish:(id)finish;
- (void)remoteGroupActionsViewControllerDidCancel:(id)cancel;
- (void)remoteGroupActionsViewControllerDidPerformFetchActionGroup:(id)group;
@end

#endif /* PKPaymentPassCombinedActionDataController_h */
