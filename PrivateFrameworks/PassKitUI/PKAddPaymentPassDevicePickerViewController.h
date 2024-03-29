//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAddPaymentPassDevicePickerViewController_h
#define PKAddPaymentPassDevicePickerViewController_h
@import Foundation;

#include "UITableViewController.h"
#include "PKAddPaymentPassDevicePickerDelegate-Protocol.h"
#include "PKTableHeaderView.h"

@class NSArray, PKAddPaymentPassRequestConfiguration;

@interface PKAddPaymentPassDevicePickerViewController : UITableViewController {
  /* instance variables */
  PKTableHeaderView *_headerView;
  NSArray *_webServices;
  PKAddPaymentPassRequestConfiguration *_configuration;
  BOOL _viewHasAppeared;
  BOOL _sentViewHasAppearedEvent;
}

@property (weak, nonatomic) NSObject<PKAddPaymentPassDevicePickerDelegate> *delegate;

/* instance methods */
- (id)initWithStyle:(long long)style;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithPaymentWebServices:(id)services configuration:(id)configuration;
- (void)dealloc;
- (void)reloadContentFromWebServices;
- (void)noteNavigationUserInterfaceDidDisappear;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (id)tableView:(id)view titleForFooterInSection:(long long)section;
- (void)scrollViewDidScroll:(id)scroll;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
@end

#endif /* PKAddPaymentPassDevicePickerViewController_h */
