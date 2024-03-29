//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCManagedMediaViewController_h
#define DMCManagedMediaViewController_h
@import Foundation;

#include "DMCProfileTableViewController.h"
#include "DMCApplicationProxy.h"
#include "DMCProfileViewModel.h"

@class MDMBook;

@interface DMCManagedMediaViewController : DMCProfileTableViewController

@property (retain, nonatomic) DMCProfileViewModel *profileViewModel;
@property (retain, nonatomic) DMCApplicationProxy *app;
@property (retain, nonatomic) MDMBook *book;

/* instance methods */
- (id)initWithProfileViewModel:(id)model managedApp:(id)app;
- (id)initWithProfileViewModel:(id)model managedBook:(id)book;
- (void)_setup;
- (void)dealloc;
- (void)_profileChanged:(id)changed;
- (void)_reloadTable:(id)table;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (double)tableView:(id)view estimatedHeightForRowAtIndexPath:(id)path;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
@end

#endif /* DMCManagedMediaViewController_h */
