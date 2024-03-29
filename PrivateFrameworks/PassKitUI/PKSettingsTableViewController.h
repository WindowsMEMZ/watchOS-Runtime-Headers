//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSettingsTableViewController_h
#define PKSettingsTableViewController_h
@import Foundation;

#include "UITableViewController.h"
#include "PKSettingsTableViewConfiguration.h"
#include "PKTableViewDiffableDataSource.h"

@interface PKSettingsTableViewController : UITableViewController {
  /* instance variables */
  PKTableViewDiffableDataSource *_dataSource;
  PKSettingsTableViewConfiguration *_currentConfiguration;
}

/* instance methods */
- (void)viewDidLoad;
- (void)applyConfiguration:(id)configuration animated:(BOOL)animated;
- (void)applyConfiguration:(id)configuration reconfigureItems:(BOOL)items animated:(BOOL)animated;
- (long long)indexOfSectionWithIdentifier:(id)identifier;
- (id)indexPathForItemWithIdentifier:(id)identifier;
- (id)sections;
- (BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
@end

#endif /* PKSettingsTableViewController_h */
