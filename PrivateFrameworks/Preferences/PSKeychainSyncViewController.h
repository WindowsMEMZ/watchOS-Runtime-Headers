//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSKeychainSyncViewController_h
#define PSKeychainSyncViewController_h
@import Foundation;

#include "PSListController.h"
#include "KeychainSyncViewController-Protocol.h"
#include "KeychainSyncViewControllerDelegate-Protocol.h"
#include "PSKeychainSyncHeaderView.h"
#include "PSSpecifier.h"

@interface PSKeychainSyncViewController : PSListController<KeychainSyncViewController> {
  /* instance variables */
  PSKeychainSyncHeaderView *_headerView;
  PSSpecifier *_groupSpecifier;
}

@property (weak, nonatomic) NSObject<KeychainSyncViewControllerDelegate> *delegate;

/* instance methods */
- (id)headerView;
- (id)groupSpecifier;
- (id)specifiers;
- (void)setTitle:(id)title;
- (id)viewForHeaderInTableView:(id)view;
- (double)heightForHeaderInTableView:(id)view;
@end

#endif /* PSKeychainSyncViewController_h */
