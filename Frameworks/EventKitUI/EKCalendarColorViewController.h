//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKCalendarColorViewController_h
#define EKCalendarColorViewController_h
@import Foundation;

#include "UITableViewController.h"
#include "EKCalendarColorEditItem.h"

@interface EKCalendarColorViewController : UITableViewController

@property (retain, nonatomic) EKCalendarColorEditItem *editItem;

/* instance methods */
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)contentSizeCategoryDidChangeNotification:(id)notification;
- (void)resetBackgroundColor;
- (void)traitCollectionDidChange:(id)change;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (id)tableView:(id)view titleForHeaderInSection:(long long)section;
- (struct CGSize { double x0; double x1; })preferredContentSize;
@end

#endif /* EKCalendarColorViewController_h */
