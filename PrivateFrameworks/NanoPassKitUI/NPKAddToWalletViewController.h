//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKAddToWalletViewController_h
#define NPKAddToWalletViewController_h
@import Foundation;

#include "UIViewController.h"
#include "NPKAddToWalletViewControllerDelegate-Protocol.h"

@class NSArray;

@interface NPKAddToWalletViewController : UIViewController

@property (weak, nonatomic) NSObject<NPKAddToWalletViewControllerDelegate> *delegate;
@property (readonly, nonatomic) NSArray *passes;
@property (nonatomic) BOOL showCancelNavigationItem;
@property (nonatomic) BOOL ingestPassesUponConfirmation;

/* class methods */
+ (id)addPassesViewControllerWithPasses:(id)passes;

/* instance methods */
- (id)initWithPasses:(id)passes;
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (void)_setUpTitle;
- (void)_ingestPasses;
- (void)_handlePassesAdded;
- (void)_userFlowFinished;
- (void)_handleCancelButton:(id)button;
- (void)_presentAlertWalletUninstalled;
@end

#endif /* NPKAddToWalletViewController_h */
