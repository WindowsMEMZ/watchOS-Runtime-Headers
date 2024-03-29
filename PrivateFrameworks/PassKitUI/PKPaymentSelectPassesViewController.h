//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSelectPassesViewController_h
#define PKPaymentSelectPassesViewController_h
@import Foundation;

#include "PKPaymentSetupTableViewController.h"
#include "PKPaymentSelectPassesViewControllerDelegate-Protocol.h"
#include "PKTableHeaderView.h"

@class NSArray, NSMutableArray, NSString, PKPeerPaymentAccount;

@interface PKPaymentSelectPassesViewController : PKPaymentSetupTableViewController {
  /* instance variables */
  PKTableHeaderView *_headerView;
  NSArray *_passes;
  NSMutableArray *_selectedIndexPaths;
  NSObject<PKPaymentSelectPassesViewControllerDelegate> *_delegate;
  PKPeerPaymentAccount *_peerPaymentAccount;
}

@property (nonatomic) unsigned long long minimumSelectionCount;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) NSString *headerSubtitle;
@property (nonatomic) BOOL showCancelButton;
@property (nonatomic) BOOL confirmIntentToDelete;

/* instance methods */
- (id)initWithSecureElementPasses:(id)passes context:(long long)context delegate:(id)delegate peerPaymentAccount:(id)account;
- (void)willMoveToParentViewController:(id)controller;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (id)headerView;
- (void)setHeaderViewTitle:(id)title subtitle:(id)subtitle;
- (void)_setContinuousButtonEnabledState;
- (void)_continuousButtonPressed;
- (void)_setViewEnabledState:(BOOL)state;
- (void)_setNavigationBarEnabled:(BOOL)enabled;
- (void)_cancelPressed;
@end

#endif /* PKPaymentSelectPassesViewController_h */
