//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCRMConfigurationsViewController_h
#define DMCRMConfigurationsViewController_h
@import Foundation;

#include "DMCProfileTableViewController.h"
#include "RMConfigurationsSpecifierProvider.h"

@class NSArray;

@interface DMCRMConfigurationsViewController : DMCProfileTableViewController

@property (retain, nonatomic) RMConfigurationsSpecifierProvider *rmSpecifierProvider;
@property (retain, nonatomic) NSArray *rmTableSectionCells;
@property (retain, nonatomic) NSArray *rmSectionTitles;

/* instance methods */
- (id)initWithRMConfigurationsSpecifierProvider:(id)provider;
- (void)_setSections;
- (void)_rmConfigsChanged:(id)changed;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view titleForHeaderInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
@end

#endif /* DMCRMConfigurationsViewController_h */
